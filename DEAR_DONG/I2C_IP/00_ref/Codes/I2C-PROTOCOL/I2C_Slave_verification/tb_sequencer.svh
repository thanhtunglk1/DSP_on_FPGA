class tb_sequencer extends uvm_sequencer#(trans1);
    
    `uvm_component_utils(tb_sequencer) 

    //constructor
    function new(string name, uvm_component parent);
        super.new(name,parent);
    endfunction

endclass
