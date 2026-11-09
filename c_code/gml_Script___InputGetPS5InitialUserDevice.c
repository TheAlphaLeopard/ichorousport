// gml_Script___InputGetPS5InitialUserDevice @ 0x14009bf10

undefined8 *
gml_Script___InputGetPS5InitialUserDevice(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong *local_res8;
  undefined8 local_res10;
  undefined4 uVar7;
  undefined8 uVar6;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  char *local_a0;
  undefined4 local_98;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 local_78 [16];
  longlong local_68;
  undefined1 local_58 [48];
  
  local_a0 = "gml_Script___InputGetMouseOutput";
  local_a8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_a8;
  local_98 = 3;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(local_58,0x10,2,FUN_1400424d0,FUN_140041b30);
  uStack_7c = 0xffffff;
  local_88 = 0;
  local_bc = 0;
  local_c8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if (*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddc6a0) {
    _Init_thread_header(&DAT_141ddc6a0);
    if (DAT_141ddc6a0 == -1) {
      DAT_141ddc6a8 = (longlong *)FUN_140e63aa0(DAT_141a01638);
      _Init_thread_footer(&DAT_141ddc6a0);
    }
  }
  if (DAT_141ddc046 == '\0') {
    FUN_140e64380(DAT_141ddc6a8,"gml_Script___InputGetMouseOutput");
    FUN_140e64380(local_res8,"gml_Script___InputGetMouseOutput");
  }
  local_98 = 5;
  if (DAT_141ddc046 == '\0') {
    DAT_141ddc046 = '\x01';
    puVar3 = (undefined8 *)(**(code **)(*DAT_141ddc6a8 + 0x10))(DAT_141ddc6a8,DAT_1419fcb48);
    FUN_140e609c0(DAT_141ddc6a8);
    puVar4 = (undefined8 *)
             gml_Script__array_anon_215___InputSystemCallbackArray___InputSystemCallbackArray
                       (local_res8,local_res10,&local_c8,0,0);
    if (puVar4 != puVar3) {
      local_b8 = *puVar4;
      uStack_b0 = *(undefined4 *)(puVar4 + 1);
      uStack_ac = *(undefined4 *)((longlong)puVar4 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      FUN_140041b80(puVar3,&local_b8);
    }
    FUN_140e60910(1);
  }
  local_98 = 8;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  uVar7 = 0;
  uVar5 = gml_Script_InputGetBindingName(local_res8,local_res10,&local_c8,0,0);
  cVar1 = FUN_140e491e0(uVar5);
  if (cVar1 == '\0') {
    local_98 = 8;
    if (param_3 != &DAT_1419df7b0) {
      local_b8 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
      uStack_b0 = DAT_1419df7b8;
      uStack_ac = DAT_1419df7bc;
      if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(param_3);
      }
      FUN_140041b80(param_3,&local_b8);
    }
  }
  else {
    local_98 = 10;
    uVar5 = (**(code **)(*DAT_141ddc6a8 + 8))(DAT_141ddc6a8,DAT_1419fcb48);
    iVar2 = FUN_140e63cb0(local_78,&local_res8,&local_res10,uVar5);
    if (iVar2 < 1) {
      FUN_140e63970(local_78,&local_res8,&local_res10);
    }
    else {
      local_98 = 0xc;
      uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a01618);
      cVar1 = FUN_140e491e0(uVar5);
      if (cVar1 == '\0') {
        local_98 = 0x15;
        FUN_140e85f80(local_res8,DAT_141a015f8,0x80000000,&local_88);
        uStack_ac = 0;
        local_b8 = 0;
        iVar2 = FUN_140e851f0(&local_88,&local_b8,DAT_141955260,0);
        if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_b8);
        }
        if (iVar2 == 0) {
          local_98 = 0x1b;
          if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_c8);
          }
          local_c8 = 0;
          local_c0 = 0;
          local_bc = 5;
          uVar6 = CONCAT44(uVar7,DAT_141a01608);
          uVar5 = FUN_140e634e0(local_res8,local_res10,&local_c8,0,uVar6,0);
          uVar7 = (undefined4)((ulonglong)uVar6 >> 0x20);
          cVar1 = FUN_140e491e0(uVar5);
          if (cVar1 == '\0') {
            local_98 = 0x1c;
            if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_c8);
            }
            local_c8 = 0;
            local_c0 = 0;
            local_bc = 5;
            uVar5 = FUN_140e634e0(local_res8,local_res10,&local_c8,0,CONCAT44(uVar7,DAT_141a015e8),0
                                 );
            cVar1 = FUN_140e491e0(uVar5);
            if (cVar1 == '\0') {
              local_98 = 0x1e;
              uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a01648);
              cVar1 = FUN_140e491e0(uVar5);
              if (cVar1 == '\0') {
                local_98 = 0x2e;
                if (param_3 != &DAT_1419df7b0) {
                  local_b8 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
                  uStack_b0 = DAT_1419df7b8;
                  uStack_ac = DAT_1419df7bc;
                  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(param_3);
                  }
                  FUN_140041b80(param_3,&local_b8);
                }
              }
              else {
                local_98 = 0x21;
                if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(param_3);
                }
                *(undefined4 *)((longlong)param_3 + 0xc) = 0;
                *param_3 = 0x3ff0000000000000;
              }
            }
            else {
              local_98 = 0x1c;
              if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(param_3);
              }
              *(undefined4 *)((longlong)param_3 + 0xc) = 0;
              *param_3 = 0x40e400a000000000;
            }
          }
          else {
            local_98 = 0x1b;
            if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(param_3);
            }
            *(undefined4 *)((longlong)param_3 + 0xc) = 0;
            *param_3 = 0x40e4008000000000;
          }
        }
        else {
          local_98 = 0x18;
          FUN_140e85f80(local_res8,DAT_141a015f8,0x80000000,&local_88);
          if (&local_88 != param_3) {
            local_b8 = local_88;
            uStack_b0 = uStack_80;
            uStack_ac = uStack_7c;
            if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(param_3);
            }
            FUN_140041b80(param_3,&local_b8);
          }
        }
      }
      else {
        local_98 = 0xf;
        if (param_3 != &DAT_1419df7b0) {
          local_b8 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
          uStack_b0 = DAT_1419df7b8;
          uStack_ac = DAT_1419df7bc;
          if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(param_3);
          }
          FUN_140041b80(param_3,&local_b8);
        }
      }
    }
    if (local_68 != 0) {
      FUN_140e4cd60();
      local_68 = 0;
    }
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  _eh_vector_destructor_iterator_(local_58,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_a8;
  return param_3;
}

