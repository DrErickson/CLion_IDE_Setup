
## `struct`

There are many instances where it is convenient to group variables together.

## `struct` versus `class`
The only difference between `struct` and `class` is that all `struct` methods 
and member variables are `public`.  A `class` can have both private and 
public methods and member variables.


```mermaid
graph TB
    subgraph Shape1[Shape]
        subgraph public_params[Public Member Functions]
            direction LR
            public_members["GetWidth()<br>GetHeight()<br>GetX()<br>GetY()"]
        end
        subgraph priv_params[Private Member Variables]
            direction LR
            priv_members[width<br>height<br>x<br>y]
        end
    end
    
    
    
    subgraph Shape2[Shape]
        subgraph public_params2[Public Member Functions]
            direction LR
            public_members2["GetWidth()<br>GetHeight()<br>GetX()<br>GetY()"]
        end
        subgraph priv_params2[Private Member Variables]
            direction LR
            priv_members2[width<br>height<br>x<br>y]
        end
    end
```
