// gml_Script___Update_anon_293___InputVibrateClassPlayer___InputVibrateClassPlayer @ 0x1400e79a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script___Update_anon_293___InputVibrateClassPlayer___InputVibrateClassPlayer
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  char *local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined4 local_84;
  undefined4 local_80 [3];
  byte local_74;
  undefined1 local_70 [12];
  byte local_64;
  undefined1 local_60 [12];
  byte local_54;
  undefined4 *local_50;
  undefined1 *local_48;
  undefined1 *local_40;
  
  local_a0 = "gml_Script___InputVibrateClassGamepad";
  local_a8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_a8;
  local_98 = 5;
  _eh_vector_constructor_iterator_(local_80,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_84 = 0xffffff;
  local_90 = 0;
  local_ac = 0;
  local_b8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddc99c) &&
     (_Init_thread_header(&DAT_141ddc99c), DAT_141ddc99c == -1)) {
    DAT_141ddc9a0 = (longlong *)FUN_140e63aa0(DAT_141a04308);
    _Init_thread_footer(&DAT_141ddc99c);
  }
  if (DAT_141ddc06f == '\0') {
    FUN_140e64380(DAT_141ddc9a0,"gml_Script___InputVibrateClassGamepad");
    FUN_140e64380(param_1,"gml_Script___InputVibrateClassGamepad");
  }
  FUN_140e643a0(param_1,DAT_141ddc9a0);
  local_98 = 0x2a;
  if (DAT_141ddc06f == '\0') {
    DAT_141ddc06f = '\x01';
    puVar2 = (undefined8 *)(**(code **)(*DAT_141ddc9a0 + 0x10))(DAT_141ddc9a0,DAT_1419fd598);
    FUN_140e609c0(DAT_141ddc9a0);
    FUN_140e645a0(&local_d8,gml_GlobalScript___InputVibrateClassPlayer,0);
    if (&local_d8 != puVar2) {
      local_c8 = (undefined4)local_d8;
      uStack_c4 = local_d8._4_4_;
      uStack_c0 = uStack_d0;
      uStack_bc = uStack_cc;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar2);
      }
      FUN_140041b80(puVar2,&local_c8);
    }
    if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    FUN_140e60910(1);
  }
  local_98 = 7;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fd5c8);
  FUN_140e609c0(param_1);
  if (param_4 < 1) {
    param_5 = &DAT_1419df7b0;
  }
  else {
    param_5 = (undefined8 *)*param_5;
  }
  if (param_5 != puVar2) {
    local_c8 = *(undefined4 *)param_5;
    uStack_c4 = *(undefined4 *)((longlong)param_5 + 4);
    uStack_c0 = *(undefined4 *)(param_5 + 1);
    uStack_bc = *(undefined4 *)((longlong)param_5 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_c8);
  }
  FUN_140e60910(1);
  local_98 = 9;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a042c8);
  uStack_cc = 0xd;
  local_d8 = 0;
  if (&local_d8 != puVar2) {
    local_c8 = 0;
    uStack_c4 = 0;
    uStack_c0 = uStack_d0;
    uStack_bc = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_c8);
  }
  local_98 = 0xb;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a042b8);
  uStack_cc = 0xd;
  local_d8 = 0;
  if (&local_d8 != puVar2) {
    local_c8 = 0;
    uStack_c4 = 0;
    uStack_c0 = uStack_d0;
    uStack_bc = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_c8);
  }
  local_98 = 0xc;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fe418);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar2);
  }
  *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  *puVar2 = 0;
  local_98 = 0xd;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fe228);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar2);
  }
  *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  *puVar2 = 0;
  local_98 = 0xf;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a04318);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar2);
  }
  *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  *puVar2 = 0x3ff0000000000000;
  local_98 = 0x12;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd5c8);
  uStack_cc = 0;
  local_d8 = 0x4010000000000000;
  iVar1 = FUN_140e851f0(uVar3,&local_d8,DAT_141955260,1);
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if (iVar1 == -2 || -1 < iVar1) goto LAB_1400e8125;
  local_98 = 0x14;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a042c8);
  uStack_cc = 0xd;
  local_d8 = 0x3ff0000000000000;
  if (&local_d8 != puVar2) {
    local_c8 = 0;
    uStack_c4 = 0x3ff00000;
    uStack_c0 = uStack_d0;
    uStack_bc = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_c8);
  }
  local_98 = 0x1c;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_b8 = 0;
  local_b0 = 0;
  local_ac = 5;
  puVar4 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fd5c8);
  if (puVar4 != local_80) {
    local_c8 = *puVar4;
    uStack_c4 = puVar4[1];
    uStack_c0 = puVar4[2];
    uStack_bc = puVar4[3];
    if ((1 << (local_74 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_80);
    }
    FUN_140041b80(local_80,&local_c8);
  }
  local_50 = local_80;
  puVar2 = (undefined8 *)
           gml_Script_InputDeviceGetGamepadValue(param_1,param_2,&local_b8,1,&local_50);
  if (puVar2 != &local_90) {
    local_c8 = *(undefined4 *)puVar2;
    uStack_c4 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_c0 = *(undefined4 *)(puVar2 + 1);
    uStack_bc = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << ((byte)local_84 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_90);
    }
    FUN_140041b80(&local_90,&local_c8);
  }
  local_98 = 0x1d;
  uStack_cc = 0;
  local_d8 = 0x4014000000000000;
  iVar1 = FUN_140e851f0(&local_90,&local_d8,DAT_141955260,0);
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if (iVar1 == 0) {
LAB_1400e7fed:
    local_98 = 0x22;
    puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a04318);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
    *puVar2 = 0x3fd999999999999a;
  }
  else {
    uStack_cc = 0;
    local_d8 = 0x4018000000000000;
    iVar1 = FUN_140e851f0(&local_90,&local_d8,DAT_141955260,0);
    if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    if (iVar1 == 0) goto LAB_1400e7fed;
    uStack_cc = 0;
    local_d8 = 0x401c000000000000;
    iVar1 = FUN_140e851f0(&local_90,&local_d8,DAT_141955260,0);
    if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    if (iVar1 == 0) goto LAB_1400e7fed;
  }
  local_98 = 0x26;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_b8 = 0;
  local_b0 = 0;
  local_ac = 5;
  if (puVar4 != local_80) {
    local_c8 = *puVar4;
    uStack_c4 = puVar4[1];
    uStack_c0 = puVar4[2];
    uStack_bc = puVar4[3];
    if ((1 << (local_74 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_80);
    }
    FUN_140041b80(local_80,&local_c8);
  }
  local_50 = local_80;
  local_c8 = _DAT_141dc6160;
  uStack_c4 = uRam0000000141dc6164;
  uStack_c0 = uRam0000000141dc6168;
  uStack_bc = uRam0000000141dc616c;
  if ((1 << (local_64 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_70);
  }
  FUN_140041b80(local_70,&local_c8);
  local_48 = local_70;
  local_c8 = _DAT_141dc6160;
  uStack_c4 = uRam0000000141dc6164;
  uStack_c0 = uRam0000000141dc6168;
  uStack_bc = uRam0000000141dc616c;
  if ((1 << (local_54 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_60);
  }
  FUN_140041b80(local_60,&local_c8);
  local_40 = local_60;
  gml_Script_InputVibrateGetEventCount(param_1,param_2,&local_b8,3,&local_50);
LAB_1400e8125:
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_84 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_90);
  }
  _eh_vector_destructor_iterator_(local_80,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_a8;
  return param_3;
}

