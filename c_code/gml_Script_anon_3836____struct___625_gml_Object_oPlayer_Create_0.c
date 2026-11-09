// gml_Script_anon_3836____struct___625_gml_Object_oPlayer_Create_0 @ 0x140bedf70

undefined8 *
gml_Script_anon_3836____struct___625_gml_Object_oPlayer_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  char *local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined4 local_84;
  undefined8 local_80;
  undefined4 local_74;
  undefined8 local_70;
  undefined4 local_64;
  undefined8 local_60;
  undefined4 local_54;
  undefined8 local_50;
  undefined4 local_44;
  
  local_a0 = "gml_Script____struct___624@gml_Object_oPlayer_Create_0";
  local_a8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_a8;
  local_98 = 0xb7;
  local_44 = 0xffffff;
  local_50 = 0;
  local_54 = 0xffffff;
  local_60 = 0;
  local_64 = 0xffffff;
  local_70 = 0;
  local_74 = 0xffffff;
  local_80 = 0;
  local_84 = 0xffffff;
  local_90 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if (*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141de2c34) {
    _Init_thread_header(&DAT_141de2c34);
    if (DAT_141de2c34 == -1) {
      DAT_141de2ea8 = FUN_140e63aa0(DAT_1419f7cc8);
      _Init_thread_footer(&DAT_141de2c34);
    }
  }
  FUN_140e643a0(param_1,DAT_141de2ea8);
  local_98 = 0xb8;
  uStack_bc = 0xf;
  local_c8 = 0x100000100000243;
  local_b8 = 0x243;
  uStack_b4 = 0x1000001;
  uStack_b0 = uStack_c0;
  uStack_ac = 0xf;
  if ((1 << ((byte)local_44 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_50);
  }
  FUN_140041b80(&local_50,&local_b8);
  FUN_140e86fa0(param_1,DAT_141a0a728,0x80000000,&local_50);
  local_98 = 0xb9;
  if ((1 << ((byte)local_54 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_60);
  }
  local_54 = 0;
  local_60 = 0;
  FUN_140e86fa0(param_1,DAT_141a0cfc8,0x80000000,&local_60);
  local_98 = 0xba;
  if ((1 << ((byte)local_64 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_70);
  }
  local_64 = 0;
  local_70 = 0x3ff0000000000000;
  FUN_140e86fa0(param_1,DAT_141a0a818,0x80000000,&local_70);
  local_98 = 0xbb;
  if ((1 << ((byte)local_74 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_80);
  }
  local_74 = 0;
  local_80 = 0;
  FUN_140e86fa0(param_1,DAT_1419fe0e8,0x80000000,&local_80);
  local_98 = 0xbc;
  if ((1 << ((byte)local_84 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_90);
  }
  local_84 = 0;
  local_90 = 0;
  FUN_140e86fa0(param_1,DAT_1419fe158,0x80000000,&local_90);
  local_98 = 0xbe;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f5ef8);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0x3ff0000000000000;
  local_98 = 0xc0;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f7c18);
  FUN_140e609c0(param_1);
  puVar1 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)*param_5;
  }
  if (puVar3 != puVar2) {
    local_b8 = *(undefined4 *)puVar3;
    uStack_b4 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_b0 = *(undefined4 *)(puVar3 + 1);
    uStack_ac = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_b8);
  }
  FUN_140e60910(1);
  local_98 = 0xc2;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419ef8f8);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar2);
  }
  *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  *puVar2 = 0;
  local_98 = 0xc3;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f8ad8);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar2);
  }
  *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  *puVar2 = 0;
  local_98 = 0xc5;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f5868);
  FUN_140e609c0(param_1);
  if (1 < param_4) {
    puVar1 = (undefined8 *)param_5[1];
  }
  if (puVar1 != puVar2) {
    local_b8 = *(undefined4 *)puVar1;
    uStack_b4 = *(undefined4 *)((longlong)puVar1 + 4);
    uStack_b0 = *(undefined4 *)(puVar1 + 1);
    uStack_ac = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_b8);
  }
  FUN_140e60910(1);
  local_98 = 0x397;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a03228);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_c8,gml_Script_anon_18945____struct___624_gml_Object_oPlayer_Create_0,param_1)
  ;
  if (&local_c8 != puVar1) {
    local_b8 = (undefined4)local_c8;
    uStack_b4 = local_c8._4_4_;
    uStack_b0 = uStack_c0;
    uStack_ac = uStack_bc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_b8);
  }
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  FUN_140e60910(1);
  local_98 = 0x3a3;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f3cc8);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_c8,gml_Script____struct___624_gml_Object_oPlayer_Create_0,param_1);
  if (&local_c8 != puVar1) {
    local_b8 = (undefined4)local_c8;
    uStack_b4 = local_c8._4_4_;
    uStack_b0 = uStack_c0;
    uStack_ac = uStack_bc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_b8);
  }
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  FUN_140e60910(1);
  local_98 = 0x3b4;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f7b28);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_c8,gml_Script_anon_3805____struct___625_gml_Object_oPlayer_Create_0,param_1);
  if (&local_c8 != puVar1) {
    local_b8 = (undefined4)local_c8;
    uStack_b4 = local_c8._4_4_;
    uStack_b0 = uStack_c0;
    uStack_ac = uStack_bc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_b8);
  }
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)local_84 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_90);
  }
  if ((1 << ((byte)local_74 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_80);
  }
  if ((1 << ((byte)local_64 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_70);
  }
  if ((1 << ((byte)local_54 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_60);
  }
  if ((1 << ((byte)local_44 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_50);
  }
  DAT_141dc7a50 = (undefined8 *)local_a8;
  return param_3;
}

