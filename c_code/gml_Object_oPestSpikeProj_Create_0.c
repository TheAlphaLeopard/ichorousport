// gml_Object_oPestSpikeProj_Create_0 @ 0x140be0b20

void gml_Object_oPestSpikeProj_Create_0(longlong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  float fVar3;
  longlong *plVar4;
  code *pcVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  ulonglong in_stack_fffffffffffffea0;
  undefined1 **ppuVar8;
  ulonglong uVar9;
  longlong *local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  longlong *local_148;
  undefined4 uStack_140;
  uint uStack_13c;
  longlong *local_138;
  undefined4 local_130;
  uint local_12c;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  longlong *local_118;
  undefined4 local_110;
  undefined4 local_10c;
  longlong *local_108;
  undefined4 local_100;
  undefined4 local_fc;
  double local_f8;
  undefined4 local_ec;
  double local_e8;
  undefined4 local_dc;
  undefined1 local_d8 [12];
  byte local_cc;
  undefined1 local_c8 [12];
  byte local_bc;
  undefined1 local_b8 [12];
  byte local_ac;
  undefined1 local_a8 [12];
  byte local_9c;
  longlong *local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  char *local_80;
  undefined4 local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  
  local_80 = "gml_Object_oPestSpikeLeader_Alarm_1";
  local_78 = 0;
  local_88 = DAT_141dc7a50;
  pcVar5 = FUN_140041b30;
  DAT_141dc7a50 = &local_88;
  _eh_vector_constructor_iterator_(local_d8,0x10,4,FUN_1400424d0,FUN_140041b30);
  local_12c = 0xffffff;
  local_138 = (longlong *)0x0;
  local_dc = 0xffffff;
  local_e8 = 0.0;
  local_ec = 0xffffff;
  local_f8 = 0.0;
  local_fc = 0xffffff;
  local_108 = (longlong *)0x0;
  local_10c = 0xffffff;
  local_118 = (longlong *)0x0;
  uStack_8c = 0xffffff;
  local_98 = (longlong *)0x0;
  local_11c = 0xffffff;
  local_128 = 0;
  local_78 = 4;
  FUN_140e98b30(param_1,param_2);
  local_78 = 6;
  uStack_13c = 6;
  in_stack_fffffffffffffea0 = in_stack_fffffffffffffea0 & 0xffffffffffffff00;
  uVar6 = (ulonglong)pcVar5 & 0xffffffffffffff00;
  local_148 = param_1;
  FUN_140e87440(&local_148,DAT_141a0a778,0x80000000,&local_138,uVar6,in_stack_fffffffffffffea0);
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  uStack_13c = local_12c;
  uStack_140 = local_130;
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) == 0) {
    local_148 = local_138;
  }
  else {
    FUN_1400419b0(&local_148,&local_138);
  }
  uStack_14c = 7;
  local_158 = (longlong *)CONCAT44(local_158._4_4_,0x5a);
  FUN_1400460e0(&local_148,&local_158);
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  plVar4 = local_148;
  if ((uStack_13c & 0xffffff) != 0) {
    plVar4 = (longlong *)FUN_140e4b060(&local_148);
  }
  fVar3 = (float)FUN_140e78f90(0x41400000,(float)(double)plVar4);
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_dc = 0;
  local_e8 = (double)fVar3;
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_78 = 7;
  uStack_14c = 6;
  in_stack_fffffffffffffea0 = in_stack_fffffffffffffea0 & 0xffffffffffffff00;
  uVar6 = uVar6 & 0xffffffffffffff00;
  local_158 = param_1;
  FUN_140e87440(&local_158,DAT_141a0a778,0x80000000,&local_138,uVar6,in_stack_fffffffffffffea0);
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  uStack_13c = local_12c;
  uStack_140 = local_130;
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) == 0) {
    local_148 = local_138;
  }
  else {
    FUN_1400419b0(&local_148,&local_138);
  }
  uStack_14c = 7;
  local_158 = (longlong *)CONCAT44(local_158._4_4_,0x5a);
  FUN_1400460e0(&local_148,&local_158);
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  plVar4 = local_148;
  if ((uStack_13c & 0xffffff) != 0) {
    plVar4 = (longlong *)FUN_140e4b060(&local_148);
  }
  fVar3 = (float)FUN_140e79010(0x41400000,(float)(double)plVar4);
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_ec = 0;
  local_f8 = (double)fVar3;
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_78 = 9;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_128 = 0;
  local_120 = 0;
  local_11c = 5;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f7648);
  uStack_14c = 6;
  in_stack_fffffffffffffea0 = in_stack_fffffffffffffea0 & 0xffffffffffffff00;
  uVar6 = uVar6 & 0xffffffffffffff00;
  local_158 = param_1;
  FUN_140e87440(&local_158,DAT_1419fe0e8,0x80000000,&local_108,uVar6,in_stack_fffffffffffffea0);
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  uStack_14c = 6;
  in_stack_fffffffffffffea0 = in_stack_fffffffffffffea0 & 0xffffffffffffff00;
  uVar6 = uVar6 & 0xffffffffffffff00;
  local_158 = param_1;
  FUN_140e87440(&local_158,DAT_1419fe158,0x80000000,&local_118,uVar6,in_stack_fffffffffffffea0);
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  uStack_14c = 6;
  uVar6 = uVar6 & 0xffffffffffffff00;
  local_158 = param_1;
  FUN_140e87440(&local_158,DAT_141a1b910,0x80000000,&local_98,uVar6,
                in_stack_fffffffffffffea0 & 0xffffffffffffff00);
  uVar7 = (undefined4)(uVar6 >> 0x20);
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  uStack_13c = local_fc;
  uStack_140 = local_100;
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) == 0) {
    local_148 = local_108;
  }
  else {
    FUN_1400419b0(&local_148,&local_108);
  }
  FUN_1400460e0(&local_148,&local_e8);
  local_158 = local_148;
  uStack_150 = uStack_140;
  uStack_14c = uStack_13c;
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_158);
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_70 = local_d8;
  uStack_13c = local_10c;
  uStack_140 = local_110;
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) == 0) {
    local_148 = local_118;
  }
  else {
    FUN_1400419b0(&local_148,&local_118);
  }
  FUN_1400460e0(&local_148,&local_f8);
  local_158 = local_148;
  uStack_150 = uStack_140;
  uStack_14c = uStack_13c;
  if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_c8);
  }
  FUN_140041b80(local_c8,&local_158);
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_68 = local_c8;
  local_158 = local_98;
  uStack_150 = uStack_90;
  uStack_14c = uStack_8c;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_158);
  local_60 = local_b8;
  uStack_14c = 0xf;
  local_158 = (longlong *)0x1000000000000df;
  local_148 = (longlong *)0x1000000000000df;
  uStack_140 = uStack_150;
  uStack_13c = 0xf;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_148);
  local_58 = local_a8;
  FUN_140e609c0(param_1);
  puVar2 = (undefined8 *)FUN_140e48e40(puVar1,0);
  FUN_140e609c0(*(undefined8 *)*puVar1);
  ppuVar8 = &local_70;
  uVar6 = CONCAT44(uVar7,DAT_141a0a7c8);
  puVar1 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_128,4,uVar6,ppuVar8);
  if (puVar1 != puVar2) {
    local_158 = (longlong *)*puVar1;
    uStack_150 = *(undefined4 *)(puVar1 + 1);
    uStack_14c = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_158);
  }
  FUN_140e60910(2);
  local_78 = 0xb;
  uStack_14c = 6;
  uVar9 = (ulonglong)ppuVar8 & 0xffffffffffffff00;
  uVar6 = uVar6 & 0xffffffffffffff00;
  local_158 = param_1;
  FUN_140e87440(&local_158,DAT_141a0a778,0x80000000,&local_138,uVar6,uVar9);
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  uStack_13c = local_12c;
  uStack_140 = local_130;
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) == 0) {
    local_148 = local_138;
  }
  else {
    FUN_1400419b0(&local_148,&local_138);
  }
  uStack_14c = 7;
  local_158 = (longlong *)CONCAT44(local_158._4_4_,0x5a);
  FUN_1400462a0(&local_148,&local_158);
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  plVar4 = local_148;
  if ((uStack_13c & 0xffffff) != 0) {
    plVar4 = (longlong *)FUN_140e4b060(&local_148);
  }
  fVar3 = (float)FUN_140e78f90(0x41400000,(float)(double)plVar4);
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_dc = 0;
  local_e8 = (double)fVar3;
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_78 = 0xc;
  uStack_14c = 6;
  uVar9 = uVar9 & 0xffffffffffffff00;
  uVar6 = uVar6 & 0xffffffffffffff00;
  local_158 = param_1;
  FUN_140e87440(&local_158,DAT_141a0a778,0x80000000,&local_138,uVar6,uVar9);
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  uStack_13c = local_12c;
  uStack_140 = local_130;
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) == 0) {
    local_148 = local_138;
  }
  else {
    FUN_1400419b0(&local_148,&local_138);
  }
  uStack_14c = 7;
  local_158 = (longlong *)CONCAT44(local_158._4_4_,0x5a);
  FUN_1400462a0(&local_148,&local_158);
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  plVar4 = local_148;
  if ((uStack_13c & 0xffffff) != 0) {
    plVar4 = (longlong *)FUN_140e4b060(&local_148);
  }
  fVar3 = (float)FUN_140e79010(0x41400000,(float)(double)plVar4);
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_ec = 0;
  local_f8 = (double)fVar3;
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_78 = 0xe;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_128 = 0;
  local_120 = 0;
  local_11c = 5;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f7648);
  uStack_14c = 6;
  uVar9 = uVar9 & 0xffffffffffffff00;
  uVar6 = uVar6 & 0xffffffffffffff00;
  local_158 = param_1;
  FUN_140e87440(&local_158,DAT_1419fe0e8,0x80000000,&local_108,uVar6,uVar9);
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  uStack_14c = 6;
  uVar9 = uVar9 & 0xffffffffffffff00;
  uVar6 = uVar6 & 0xffffffffffffff00;
  local_158 = param_1;
  FUN_140e87440(&local_158,DAT_1419fe158,0x80000000,&local_118,uVar6,uVar9);
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  uStack_14c = 6;
  uVar6 = uVar6 & 0xffffffffffffff00;
  local_158 = param_1;
  FUN_140e87440(&local_158,DAT_141a1b910,0x80000000,&local_98,uVar6,uVar9 & 0xffffffffffffff00);
  uVar7 = (undefined4)(uVar6 >> 0x20);
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  uStack_13c = local_fc;
  uStack_140 = local_100;
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) == 0) {
    local_148 = local_108;
  }
  else {
    FUN_1400419b0(&local_148,&local_108);
  }
  FUN_1400460e0(&local_148,&local_e8);
  local_158 = local_148;
  uStack_150 = uStack_140;
  uStack_14c = uStack_13c;
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_158);
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_70 = local_d8;
  uStack_13c = local_10c;
  uStack_140 = local_110;
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) == 0) {
    local_148 = local_118;
  }
  else {
    FUN_1400419b0(&local_148,&local_118);
  }
  FUN_1400460e0(&local_148,&local_f8);
  local_158 = local_148;
  uStack_150 = uStack_140;
  uStack_14c = uStack_13c;
  if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_c8);
  }
  FUN_140041b80(local_c8,&local_158);
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_68 = local_c8;
  local_158 = local_98;
  uStack_150 = uStack_90;
  uStack_14c = uStack_8c;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_158);
  local_60 = local_b8;
  uStack_14c = 0xf;
  local_158 = (longlong *)0x1000000000000df;
  local_148 = (longlong *)0x1000000000000df;
  uStack_140 = uStack_150;
  uStack_13c = 0xf;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_148);
  local_58 = local_a8;
  FUN_140e609c0(param_1);
  puVar2 = (undefined8 *)FUN_140e48e40(puVar1,1);
  FUN_140e609c0(*(undefined8 *)*puVar1);
  puVar1 = (undefined8 *)
           FUN_140e634e0(param_1,param_2,&local_128,4,CONCAT44(uVar7,DAT_141a0a7c8),&local_70);
  if (puVar1 != puVar2) {
    local_158 = (longlong *)*puVar1;
    uStack_150 = *(undefined4 *)(puVar1 + 1);
    uStack_14c = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_158);
  }
  FUN_140e60910(2);
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  _eh_vector_destructor_iterator_(local_d8,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_88;
  return;
}

