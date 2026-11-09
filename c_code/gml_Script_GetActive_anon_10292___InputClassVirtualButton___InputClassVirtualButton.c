// gml_Script_GetActive_anon_10292___InputClassVirtualButton___InputClassVirtualButton @ 0x14005b3b0

undefined8 *
gml_Script_GetActive_anon_10292___InputClassVirtualButton___InputClassVirtualButton
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  char *local_b0;
  undefined4 local_a8;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined4 local_78 [3];
  byte local_6c;
  undefined1 local_68 [12];
  byte local_5c;
  undefined1 local_58 [12];
  byte local_4c;
  undefined4 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  
  local_b0 = "gml_Script_GetThreshold@anon@9744@__InputClassVirtualButton@__InputClassVirtualButton"
  ;
  local_b8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_b8;
  local_a8 = 0x152;
  uVar5 = 1;
  _eh_vector_constructor_iterator_(local_78,0x10,3,FUN_1400424d0,FUN_140041b30);
  puVar1 = (undefined4 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419fe7c8);
  local_bc = 0xffffff;
  local_c8 = 0;
  local_cc = 0xffffff;
  local_d8 = 0;
  local_7c = 0;
  local_88 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if (*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddc270) {
    _Init_thread_header(&DAT_141ddc270);
    if (DAT_141ddc270 == -1) {
      DAT_141ddc418 = (longlong *)FUN_140e63aa0(DAT_1419fe788);
      _Init_thread_footer(&DAT_141ddc270);
    }
  }
  if (DAT_141ddc030 == '\0') {
    FUN_140e64380(DAT_141ddc418,
                  "gml_Script_GetThreshold@anon@9744@__InputClassVirtualButton@__InputClassVirtualButton"
                 );
    FUN_140e64380(param_1,
                  "gml_Script_GetThreshold@anon@9744@__InputClassVirtualButton@__InputClassVirtualButton"
                 );
  }
  local_a8 = 0x154;
  if (DAT_141ddc030 == '\0') {
    DAT_141ddc030 = '\x01';
    puVar2 = (undefined4 *)(**(code **)(*DAT_141ddc418 + 0x10))(DAT_141ddc418,DAT_1419fe7f8);
    FUN_140e609c0(DAT_141a729d8);
    FUN_140e645a0(&local_98,
                  gml_Script_Active_anon_10021___InputClassVirtualButton___InputClassVirtualButton,0
                 );
    if (&local_98 != puVar1) {
      local_e8 = local_98;
      uStack_e4 = uStack_94;
      uStack_e0 = uStack_90;
      uStack_dc = uStack_8c;
      if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_e8);
    }
    FUN_140e60910(1);
    if (puVar1 != local_78) {
      local_e8 = *puVar1;
      uStack_e4 = puVar1[1];
      uStack_e0 = puVar1[2];
      uStack_dc = puVar1[3];
      if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_78);
      }
      FUN_140041b80(local_78,&local_e8);
    }
    if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    local_48 = local_78;
    local_e8 = (undefined4)DAT_1419df7b0;
    uStack_e4 = DAT_1419df7b0._4_4_;
    uStack_e0 = DAT_1419df7b8;
    uStack_dc = DAT_1419df7bc;
    if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_68);
    }
    FUN_140041b80(local_68,&local_e8);
    local_40 = local_68;
    local_e8 = (undefined4)DAT_1419df7b0;
    uStack_e4 = DAT_1419df7b0._4_4_;
    uStack_e0 = DAT_1419df7b8;
    uStack_dc = DAT_1419df7bc;
    if ((1 << (local_4c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_58);
    }
    FUN_140041b80(local_58,&local_e8);
    local_38 = local_58;
    FUN_140e609c0(DAT_141ddc418);
    puVar1 = (undefined4 *)
             FUN_140e634e0(param_1,param_2,&local_88,3,CONCAT44(uVar5,DAT_1419fd6d8),&local_48);
    if (puVar1 != puVar2) {
      local_e8 = *puVar1;
      uStack_e4 = puVar1[1];
      uStack_e0 = puVar1[2];
      uStack_dc = puVar1[3];
      if ((1 << ((byte)puVar2[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar2);
      }
      FUN_140041b80(puVar2,&local_e8);
    }
    FUN_140e60910(1);
  }
  local_a8 = 0x159;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fe238);
  uVar4 = (**(code **)(*DAT_141ddc418 + 8))(DAT_141ddc418,DAT_1419fe7f8);
  if (puVar3 != &local_c8) {
    local_e8 = *(undefined4 *)puVar3;
    uStack_e4 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_e0 = *(undefined4 *)(puVar3 + 1);
    uStack_dc = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140041b80(&local_c8,&local_e8);
  }
  FUN_140e87930(uVar4,DAT_1419fe178,0x80000000,&local_c8);
  local_a8 = 0x15a;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fe298);
  if (puVar3 != &local_d8) {
    local_e8 = *(undefined4 *)puVar3;
    uStack_e4 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_e0 = *(undefined4 *)(puVar3 + 1);
    uStack_dc = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    FUN_140041b80(&local_d8,&local_e8);
  }
  puVar3 = (undefined8 *)(**(code **)(*DAT_141ddc418 + 8))(DAT_141ddc418,DAT_1419fe7f8);
  FUN_140e87930(puVar3,DAT_1419fe0f8,0x80000000,&local_d8);
  local_a8 = 0x15c;
  if (puVar3 != param_3) {
    local_e8 = *(undefined4 *)puVar3;
    uStack_e4 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_e0 = *(undefined4 *)(puVar3 + 1);
    uStack_dc = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_e8);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  _eh_vector_destructor_iterator_(local_78,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_b8;
  return param_3;
}

