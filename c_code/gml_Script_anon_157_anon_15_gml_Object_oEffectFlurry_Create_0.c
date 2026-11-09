// gml_Script_anon_157_anon_15_gml_Object_oEffectFlurry_Create_0 @ 0x140921ab0

void gml_Script_anon_157_anon_15_gml_Object_oEffectFlurry_Create_0
               (longlong *param_1,ulonglong param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 *local_res18 [2];
  longlong *plVar9;
  ulonglong uVar10;
  undefined4 uVar12;
  ulonglong uVar11;
  undefined1 **ppuVar13;
  longlong *local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  double local_178;
  undefined4 uStack_170;
  uint uStack_16c;
  double local_168;
  uint local_15c;
  double local_158;
  uint local_14c;
  double local_148;
  uint local_13c;
  double local_138;
  undefined4 local_130;
  uint local_12c;
  double local_128;
  uint local_11c;
  double local_118;
  uint local_10c;
  double local_108;
  uint local_fc;
  double local_f8;
  uint local_ec;
  undefined1 local_e8 [12];
  byte local_dc;
  undefined8 local_d8;
  char *local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined4 local_b4;
  longlong *local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  
  local_d0 = "gml_Object_oEffectChain_Draw_0";
  local_c8 = 0;
  local_d8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_d8;
  _eh_vector_constructor_iterator_(local_e8,0x10,1,FUN_1400424d0,FUN_140041b30);
  local_12c = 0xffffff;
  local_138 = 0.0;
  local_15c = 0xffffff;
  local_168 = 0.0;
  local_13c = 0xffffff;
  local_148 = 0.0;
  local_14c = 0xffffff;
  local_158 = 0.0;
  local_ec = 0xffffff;
  local_f8 = 0.0;
  local_fc = 0xffffff;
  local_108 = 0.0;
  local_10c = 0xffffff;
  local_118 = 0.0;
  local_11c = 0xffffff;
  local_128 = 0.0;
  local_b4 = 0xffffff;
  local_c0 = 0;
  local_c8 = 3;
  uVar1 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f440);
  plVar9 = param_1;
  uVar11 = param_2;
  FUN_140e87170(uVar1,DAT_1419fe158,0x80000000,&local_138,param_1,param_2);
  uStack_17c = 6;
  uVar10 = (ulonglong)plVar9 & 0xffffffffffffff00;
  local_188 = param_1;
  FUN_140e87440(&local_188,DAT_1419fe158,0x80000000,&local_168,uVar10,uVar11 & 0xffffffffffffff00);
  uVar12 = (undefined4)(uVar10 >> 0x20);
  if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  uStack_17c = 0xf;
  local_188 = (longlong *)0x1000001000000b7;
  local_178 = 7.291128972912502e-304;
  uStack_170 = uStack_180;
  uStack_16c = 0xf;
  if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_e8);
  }
  FUN_140041b80(local_e8,&local_178);
  local_res18[0] = local_e8;
  uStack_16c = local_12c;
  uStack_170 = local_130;
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) == 0) {
    local_178 = local_138;
  }
  else {
    FUN_1400419b0(&local_178,&local_138);
  }
  FUN_1400462a0(&local_178,&local_168);
  if ((uStack_16c & 0xffffff) == 0) {
    uVar2 = SUB84(local_178,0);
  }
  else {
    uVar2 = FUN_140e4b060(&local_178);
  }
  ppuVar13 = local_res18;
  uVar11 = CONCAT44(uVar12,DAT_141a04808);
  uVar1 = FUN_140e634e0(param_1,param_2,&local_c0,1,uVar11,ppuVar13);
  local_188 = (longlong *)FUN_140e78d00(uVar2);
  uStack_17c = 0;
  FUN_140046500(&local_188,uVar1);
  uStack_a0 = uStack_180;
  uStack_9c = uStack_17c;
  local_a8 = local_188;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  FUN_140041b80(&local_148,&local_a8);
  if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  local_c8 = 5;
  uStack_17c = 6;
  uVar10 = (ulonglong)ppuVar13 & 0xffffffffffffff00;
  uVar11 = uVar11 & 0xffffffffffffff00;
  local_188 = param_1;
  FUN_140e87440(&local_188,DAT_1419fe0e8,0x80000000,&local_158,uVar11,uVar10);
  if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  uStack_17c = 6;
  uVar10 = uVar10 & 0xffffffffffffff00;
  uVar11 = uVar11 & 0xffffffffffffff00;
  local_188 = param_1;
  FUN_140e87440(&local_188,DAT_1419fe158,0x80000000,&local_168,uVar11,uVar10);
  uVar12 = (undefined4)(uVar11 >> 0x20);
  uVar2 = (undefined4)(uVar10 >> 0x20);
  if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  uStack_16c = 0xf;
  local_178 = 7.291128972912502e-304;
  dVar3 = local_148;
  if ((local_13c & 0xffffff) != 0) {
    dVar3 = (double)FUN_140e4b060(&local_148);
  }
  dVar4 = local_168;
  if ((local_15c & 0xffffff) != 0) {
    dVar4 = (double)FUN_140e4b060(&local_168);
  }
  dVar5 = local_158;
  if ((local_14c & 0xffffff) != 0) {
    dVar5 = (double)FUN_140e4b060(&local_158);
  }
  dVar6 = local_178;
  if ((uStack_16c & 0xffffff) != 0) {
    dVar6 = (double)FUN_140e4b060(&local_178);
  }
  uVar10 = CONCAT44(uVar2,0x3f800000);
  uVar11 = CONCAT44(uVar12,(float)dVar4);
  FUN_140ec5dd0(param_1,(int)dVar6,0,(float)dVar5,uVar11,uVar10,(float)dVar3,0,0xffffff,0x3f800000);
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  local_c8 = 6;
  uStack_17c = 6;
  uVar10 = uVar10 & 0xffffffffffffff00;
  uVar11 = uVar11 & 0xffffffffffffff00;
  local_188 = param_1;
  FUN_140e87440(&local_188,DAT_141a0a728,0x80000000,&local_f8,uVar11,uVar10);
  if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  uStack_17c = 6;
  uVar10 = uVar10 & 0xffffffffffffff00;
  uVar11 = uVar11 & 0xffffffffffffff00;
  local_188 = param_1;
  FUN_140e87440(&local_188,DAT_141a0cfc8,0x80000000,&local_108,uVar11,uVar10);
  if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  uStack_17c = 6;
  uVar10 = uVar10 & 0xffffffffffffff00;
  uVar11 = uVar11 & 0xffffffffffffff00;
  local_188 = param_1;
  FUN_140e87440(&local_188,DAT_1419fe0e8,0x80000000,&local_158,uVar11,uVar10);
  if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  uStack_17c = 6;
  uVar10 = uVar10 & 0xffffffffffffff00;
  uVar11 = uVar11 & 0xffffffffffffff00;
  local_188 = param_1;
  FUN_140e87440(&local_188,DAT_1419fe158,0x80000000,&local_168,uVar11,uVar10);
  if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  uStack_17c = 6;
  uVar10 = uVar10 & 0xffffffffffffff00;
  uVar11 = uVar11 & 0xffffffffffffff00;
  local_188 = param_1;
  FUN_140e87440(&local_188,DAT_141a0f7f8,0x80000000,&local_118,uVar11,uVar10);
  if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  uStack_17c = 6;
  uVar10 = uVar10 & 0xffffffffffffff00;
  uVar11 = uVar11 & 0xffffffffffffff00;
  local_188 = param_1;
  FUN_140e87440(&local_188,DAT_141a0f938,0x80000000,&local_128,uVar11,uVar10);
  uVar12 = (undefined4)(uVar11 >> 0x20);
  uVar2 = (undefined4)(uVar10 >> 0x20);
  if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  dVar3 = local_128;
  if ((local_11c & 0xffffff) != 0) {
    dVar3 = (double)FUN_140e4b060(&local_128);
  }
  dVar4 = local_118;
  if ((local_10c & 0xffffff) != 0) {
    dVar4 = (double)FUN_140e4b060(&local_118);
  }
  dVar5 = local_168;
  if ((local_15c & 0xffffff) != 0) {
    dVar5 = (double)FUN_140e4b060(&local_168);
  }
  dVar6 = local_158;
  if ((local_14c & 0xffffff) != 0) {
    dVar6 = (double)FUN_140e4b060(&local_158);
  }
  dVar7 = local_108;
  if ((local_fc & 0xffffff) != 0) {
    dVar7 = (double)FUN_140e4b060(&local_108);
  }
  dVar8 = local_f8;
  if ((local_ec & 0xffffff) != 0) {
    dVar8 = (double)FUN_140e4b060(&local_f8);
  }
  FUN_140ec5dd0(param_1,(longlong)dVar8,(float)dVar7,(float)dVar6,CONCAT44(uVar12,(float)dVar5),
                CONCAT44(uVar2,(float)dVar4),(float)dVar3,0,0xffffff,0x3f800000);
  if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c0);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
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
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  _eh_vector_destructor_iterator_(local_e8,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_d8;
  return;
}

