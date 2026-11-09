// gml_GlobalScript_InputMouseDeviceX @ 0x140339840

undefined8 *
gml_GlobalScript_InputMouseDeviceX
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  undefined8 *local_res18;
  code *pcVar9;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  byte local_7c;
  undefined8 local_78;
  undefined4 local_6c;
  uint local_68 [2];
  undefined8 *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  char *local_40;
  undefined4 local_38;
  
  local_40 = "gml_Script_InputMouseCheck";
  local_48 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_48;
  local_38 = 7;
  FUN_140041df0(local_68,param_4,1,param_5);
  pcVar9 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_88,0x10,1,FUN_1400424d0,FUN_140041b30);
  local_6c = 0xffffff;
  local_78 = 0;
  local_8c = 0;
  local_98 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141dde368) &&
     (_Init_thread_header(&DAT_141dde368), DAT_141dde368 == -1)) {
    DAT_141dde378 = (longlong *)FUN_140e63aa0(DAT_1419f1cc8);
    _Init_thread_footer(&DAT_141dde368);
  }
  local_38 = 7;
  puVar8 = &DAT_1419df7b0;
  uVar7 = (ulonglong)local_68[0];
  if ((int)local_68[0] < 1) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)*local_60;
  }
  iVar2 = FUN_140e851f0(puVar6,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 == 0) {
    local_38 = 7;
    if ((int)local_68[0] < 1) {
      puVar6 = &DAT_1419df7b0;
    }
    else {
      puVar6 = (undefined8 *)*local_60;
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar6);
    }
    *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
    *puVar6 = 0x3ff0000000000000;
  }
  if (DAT_141ddc0f7 == '\0') {
    FUN_140e64380(DAT_141dde378,"gml_Script_InputMouseCheck");
    FUN_140e64380(param_1,"gml_Script_InputMouseCheck");
  }
  local_38 = 9;
  if (DAT_141ddc0f7 == '\0') {
    DAT_141ddc0f7 = '\x01';
    if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    local_98 = 0;
    local_90 = 0;
    local_8c = 5;
    puVar3 = (undefined4 *)(**(code **)(*DAT_141dde378 + 0x10))(DAT_141dde378,DAT_1419fcb48);
    FUN_140e609c0(DAT_141dde378);
    pcVar9 = (code *)0x0;
    puVar4 = (undefined4 *)
             gml_Script__array_anon_215___InputSystemCallbackArray___InputSystemCallbackArray
                       (param_1,param_2,&local_98,0,0);
    if (puVar4 != puVar3) {
      local_58 = *puVar4;
      uStack_54 = puVar4[1];
      uStack_50 = puVar4[2];
      uStack_4c = puVar4[3];
      if ((1 << ((byte)puVar3[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      FUN_140041b80(puVar3,&local_58);
    }
    FUN_140e60910(1);
  }
  local_38 = 10;
  uVar5 = (**(code **)(*DAT_141dde378 + 8))(DAT_141dde378,DAT_1419fcb48);
  FUN_140e87440(uVar5,DAT_141a02c28,0x80000000,&local_78,(ulonglong)pcVar9 & 0xffffffffffffff00,0);
  cVar1 = FUN_140e491e0(&local_78);
  if (cVar1 == '\0') {
    local_38 = 0xc;
    if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    local_98 = 0;
    local_90 = 0;
    local_8c = 5;
    if (((int)local_68[0] < 1) || (puVar8 = (undefined8 *)*local_60, puVar8 != &local_88)) {
      local_58 = *(undefined4 *)puVar8;
      uStack_54 = *(undefined4 *)((longlong)puVar8 + 4);
      uStack_50 = *(undefined4 *)(puVar8 + 1);
      uStack_4c = *(undefined4 *)((longlong)puVar8 + 0xc);
      if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_88);
      }
      FUN_140041b80(&local_88,&local_58);
    }
    local_res18 = &local_88;
    puVar8 = (undefined8 *)gml_Script_InputMouseDeviceX(param_1,param_2,&local_98,1,&local_res18);
    if (puVar8 != param_3) {
      local_58 = *(undefined4 *)puVar8;
      uStack_54 = *(undefined4 *)((longlong)puVar8 + 4);
      uStack_50 = *(undefined4 *)(puVar8 + 1);
      uStack_4c = *(undefined4 *)((longlong)puVar8 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(param_3);
      }
      FUN_140041b80(param_3,&local_58);
    }
  }
  else {
    local_38 = 10;
    *(undefined4 *)((longlong)param_3 + 0xc) = 0xd;
    *param_3 = 0;
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  _eh_vector_destructor_iterator_(&local_88,0x10,1,FUN_140041b30);
  if (0 < (int)local_68[0]) {
    puVar8 = local_60;
    do {
      puVar6 = (undefined8 *)*puVar8;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar6);
      }
      *puVar6 = 0;
      *(undefined4 *)(puVar6 + 1) = 0;
      *(undefined4 *)((longlong)puVar6 + 0xc) = 5;
      puVar8 = puVar8 + 1;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  FUN_140e4cd60(local_60);
  DAT_141dc7a50 = (undefined8 *)local_48;
  return param_3;
}

