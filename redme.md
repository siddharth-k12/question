Q1:
answere:I haven't build a RAG System yet personally.

Q2:
answere: I use gemini Api key in a project.

Q3:
ans:Request -> Routes -> Middleware -> controller -> models -> Response

    In my MERN project the backend was organized into routes, middleware, controllers, and models. A request hits the route first, then passes through middleware — like JWT auth and role checking — before reaching the controller. The controller handles the logic and talks to the MongoDB model, then sends the response. I also had a centralized error handler middleware at the bottom so every thrown error flows to one place instead of writing try-catch everywhere

Q4 :
ans:i chose mongodb beacuse my data had variable structure - different products types had different
attributes some data like cart items directly in document faster to read
For Schma design , I followed this rule-data you always read together , store together. Data you query independently keep separet

    for reletionship i used refernces (objectId) like product refrecend in orders

Q5 :
ans: the prompt so the model answers from real data. Second, prompt constraints — explicitly tell the model 'if the answer is not in the context, say I don't know, do not make up information.' Third, for structured outputs I validate the JSON response with a schema validator and retry if it fails

Q6 :
ans: 1. User types a question in react and hits send 
    2. Frontend calls POSt /api/chat with the message via axios 
    3. Express backend recives it autheticaties the uer via JWT 
    4. construct the full prompt - System Prompt + context + converstion history + user message
    5 calls the openAI api with the prompt 
    6. response strems back - backend pipes the stream directly to the frontend using server sent events 
    7. Final response is save to MongoDB for converstion history
