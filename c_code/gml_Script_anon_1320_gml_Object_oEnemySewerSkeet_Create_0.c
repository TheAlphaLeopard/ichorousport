// gml_Script_anon_1320_gml_Object_oEnemySewerSkeet_Create_0 @ 0x140a56da0

undefined8 *
gml_Script_anon_1320_gml_Object_oEnemySewerSkeet_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 local_b8;
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
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  local_a0 = "gml_Script____struct___521@gml_Object_oEnemySewerSkeet_Create_0";
  local_a8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_a8;
  local_98 = 0x15;
  local_54 = 0xffffff;
  local_60 = 0;
  local_64 = 0xffffff;
  local_70 = 0;
  local_44 = 0xffffff;
  local_50 = 0;
  local_74 = 0xffffff;
  local_80 = 0;
  local_84 = 0xffffff;
  local_90 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141de24a8) &&
     (_Init_thread_header(&DAT_141de24a8), DAT_141de24a8 == -1)) {
    DAT_141de2498 = FUN_140e63aa0(DAT_1419f1c78);
    _Init_thread_footer(&DAT_141de24a8);
  }
  FUN_140e643a0(param_1,DAT_141de2498);
  local_98 = 0x17;
  puVar2 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar1 = &DAT_1419df7b0;
  }
  else {
    puVar1 = (undefined8 *)*param_5;
    if (puVar1 == &local_60) goto LAB_140a56ef0;
  }
  local_b8 = *puVar1;
  uStack_b0 = *(undefined4 *)(puVar1 + 1);
  uStack_ac = *(undefined4 *)((longlong)puVar1 + 0xc);
  if ((1 << ((byte)local_54 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_60);
  }
  FUN_140041b80(&local_60,&local_b8);
LAB_140a56ef0:
  FUN_140e86fa0(param_1,DAT_1419fe0e8,0x80000000,&local_60);
  local_98 = 0x18;
  if ((param_4 < 2) || (puVar2 = (undefined8 *)param_5[1], puVar2 != &local_70)) {
    local_b8 = *puVar2;
    uStack_b0 = *(undefined4 *)(puVar2 + 1);
    uStack_ac = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << ((byte)local_64 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_70);
    }
    FUN_140041b80(&local_70,&local_b8);
  }
  FUN_140e86fa0(param_1,DAT_1419fe158,0x80000000,&local_70);
  local_98 = 0x19;
  uStack_ac = 0xf;
  local_b8 = 0x100000100000298;
  local_38 = 0x298;
  uStack_34 = 0x1000001;
  uStack_30 = uStack_b0;
  uStack_2c = 0xf;
  if ((1 << ((byte)local_44 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_50);
  }
  FUN_140041b80(&local_50,&local_38);
  FUN_140e86fa0(param_1,DAT_141a0a728,0x80000000,&local_50);
  local_98 = 0x1a;
  if ((1 << ((byte)local_74 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_80);
  }
  local_74 = 0;
  local_80 = 0;
  FUN_140e86fa0(param_1,DAT_141a0cfc8,0x80000000,&local_80);
  local_98 = 0x1b;
  if ((1 << ((byte)local_84 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_90);
  }
  local_84 = 0;
  local_90 = 0x3ff0000000000000;
  FUN_140e86fa0(param_1,DAT_141a0a818,0x80000000,&local_90);
  local_98 = 0x1d;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a7f8);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar2);
  }
  *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  *puVar2 = 0;
  local_98 = 0x1e;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f1988);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar2);
  }
  *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  *puVar2 = 0;
  local_98 = 0x1f;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f18d8);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar2);
  }
  *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  *puVar2 = 0;
  local_98 = 0x20;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f1958);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar2);
  }
  *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  *puVar2 = 0;
  local_98 = 0x22;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a03228);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_b8,gml_Script____struct___521_gml_Object_oEnemySewerSkeet_Create_0,param_1);
  if (&local_b8 != puVar2) {
    local_38 = (undefined4)local_b8;
    uStack_34 = local_b8._4_4_;
    uStack_30 = uStack_b0;
    uStack_2c = uStack_ac;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_38);
  }
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)local_84 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_90);
  }
  if ((1 << ((byte)local_74 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_80);
  }
  if ((1 << ((byte)local_44 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_50);
  }
  if ((1 << ((byte)local_64 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_70);
  }
  if ((1 << ((byte)local_54 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_60);
  }
  DAT_141dc7a50 = (undefined8 *)local_a8;
  return param_3;
}

