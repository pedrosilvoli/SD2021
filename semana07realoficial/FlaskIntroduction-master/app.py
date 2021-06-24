from flask import Flask, render_template, url_for, request, redirect 
from flask_sqlalchemy import SQLAlchemy
from datetime import datetime

app = Flask(__name__)
app.config['SQLALCHEMY_DATABASE_URI'] = 'sqlite:///test.db' #informa onde está o banco de dados
db = SQLAlchemy(app) #inicializa o BD

class Todo(db.Model): 
    id = db.Column(db.Integer, primary_key=True) #inteiro que referencia o ID de cada entrada 
    content = db.Column(db.String(200), nullable=False) #coluna de texto que contém o texto de cada entrada, não aceita entradas em vazio
    date_created = db.Column(db.DateTime, default=datetime.utcnow) #para toda nova entrada, a data fica registrada automaticamente como o horário atual no fuso horário dado

    def __repr__(self): #retorna uma string ao adicionar uma tarefa
        return '<Task %r>' % self.id


@app.route('/', methods=['POST', 'GET']) #os métodos permitem receber e enviar dados ao BD
def index(): 
    if request.method == 'POST':
        task_content = request.form['content']#recebe o id do form que queremos o conteúdo
        new_task = Todo(content=task_content)#criação do modelo to do

        try: #tentar enviar os dados para o BD
            db.session.add(new_task)
            db.session.commit()
            return redirect('/')#redireciona de volta pro index
        except: #caso haja falha
            return 'There was an issue adding your task'

    else:
        tasks = Todo.query.order_by(Todo.date_created).all()#olha todo o conteúdo do BD na ordem em que foram criados e retorna todos
        return render_template('index.html', tasks=tasks)#passa esse conteúdo pro template


@app.route('/delete/<int:id>')#definindo a rota de deletar, recebe o id (que é único de cada task)
def delete(id):
    task_to_delete = Todo.query.get_or_404(id)#tenta pegar a task com o id recebido e se não conseguir retorna erro de request 404

    try:#tenta deletar, se der certo redireciona para a pagina inicial
        db.session.delete(task_to_delete)
        db.session.commit()
        return redirect('/')
    except:#se der errado retorna mensagem de erro
        return 'There was a problem deleting that task'

@app.route('/update/<int:id>', methods=['GET', 'POST'])
def update(id):#função de atualização, recebe o id da task a ser atualizada
    task = Todo.query.get_or_404(id)

    if request.method == 'POST':
        task.content = request.form['content']#o conteúdo da task a ser atualizada passa a ser o conteúdo do userform submetido pelo usuário

        try:
            db.session.commit()#atualiza o conteúdo
            return redirect('/')
        except:
            return 'There was an issue updating your task'

    else:
        return render_template('update.html', task=task)


if __name__ == "__main__":
    app.run(debug=True)
