// gml_Script_vec_floor_anon_13192_vec3_Vect2 @ 0x140644240

undefined8 *
gml_Script_vec_floor_anon_13192_vec3_Vect2
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  uint local_8c;
  undefined8 local_88;
  uint local_7c;
  longlong *local_78;
  undefined4 local_6c;
  undefined8 local_68;
  char *local_60;
  undefined4 local_58;
  
  local_60 = "gml_Script_clamp_to@anon@12780@vec3@Vect2";
  local_68 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_68;
  local_7c = 0xffffff;
  local_88 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_ac = 0xffffff;
  local_b8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_58 = 0x1a9;
  local_6c = 6;
  local_78 = param_1;
  FUN_140e87440(&local_78,DAT_1419fe0e8,0x80000000,&local_88,0,0);
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  puVar4 = &DAT_1419df7b0;
  if (param_4 < 2) {
    puVar1 = &DAT_1419df7b0;
  }
  else {
    puVar1 = (undefined8 *)param_5[1];
  }
  if ((*(uint *)((longlong)puVar1 + 0xc) & 0xffffff) == 0) {
    uVar5 = (undefined4)*puVar1;
  }
  else {
    uVar5 = FUN_140e4b060();
  }
  if (param_4 < 1) {
    puVar1 = &DAT_1419df7b0;
  }
  else {
    puVar1 = (undefined8 *)*param_5;
  }
  if ((*(uint *)((longlong)puVar1 + 0xc) & 0xffffff) == 0) {
    uVar6 = (undefined4)*puVar1;
  }
  else {
    uVar6 = FUN_140e4b060();
  }
  if ((local_7c & 0xffffff) == 0) {
    uVar7 = local_88;
  }
  else {
    uVar7 = FUN_140e4b060(&local_88);
  }
  uVar7 = FUN_140e78ec0(uVar7,uVar6,uVar5);
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_9c = 0;
  local_a8 = uVar7;
  FUN_140e86fa0(param_1,DAT_1419fe0e8,0x80000000,&local_a8);
  local_58 = 0x1aa;
  local_6c = 6;
  local_78 = param_1;
  FUN_140e87440(&local_78,DAT_1419fe158,0x80000000,&local_98,0,0);
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if (param_4 < 2) {
    puVar1 = &DAT_1419df7b0;
  }
  else {
    puVar1 = (undefined8 *)param_5[1];
  }
  if ((*(uint *)((longlong)puVar1 + 0xc) & 0xffffff) == 0) {
    uVar5 = (undefined4)*puVar1;
  }
  else {
    uVar5 = FUN_140e4b060();
  }
  if (param_4 < 1) {
    puVar1 = &DAT_1419df7b0;
  }
  else {
    puVar1 = (undefined8 *)*param_5;
  }
  if ((*(uint *)((longlong)puVar1 + 0xc) & 0xffffff) == 0) {
    uVar6 = (undefined4)*puVar1;
  }
  else {
    uVar6 = FUN_140e4b060();
  }
  if ((local_8c & 0xffffff) == 0) {
    uVar7 = local_98;
  }
  else {
    uVar7 = FUN_140e4b060(&local_98);
  }
  uVar7 = FUN_140e78ec0(uVar7,uVar6,uVar5);
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_ac = 0;
  local_b8 = uVar7;
  FUN_140e86fa0(param_1,DAT_1419fe158,0x80000000,&local_b8);
  local_58 = 0x1ab;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a05ca8);
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a05ca8);
  if (param_4 < 2) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)param_5[1];
  }
  if ((*(uint *)((longlong)puVar3 + 0xc) & 0xffffff) == 0) {
    uVar5 = (undefined4)*puVar3;
  }
  else {
    uVar5 = FUN_140e4b060();
  }
  if (0 < param_4) {
    puVar4 = (undefined8 *)*param_5;
  }
  if ((*(uint *)((longlong)puVar4 + 0xc) & 0xffffff) == 0) {
    uVar6 = (undefined4)*puVar4;
  }
  else {
    uVar6 = FUN_140e4b060(puVar4);
  }
  if ((*(uint *)((longlong)puVar1 + 0xc) & 0xffffff) == 0) {
    uVar7 = *puVar1;
  }
  else {
    uVar7 = FUN_140e4b060(puVar1);
  }
  uVar7 = FUN_140e78ec0(uVar7,uVar6,uVar5);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar2);
  }
  *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  *puVar2 = uVar7;
  local_58 = 0x1ac;
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 6;
  *param_3 = param_1;
  uVar7 = FUN_140e5c910();
  FUN_140e42c10(uVar7,param_1);
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  DAT_141dc7a50 = (undefined8 *)local_68;
  return param_3;
}

