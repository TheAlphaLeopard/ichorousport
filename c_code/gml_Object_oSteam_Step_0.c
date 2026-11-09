// gml_Object_oSteam_Step_0 @ 0x140da0710

void gml_Object_oSteam_Step_0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  code *pcVar6;
  undefined4 uVar7;
  ulonglong in_stack_ffffffffffffff10;
  ulonglong uVar8;
  longlong *local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  longlong *local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  longlong *local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  longlong *local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  char *local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined4 local_74;
  undefined1 local_70 [12];
  byte local_64;
  undefined1 local_60 [12];
  byte local_54;
  undefined1 local_50 [12];
  byte local_44;
  undefined1 *local_40;
  undefined1 *local_38;
  undefined1 *local_30;
  
  local_90 = "gml_Object_oSplitAcidWave_Step_0";
  local_88 = 0;
  local_98 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_98;
  pcVar6 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_70,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_74 = 0xffffff;
  local_80 = 0;
  local_9c = 0xffffff;
  local_a8 = (longlong *)0x0;
  local_ac = 0xffffff;
  local_b8 = (longlong *)0x0;
  local_cc = 0xffffff;
  local_d8 = 0;
  local_88 = 2;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a7f8);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar2);
  }
  *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  *puVar2 = 0;
  local_88 = 3;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a0a748);
  uVar4 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f230);
  uStack_dc = 0;
  local_e8 = (longlong *)0x3fb999999999999a;
  FUN_140042560(&local_e8,uVar3);
  FUN_1400460e0(uVar4,&local_e8);
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_88 = 5;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f230);
  uStack_dc = 6;
  local_e8 = param_1;
  FUN_140e87440(&local_e8,DAT_1419fe0e8,0x80000000,&local_80,(ulonglong)pcVar6 & 0xffffffffffffff00,
                in_stack_ffffffffffffff10 & 0xffffffffffffff00);
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  FUN_1400460e0(&local_80,uVar3);
  FUN_140e86fa0(param_1,DAT_1419fe0e8,0x80000000,&local_80);
  local_88 = 7;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_d8 = 0;
  local_d0 = 0;
  local_cc = 5;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a01b58);
  uVar8 = 0;
  FUN_140e63610(param_1,param_2,&local_d8,0,uVar5,0);
  local_88 = 9;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_d8 = 0;
  local_d0 = 0;
  local_cc = 5;
  uStack_dc = 6;
  uVar8 = uVar8 & 0xffffffffffffff00;
  uVar5 = uVar5 & 0xffffffffffffff00;
  local_e8 = param_1;
  FUN_140e87440(&local_e8,DAT_1419fe0e8,0x80000000,&local_a8,uVar5,uVar8);
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  uStack_dc = 6;
  uVar5 = uVar5 & 0xffffffffffffff00;
  local_e8 = param_1;
  FUN_140e87440(&local_e8,DAT_1419fe158,0x80000000,&local_b8,uVar5,uVar8 & 0xffffffffffffff00);
  uVar7 = (undefined4)(uVar5 >> 0x20);
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  uStack_dc = local_9c;
  uStack_e0 = local_a0;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) == 0) {
    local_e8 = local_a8;
  }
  else {
    FUN_1400419b0(&local_e8,&local_a8);
  }
  FUN_1400460e0(&local_e8,uVar3);
  local_c8 = local_e8;
  uStack_c0 = uStack_e0;
  uStack_bc = uStack_dc;
  if ((1 << (local_64 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_70);
  }
  FUN_140041b80(local_70,&local_c8);
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_40 = local_70;
  uStack_dc = local_ac;
  uStack_e0 = local_b0;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) == 0) {
    local_e8 = local_b8;
  }
  else {
    FUN_1400419b0(&local_e8,&local_b8);
  }
  uStack_bc = 7;
  local_c8 = (longlong *)CONCAT44(local_c8._4_4_,2);
  FUN_1400462a0(&local_e8,&local_c8);
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = local_e8;
  uStack_c0 = uStack_e0;
  uStack_bc = uStack_dc;
  if ((1 << (local_54 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_60);
  }
  FUN_140041b80(local_60,&local_c8);
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_38 = local_60;
  uStack_bc = 0xf;
  local_c8 = (longlong *)0x100000000000149;
  local_e8 = (longlong *)0x100000000000149;
  uStack_e0 = uStack_c0;
  uStack_dc = 0xf;
  if ((1 << (local_44 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_50);
  }
  FUN_140041b80(local_50,&local_e8);
  local_30 = local_50;
  uVar3 = FUN_140e634e0(param_1,param_2,&local_d8,3,CONCAT44(uVar7,DAT_141a12628),&local_40);
  cVar1 = FUN_140e491e0(uVar3);
  if (cVar1 != '\0') {
    local_88 = 0xb;
    (**(code **)(*param_1 + 8))(param_1,DAT_141a1f230);
    FUN_140edd0e0(param_1,param_2,0,0);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_74 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_80);
  }
  _eh_vector_destructor_iterator_(local_70,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_98;
  return;
}

