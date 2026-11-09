// gml_Script_InputSetHotswapCallback @ 0x1403674b0

undefined8 *
gml_Script_InputSetHotswapCallback
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong *local_res8;
  undefined8 local_res10;
  undefined8 local_108;
  char *local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined4 local_e4;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined1 local_98 [16];
  longlong local_88;
  undefined1 local_78 [64];
  
  local_100 = "gml_Script_InputSetHotswap";
  local_108 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_108;
  local_f8 = 0xf;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(local_78,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_e4 = 0xffffff;
  local_f0 = 0;
  local_bc = 0;
  local_c8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141dde704) &&
     (_Init_thread_header(&DAT_141dde704), DAT_141dde704 == -1)) {
    DAT_141dde708 = (longlong *)FUN_140e63aa0(DAT_1419f36e8);
    _Init_thread_footer(&DAT_141dde704);
  }
  if (DAT_141ddc136 == '\0') {
    FUN_140e64380(DAT_141dde708,"gml_Script_InputSetHotswap");
    FUN_140e64380(local_res8,"gml_Script_InputSetHotswap");
  }
  local_f8 = 0x11;
  if (DAT_141ddc136 == '\0') {
    DAT_141ddc136 = '\x01';
    puVar3 = (undefined8 *)(**(code **)(*DAT_141dde708 + 0x10))(DAT_141dde708,DAT_1419fcb48);
    FUN_140e609c0(DAT_141dde708);
    puVar4 = (undefined8 *)
             gml_Script__array_anon_215___InputSystemCallbackArray___InputSystemCallbackArray
                       (local_res8,local_res10,&local_c8,0,0);
    if (puVar4 != puVar3) {
      local_d8 = *puVar4;
      uStack_d0 = *(undefined4 *)(puVar4 + 1);
      uStack_cc = *(undefined4 *)((longlong)puVar4 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      FUN_140041b80(puVar3,&local_d8);
    }
    FUN_140e60910(1);
  }
  local_f8 = 0x15;
  uVar5 = (**(code **)(*DAT_141dde708 + 8))(DAT_141dde708,DAT_1419fcb48);
  iVar2 = FUN_140e63cb0(local_98,&local_res8,&local_res10,uVar5);
  if (0 < iVar2) {
    do {
      local_f8 = 0x17;
      uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a026f8);
      if (param_4 < 1) {
        puVar3 = &DAT_1419df7b0;
      }
      else {
        puVar3 = (undefined8 *)*param_5;
      }
      iVar2 = FUN_140e851f0(puVar3,uVar5,DAT_141955260,0);
      if (iVar2 == 0) {
        local_f8 = 0x17;
        goto LAB_140367836;
      }
      local_f8 = 0x19;
      if (param_4 < 1) {
        puVar3 = &DAT_1419df7b0;
      }
      else {
        puVar3 = (undefined8 *)*param_5;
      }
      cVar1 = FUN_140e491e0(puVar3);
      if (cVar1 == '\0') {
        local_f8 = 0x26;
        puVar3 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a026f8);
        uStack_cc = 0xd;
        local_d8 = 0;
        if (&local_d8 != puVar3) {
          local_a8 = 0;
          uStack_a4 = 0;
          uStack_a0 = uStack_d0;
          uStack_9c = 0xd;
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar3);
          }
          FUN_140041b80(puVar3,&local_a8);
        }
      }
      else {
        local_f8 = 0x1b;
        if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_f0);
        }
        local_e4 = 0;
        local_f0 = 0x3ff0000000000000;
        local_f8 = 0x22;
        puVar3 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a026f8);
        uStack_ac = 0xd;
        local_b8 = 0x3ff0000000000000;
        if (&local_b8 != puVar3) {
          local_a8 = 0;
          uStack_a4 = 0x3ff00000;
          uStack_a0 = uStack_b0;
          uStack_9c = 0xd;
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar3);
          }
          FUN_140041b80(puVar3,&local_a8);
        }
      }
      cVar1 = FUN_140e643f0(local_98,&local_res8,&local_res10);
    } while (cVar1 != '\0');
  }
  FUN_140e63970(local_98,&local_res8,&local_res10);
LAB_140367836:
  if (local_88 != 0) {
    FUN_140e4cd60();
    local_88 = 0;
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f0);
  }
  _eh_vector_destructor_iterator_(local_78,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_108;
  return param_3;
}

