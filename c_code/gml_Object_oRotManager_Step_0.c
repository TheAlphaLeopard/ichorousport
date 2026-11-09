// gml_Object_oRotManager_Step_0 @ 0x140d42300

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oRotManager_Step_0(longlong *param_1,undefined8 param_2)

{
  double *pdVar1;
  float fVar2;
  double dVar3;
  code *pcVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  ulonglong in_stack_fffffffffffffeb0;
  double local_148;
  undefined4 uStack_140;
  uint uStack_13c;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  double local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  double local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  double local_f8;
  undefined4 local_ec;
  double local_e8;
  undefined4 local_dc;
  undefined8 local_d8;
  char *local_d0;
  undefined4 local_c8;
  undefined1 local_b8 [12];
  byte local_ac;
  undefined1 local_a8 [12];
  byte local_9c;
  undefined1 local_98 [12];
  byte local_8c;
  undefined1 local_88 [12];
  byte local_7c;
  undefined1 local_78 [12];
  byte local_6c;
  undefined1 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  
  local_d0 = "gml_Object_oRoomExit_Draw_0";
  local_c8 = 0;
  local_d8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_d8;
  pcVar4 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_b8,0x10,5,FUN_1400424d0,FUN_140041b30);
  local_dc = 0xffffff;
  local_e8 = 0.0;
  local_ec = 0xffffff;
  local_f8 = 0.0;
  uStack_fc = 0xffffff;
  local_108 = 0.0;
  uStack_10c = 0xffffff;
  local_118 = 0.0;
  local_11c = 0xffffff;
  local_128 = 0;
  local_c8 = 3;
  pdVar1 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a01248);
  uStack_13c = *(uint *)((longlong)pdVar1 + 0xc);
  uStack_140 = *(undefined4 *)(pdVar1 + 1);
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) == 0) {
    local_148 = *pdVar1;
  }
  else {
    FUN_1400419b0(&local_148,pdVar1);
  }
  uStack_12c = 7;
  local_138 = (longlong *)CONCAT44(local_138._4_4_,0xb4);
  FUN_1400460e0(&local_148,&local_138);
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  dVar3 = local_148;
  if ((uStack_13c & 0xffffff) != 0) {
    dVar3 = (double)FUN_140e4b060(&local_148);
  }
  fVar2 = (float)FUN_140e78f90(0x42400000,(float)dVar3);
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_dc = 0;
  local_e8 = (double)fVar2;
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_c8 = 4;
  uStack_13c = *(uint *)((longlong)pdVar1 + 0xc);
  uStack_140 = *(undefined4 *)(pdVar1 + 1);
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) == 0) {
    local_148 = *pdVar1;
  }
  else {
    FUN_1400419b0(&local_148,pdVar1);
  }
  uStack_12c = 7;
  local_138 = (longlong *)CONCAT44(local_138._4_4_,0xb4);
  FUN_1400460e0(&local_148,&local_138);
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  dVar3 = local_148;
  if ((uStack_13c & 0xffffff) != 0) {
    dVar3 = (double)FUN_140e4b060(&local_148);
  }
  fVar2 = (float)FUN_140e79010(0x42400000,(float)dVar3);
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_ec = 0;
  local_f8 = (double)fVar2;
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_c8 = 6;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_128 = 0;
  local_120 = 0;
  local_11c = 5;
  uStack_12c = 6;
  in_stack_fffffffffffffeb0 = in_stack_fffffffffffffeb0 & 0xffffffffffffff00;
  uVar5 = (ulonglong)pcVar4 & 0xffffffffffffff00;
  local_138 = param_1;
  FUN_140e87440(&local_138,DAT_1419fe0e8,0x80000000,&local_108,uVar5,in_stack_fffffffffffffeb0);
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  uStack_12c = 6;
  uVar5 = uVar5 & 0xffffffffffffff00;
  local_138 = param_1;
  FUN_140e87440(&local_138,DAT_1419fe158,0x80000000,&local_118,uVar5,
                in_stack_fffffffffffffeb0 & 0xffffffffffffff00);
  uVar6 = (undefined4)(uVar5 >> 0x20);
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_138 = (longlong *)local_108;
  uStack_130 = uStack_100;
  uStack_12c = uStack_fc;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_138);
  local_68 = local_b8;
  local_138 = (longlong *)local_118;
  uStack_130 = uStack_110;
  uStack_12c = uStack_10c;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_138);
  local_60 = local_a8;
  uStack_13c = uStack_fc;
  uStack_140 = uStack_100;
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) == 0) {
    local_148 = local_108;
  }
  else {
    FUN_1400419b0(&local_148,&local_108);
  }
  FUN_1400460e0(&local_148,&local_e8);
  local_138 = (longlong *)local_148;
  uStack_130 = uStack_140;
  uStack_12c = uStack_13c;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_138);
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_58 = local_98;
  uStack_13c = uStack_10c;
  uStack_140 = uStack_110;
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) == 0) {
    local_148 = local_118;
  }
  else {
    FUN_1400419b0(&local_148,&local_118);
  }
  FUN_1400460e0(&local_148,&local_f8);
  local_138 = (longlong *)local_148;
  uStack_130 = uStack_140;
  uStack_12c = uStack_13c;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_138);
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_50 = local_88;
  local_138 = (longlong *)CONCAT44(uRam00000001419ed814,_DAT_1419ed810);
  uStack_130 = uRam00000001419ed818;
  uStack_12c = uRam00000001419ed81c;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_138);
  local_48 = local_78;
  FUN_140e634e0(param_1,param_2,&local_128,5,CONCAT44(uVar6,DAT_141a57990),&local_68);
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  _eh_vector_destructor_iterator_(local_b8,0x10,5,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_d8;
  return;
}

