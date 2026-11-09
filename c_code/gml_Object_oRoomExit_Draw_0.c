// gml_Object_oRoomExit_Draw_0 @ 0x140d40fb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oRoomExit_Draw_0(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  float fVar4;
  undefined4 uVar5;
  double dVar6;
  double dVar7;
  longlong *plVar8;
  double dVar9;
  code *pcVar10;
  ulonglong uVar11;
  undefined8 local_128;
  undefined4 uStack_120;
  uint uStack_11c;
  double *local_118;
  undefined1 *local_110;
  double local_108;
  undefined4 local_100;
  uint local_fc;
  undefined8 local_f8;
  undefined4 local_ec;
  longlong *local_e8;
  undefined4 local_e0;
  uint local_dc;
  double local_d8;
  undefined4 local_d0;
  uint local_cc;
  double local_c8;
  uint local_bc;
  double local_b8;
  uint local_ac;
  double local_a8;
  undefined4 local_9c;
  undefined1 local_98 [12];
  byte local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  char *local_70;
  undefined4 local_68;
  
  local_70 = "gml_Object_oRoomExit_Create_0";
  local_68 = 0;
  local_78 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_78;
  pcVar10 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_a8,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_cc = 0xffffff;
  local_d8 = 0.0;
  local_dc = 0xffffff;
  local_e8 = (longlong *)0x0;
  local_ac = 0xffffff;
  local_b8 = 0.0;
  local_bc = 0xffffff;
  local_c8 = 0.0;
  local_ec = 0xffffff;
  local_f8 = 0;
  local_7c = 0xffffff;
  local_88 = 0;
  local_68 = 2;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a01248);
  FUN_140e85f80(param_1,DAT_141a00d18,0x80000000,&local_d8);
  FUN_140e85f80(param_1,DAT_141a00c48,0x80000000,&local_e8);
  uStack_11c = 6;
  uVar11 = (ulonglong)pcVar10 & 0xffffffffffffff00;
  local_128 = param_1;
  FUN_140e87440(&local_128,DAT_1419fe0e8,0x80000000,&local_b8,uVar11,0);
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  uStack_11c = 6;
  local_128 = param_1;
  FUN_140e87440(&local_128,DAT_1419fe158,0x80000000,&local_c8,uVar11 & 0xffffffffffffff00,0);
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  uStack_11c = local_dc;
  uStack_120 = local_e0;
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) == 0) {
    local_128 = local_e8;
  }
  else {
    FUN_1400419b0(&local_128,&local_e8);
  }
  local_110 = (undefined1 *)(ulonglong)(uint)local_110;
  local_118 = (double *)0x4000000000000000;
  FUN_140046500(&local_128,&local_118);
  if ((1 << ((byte)((ulonglong)local_110 >> 0x20) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_fc = local_cc;
  local_100 = local_d0;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) == 0) {
    local_108 = local_d8;
  }
  else {
    FUN_1400419b0(&local_108,&local_d8);
  }
  local_110 = (undefined1 *)((ulonglong)local_110 & 0xffffffff);
  local_118 = (double *)0x4000000000000000;
  FUN_140046500(&local_108,&local_118);
  if ((1 << ((byte)((ulonglong)local_110 >> 0x20) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  dVar6 = local_c8;
  if ((local_bc & 0xffffff) != 0) {
    dVar6 = (double)FUN_140e4b060(&local_c8);
  }
  dVar7 = local_b8;
  if ((local_ac & 0xffffff) != 0) {
    dVar7 = (double)FUN_140e4b060(&local_b8);
  }
  plVar8 = local_128;
  if ((uStack_11c & 0xffffff) != 0) {
    plVar8 = (longlong *)FUN_140e4b060(&local_128);
  }
  dVar9 = local_108;
  if ((local_fc & 0xffffff) != 0) {
    dVar9 = (double)FUN_140e4b060(&local_108);
  }
  fVar4 = (float)FUN_140e793d0((float)dVar9,(float)(double)plVar8,(float)dVar7,(float)dVar6);
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_9c = 0;
  local_a8 = (double)fVar4;
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_118 = &local_a8;
  local_128 = (longlong *)CONCAT44(uRam00000001419ed804,_DAT_1419ed800);
  uStack_120 = uRam00000001419ed808;
  uStack_11c = uRam00000001419ed80c;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_128);
  local_110 = local_98;
  FUN_140e609c0(param_1);
  puVar3 = (undefined8 *)gml_Script_bm_string_width(param_1,param_2,&local_88,2,&local_118);
  if ((*(uint *)((longlong)puVar3 + 0xc) & 0xffffff) == 0) {
    uVar5 = (undefined4)*puVar3;
  }
  else {
    uVar5 = FUN_140e4b060(puVar3);
  }
  uVar1 = FUN_1412a79b0(uVar5,0x4076800000000000);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar2);
  }
  *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  *puVar2 = uVar1;
  FUN_140e60910(1);
  local_68 = 4;
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_ec = 0;
  local_f8 = 0xc059000000000000;
  FUN_140e86fa0(param_1,DAT_141a02ee8,0x80000000,&local_f8);
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  _eh_vector_destructor_iterator_(&local_a8,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_78;
  return;
}

