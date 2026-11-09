// gml_Script_reflect_anon_4607_vec2_Vect2 @ 0x140639b10

double * gml_Script_reflect_anon_4607_vec2_Vect2
                   (ulonglong param_1,undefined8 param_2,double *param_3,int param_4,
                   undefined8 *param_5)

{
  uint *puVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined4 uVar8;
  ulonglong uVar7;
  undefined1 **ppuVar9;
  ulonglong uVar10;
  ulonglong local_138;
  uint uStack_130;
  undefined4 uStack_12c;
  uint local_128 [3];
  undefined4 local_11c;
  double local_118;
  uint local_10c;
  double local_108;
  uint local_fc;
  double local_f8;
  uint local_ec;
  double local_e8;
  uint local_dc;
  uint local_d8;
  uint uStack_d4;
  uint uStack_d0;
  uint uStack_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  char *local_b0;
  undefined4 local_a8;
  undefined1 local_a0 [16];
  undefined1 local_90 [12];
  byte local_84;
  uint local_80 [3];
  byte local_74;
  undefined1 *local_68;
  uint *local_60;
  
  ppuVar9 = &local_68;
  local_b0 = "gml_Script_angle_to@anon@4114@vec2@Vect2";
  local_b8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_b8;
  local_a8 = 0x8f;
  uVar8 = 1;
  _eh_vector_constructor_iterator_(local_a0,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_11c = 0xffffff;
  local_128[0] = 0;
  local_128[1] = 0;
  local_dc = 0xffffff;
  local_e8 = 0.0;
  local_ec = 0xffffff;
  local_f8 = 0.0;
  local_fc = 0xffffff;
  local_108 = 0.0;
  local_10c = 0xffffff;
  local_118 = 0.0;
  local_bc = 0;
  local_c8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0.0;
  local_a8 = 0x92;
  local_d8 = DAT_141a00978 & 0xffffff;
  uStack_d4 = (int)(DAT_141a00978 | 0x5000000) >> 0x18 & 0xff;
  if (uStack_d4 == 0xf) {
    uStack_d4 = 0x4000004;
  }
  else {
    uStack_d4 = uStack_d4 | 0x1000000;
  }
  uStack_12c = 0xf;
  local_138 = CONCAT44(uStack_d4,DAT_141a00978) & 0xffffffff00ffffff;
  uStack_d0 = uStack_130;
  uStack_cc = 0xf;
  if ((1 << (local_84 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_90);
  }
  FUN_140041b80(local_90,&local_d8);
  local_68 = local_90;
  if (param_4 < 1) {
    puVar1 = (uint *)&DAT_1419df7b0;
  }
  else {
    puVar1 = (uint *)*param_5;
    if (puVar1 == local_80) goto LAB_140639cc0;
  }
  local_d8 = *puVar1;
  uStack_d4 = puVar1[1];
  uStack_d0 = puVar1[2];
  uStack_cc = puVar1[3];
  if ((1 << (local_74 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_80);
  }
  FUN_140041b80(local_80,&local_d8);
LAB_140639cc0:
  local_60 = local_80;
  uVar7 = CONCAT44(uVar8,DAT_1419fd6d8);
  puVar1 = (uint *)FUN_140e634e0(param_1,param_2,&local_c8,2,uVar7,ppuVar9);
  if (puVar1 != local_128) {
    local_d8 = *puVar1;
    uStack_d4 = puVar1[1];
    uStack_d0 = puVar1[2];
    uStack_cc = puVar1[3];
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_128);
    }
    FUN_140041b80(local_128,&local_d8);
  }
  local_a8 = 0x93;
  uStack_12c = 6;
  uVar10 = (ulonglong)ppuVar9 & 0xffffffffffffff00;
  uVar7 = uVar7 & 0xffffffffffffff00;
  local_138 = param_1;
  FUN_140e87440(&local_138,DAT_1419fe0e8,0x80000000,&local_e8,uVar7,uVar10);
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  uStack_12c = 6;
  local_138 = param_1;
  FUN_140e87440(&local_138,DAT_1419fe158,0x80000000,&local_f8,uVar7 & 0xffffffffffffff00,
                uVar10 & 0xffffffffffffff00);
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  FUN_140e87170(local_128,DAT_1419fe0e8,0x80000000,&local_108,param_1,param_2);
  FUN_140e87170(local_128,DAT_1419fe158,0x80000000,&local_118,param_1,param_2);
  dVar3 = local_118;
  if ((local_10c & 0xffffff) != 0) {
    dVar3 = (double)FUN_140e4b060(&local_118);
  }
  dVar4 = local_108;
  if ((local_fc & 0xffffff) != 0) {
    dVar4 = (double)FUN_140e4b060(&local_108);
  }
  dVar5 = local_f8;
  if ((local_ec & 0xffffff) != 0) {
    dVar5 = (double)FUN_140e4b060(&local_f8);
  }
  dVar6 = local_e8;
  if ((local_dc & 0xffffff) != 0) {
    dVar6 = (double)FUN_140e4b060(&local_e8);
  }
  fVar2 = (float)FUN_140e793d0((float)dVar6,(float)dVar5,(float)dVar4,(float)dVar3);
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 0;
  *param_3 = (double)fVar2;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
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
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_128);
  }
  _eh_vector_destructor_iterator_(local_a0,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_b8;
  return param_3;
}

