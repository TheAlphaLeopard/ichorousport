// gml_Script_InputPlugInVerbSet @ 0x14035d3d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_InputPlugInVerbSet
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  code *pcVar7;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  char *local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  byte local_94;
  undefined8 local_90;
  byte local_84;
  undefined8 local_80;
  byte local_74;
  undefined8 local_70;
  undefined4 local_64;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  uint local_48 [2];
  undefined8 *local_40;
  
  local_b0 = "gml_Script_InputPlugInRegisterCallback";
  local_b8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_b8;
  local_a8 = 0x48;
  FUN_140041df0(local_48,param_4,3,param_5);
  pcVar7 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_a0,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_64 = 0xffffff;
  local_70 = 0;
  local_cc = 0;
  local_d8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141dde698) &&
     (_Init_thread_header(&DAT_141dde698), DAT_141dde698 == -1)) {
    DAT_141dde690 = (longlong *)FUN_140e63aa0(DAT_1419f3438);
    _Init_thread_footer(&DAT_141dde698);
  }
  local_a8 = 0x48;
  puVar5 = &DAT_1419df7b0;
  uVar6 = (ulonglong)local_48[0];
  if ((int)local_48[0] < 2) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)local_40[1];
  }
  iVar1 = FUN_140e851f0(puVar2,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 == 0) {
    local_a8 = 0x48;
    if ((int)local_48[0] < 2) {
      puVar2 = &DAT_1419df7b0;
    }
    else {
      puVar2 = (undefined8 *)local_40[1];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
    *puVar2 = &DAT_bff0000000000000;
  }
  if (DAT_141ddc12d == '\0') {
    FUN_140e64380(DAT_141dde690,"gml_Script_InputPlugInRegisterCallback");
    FUN_140e64380(param_1,"gml_Script_InputPlugInRegisterCallback");
  }
  local_a8 = 0x4a;
  if (DAT_141ddc12d == '\0') {
    DAT_141ddc12d = '\x01';
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    local_d8 = 0;
    local_d0 = 0;
    local_cc = 5;
    puVar2 = (undefined8 *)(**(code **)(*DAT_141dde690 + 0x10))(DAT_141dde690,DAT_1419fcb48);
    FUN_140e609c0(DAT_141dde690);
    pcVar7 = (code *)0x0;
    puVar3 = (undefined8 *)
             gml_Script__array_anon_215___InputSystemCallbackArray___InputSystemCallbackArray
                       (param_1,param_2,&local_d8,0,0);
    if (puVar3 != puVar2) {
      local_c8 = *puVar3;
      uStack_c0 = *(undefined4 *)(puVar3 + 1);
      uStack_bc = *(undefined4 *)((longlong)puVar3 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar2);
      }
      FUN_140041b80(puVar2,&local_c8);
    }
    FUN_140e60910(1);
  }
  local_a8 = 0x4c;
  uVar4 = (**(code **)(*DAT_141dde690 + 8))(DAT_141dde690,DAT_1419fcb48);
  FUN_140e87440(uVar4,DAT_1419fea08,0x80000000,&local_70,(ulonglong)pcVar7 & 0xffffffffffffff00,0);
  uStack_bc = 0;
  local_c8 = 0x3ff0000000000000;
  iVar1 = FUN_140e851f0(&local_70,&local_c8,DAT_141955260,0);
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if (iVar1 != 0) {
    local_a8 = 0x4e;
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    local_d8 = 0;
    local_d0 = 0;
    local_cc = 5;
    local_c8 = CONCAT44(uRam0000000141dd139c,_DAT_141dd1398);
    uStack_c0 = uRam0000000141dd13a0;
    uStack_bc = DAT_141dd13a4;
    if ((1 << (local_94 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a0);
    }
    FUN_140041b80(&local_a0,&local_c8);
    local_60 = &local_a0;
    FUN_14008e020(param_1,param_2,&local_d8,1,&local_60);
  }
  local_a8 = 0x51;
  if ((int)local_48[0] < 2) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)local_40[1];
  }
  uStack_bc = 0;
  local_c8 = 0;
  iVar1 = FUN_140e851f0(puVar2,&local_c8,DAT_141955260,0);
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if (iVar1 == 0) {
    local_a8 = 0x53;
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    local_d8 = 0;
    local_d0 = 0;
    local_cc = 5;
    local_c8 = CONCAT44(uRam0000000141dd138c,_DAT_141dd1388);
    uStack_c0 = uRam0000000141dd1390;
    uStack_bc = DAT_141dd1394;
    if ((1 << (local_94 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a0);
    }
    FUN_140041b80(&local_a0,&local_c8);
    local_60 = &local_a0;
    FUN_14008e020(param_1,param_2,&local_d8,1,&local_60);
  }
  local_a8 = 0x56;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_d8 = 0;
  local_d0 = 0;
  local_cc = 5;
  if ((int)local_48[0] < 1) {
    puVar2 = &DAT_1419df7b0;
LAB_14035d89a:
    local_c8 = *puVar2;
    uStack_c0 = *(undefined4 *)(puVar2 + 1);
    uStack_bc = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << (local_94 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a0);
    }
    FUN_140041b80(&local_a0,&local_c8);
  }
  else {
    puVar2 = (undefined8 *)*local_40;
    if (puVar2 != &local_a0) goto LAB_14035d89a;
  }
  local_60 = &local_a0;
  if ((int)local_48[0] < 2) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)local_40[1];
    if (puVar2 == &local_90) goto LAB_14035d915;
  }
  local_c8 = *puVar2;
  uStack_c0 = *(undefined4 *)(puVar2 + 1);
  uStack_bc = *(undefined4 *)((longlong)puVar2 + 0xc);
  if ((1 << (local_84 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_90);
  }
  FUN_140041b80(&local_90,&local_c8);
LAB_14035d915:
  local_58 = &local_90;
  if (((int)local_48[0] < 3) || (puVar5 = (undefined8 *)local_40[2], puVar5 != &local_80)) {
    local_c8 = *puVar5;
    uStack_c0 = *(undefined4 *)(puVar5 + 1);
    uStack_bc = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_74 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_80);
    }
    FUN_140041b80(&local_80,&local_c8);
  }
  local_50 = &local_80;
  gml_Script__once_anon_358_anon_141___InputRegisterCollect___InputRegisterCollect
            (param_1,param_2,&local_d8,3,&local_60);
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_64 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_70);
  }
  _eh_vector_destructor_iterator_(&local_a0,0x10,3,FUN_140041b30);
  if (0 < (int)local_48[0]) {
    puVar5 = local_40;
    do {
      puVar2 = (undefined8 *)*puVar5;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar2);
      }
      *puVar2 = 0;
      *(undefined4 *)(puVar2 + 1) = 0;
      *(undefined4 *)((longlong)puVar2 + 0xc) = 5;
      puVar5 = puVar5 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  FUN_140e4cd60(local_40);
  DAT_141dc7a50 = (undefined8 *)local_b8;
  return param_3;
}

