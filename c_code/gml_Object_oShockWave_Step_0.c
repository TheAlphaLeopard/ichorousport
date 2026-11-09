// gml_Object_oShockWave_Step_0 @ 0x140d6b190

void gml_Object_oShockWave_Step_0(longlong *param_1,undefined8 param_2)

{
  double dVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined4 uVar8;
  code *pcVar9;
  ulonglong in_stack_fffffffffffffef0;
  ulonglong uVar10;
  longlong *local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  char *local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined4 local_b4;
  longlong *local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong *local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 local_88 [12];
  byte local_7c;
  undefined1 local_78 [12];
  byte local_6c;
  undefined1 local_68 [12];
  byte local_5c;
  undefined1 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  local_e0 = "gml_Object_oShatteredShard_Step_0";
  local_d8 = 0;
  local_e8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_e8;
  pcVar9 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_88,0x10,3,FUN_1400424d0,FUN_140041b30);
  uVar3 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_b4 = 0xffffff;
  local_c0 = 0;
  local_c4 = 0xffffff;
  local_d0 = 0;
  uStack_8c = 0xffffff;
  local_98 = (longlong *)0x0;
  uStack_9c = 0xffffff;
  local_a8 = (longlong *)0x0;
  local_ec = 0xffffff;
  local_f8 = 0;
  local_d8 = 2;
  uVar4 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f500);
  uStack_fc = 0;
  local_108 = (longlong *)0x3f747ae147ae147b;
  FUN_140042560(&local_108,uVar3);
  FUN_1400460e0(uVar4,&local_108);
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_d8 = 4;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f230);
  uStack_fc = 6;
  in_stack_fffffffffffffef0 = in_stack_fffffffffffffef0 & 0xffffffffffffff00;
  uVar7 = (ulonglong)pcVar9 & 0xffffffffffffff00;
  local_108 = param_1;
  FUN_140e87440(&local_108,DAT_1419fe0e8,0x80000000,&local_c0,uVar7,in_stack_fffffffffffffef0);
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  uStack_fc = *(undefined4 *)((longlong)puVar5 + 0xc);
  uStack_100 = *(undefined4 *)(puVar5 + 1);
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) == 0) {
    local_108 = (longlong *)*puVar5;
  }
  else {
    FUN_1400419b0(&local_108,puVar5);
  }
  FUN_140042560(&local_108,uVar3);
  FUN_1400460e0(&local_c0,&local_108);
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  FUN_140e86fa0(param_1,DAT_1419fe0e8,0x80000000,&local_c0);
  local_d8 = 5;
  puVar6 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f500);
  uStack_fc = 6;
  local_108 = param_1;
  FUN_140e87440(&local_108,DAT_1419fe158,0x80000000,&local_d0,uVar7 & 0xffffffffffffff00,
                in_stack_fffffffffffffef0 & 0xffffffffffffff00);
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  uStack_fc = *(undefined4 *)((longlong)puVar6 + 0xc);
  uStack_100 = *(undefined4 *)(puVar6 + 1);
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) == 0) {
    local_108 = (longlong *)*puVar6;
  }
  else {
    FUN_1400419b0(&local_108,puVar6);
  }
  FUN_140042560(&local_108,uVar3);
  FUN_1400460e0(&local_d0,&local_108);
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  FUN_140e86fa0(param_1,DAT_1419fe158,0x80000000,&local_d0);
  local_d8 = 7;
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_f8 = 0;
  local_f0 = 0;
  local_ec = 5;
  uVar7 = (**(code **)(*param_1 + 8))(param_1,DAT_141a01b58);
  uVar10 = 0;
  FUN_140e63610(param_1,param_2,&local_f8,0,uVar7,0);
  local_d8 = 9;
  uVar4 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a7f8);
  if ((*(uint *)((longlong)puVar5 + 0xc) & 0xffffff) == 0) {
    uVar8 = (undefined4)*puVar5;
  }
  else {
    uVar8 = FUN_140e4b060(puVar5);
  }
  dVar1 = (double)FUN_140e79500(uVar8);
  local_108 = (longlong *)(dVar1 * 10.0);
  uStack_fc = 0;
  FUN_140042560(&local_108,uVar3);
  FUN_1400460e0(uVar4,&local_108);
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_d8 = 0xb;
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_f8 = 0;
  local_f0 = 0;
  local_ec = 5;
  uStack_fc = 6;
  uVar10 = uVar10 & 0xffffffffffffff00;
  uVar7 = uVar7 & 0xffffffffffffff00;
  local_108 = param_1;
  FUN_140e87440(&local_108,DAT_1419fe0e8,0x80000000,&local_98,uVar7,uVar10);
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  uStack_fc = 6;
  uVar7 = uVar7 & 0xffffffffffffff00;
  local_108 = param_1;
  FUN_140e87440(&local_108,DAT_1419fe158,0x80000000,&local_a8,uVar7,uVar10 & 0xffffffffffffff00);
  uVar8 = (undefined4)(uVar7 >> 0x20);
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_108 = local_98;
  uStack_100 = uStack_90;
  uStack_fc = uStack_8c;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_108);
  local_58 = local_88;
  local_108 = local_a8;
  uStack_100 = uStack_a0;
  uStack_fc = uStack_9c;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_108);
  local_50 = local_78;
  uStack_fc = 0xf;
  local_108 = (longlong *)0x100000000000149;
  local_38 = 0x149;
  uStack_34 = 0x1000000;
  uStack_30 = uStack_100;
  uStack_2c = 0xf;
  if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_68);
  }
  FUN_140041b80(local_68,&local_38);
  local_48 = local_68;
  uVar3 = FUN_140e634e0(param_1,param_2,&local_f8,3,CONCAT44(uVar8,DAT_141a12628),&local_58);
  cVar2 = FUN_140e491e0(uVar3);
  if (cVar2 != '\0') {
    local_d8 = 0xc;
    (**(code **)(*param_1 + 8))(param_1,DAT_141a1f230);
    FUN_140edd0e0(param_1,param_2,0,0);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d0);
  }
  if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c0);
  }
  _eh_vector_destructor_iterator_(local_88,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_e8;
  return;
}

