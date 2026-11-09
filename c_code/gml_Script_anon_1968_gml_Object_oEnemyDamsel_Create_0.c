// gml_Script_anon_1968_gml_Object_oEnemyDamsel_Create_0 @ 0x140976e40

longlong *
gml_Script_anon_1968_gml_Object_oEnemyDamsel_Create_0
          (undefined8 param_1,undefined8 param_2,longlong *param_3,int param_4,undefined8 *param_5)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  double *pdVar5;
  undefined8 *puVar6;
  float fVar7;
  double dVar8;
  double dVar9;
  uint uVar10;
  code *pcVar11;
  ulonglong uVar12;
  undefined4 uVar13;
  undefined1 **in_stack_fffffffffffffe90;
  ulonglong uVar14;
  double local_168;
  uint local_15c;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 local_14c;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 local_13c;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  char *local_100;
  undefined4 local_f8;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  
  local_100 = "gml_Script_anon@1332@gml_Object_oEnemyDamsel_Create_0";
  local_108 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_108;
  local_f8 = 0x47;
  pcVar11 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_b8,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_12c = 0xffffff;
  local_138 = 0;
  local_13c = 0xffffff;
  local_148 = 0;
  local_14c = 0;
  uVar10 = 0;
  local_158 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_f8 = 0x48;
  local_15c = 0;
  local_168 = 4.0;
  bVar1 = true;
  while( true ) {
    if (!bVar1) {
      local_f8 = 0x48;
      FUN_140162d40(&local_168,4);
    }
    bVar1 = false;
    if (param_4 < 2) {
      puVar6 = &DAT_1419df7b0;
    }
    else {
      puVar6 = (undefined8 *)param_5[1];
    }
    iVar3 = FUN_140e851f0(&local_168,puVar6,DAT_141955260,1);
    if ((iVar3 == -2) || (0 < iVar3)) break;
    local_f8 = 0x4a;
    if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    local_158 = 0;
    local_150 = 0;
    local_14c = 5;
    local_cc = 6;
    uVar14 = (ulonglong)in_stack_fffffffffffffe90 & 0xffffffffffffff00;
    uVar12 = (ulonglong)pcVar11 & 0xffffffffffffff00;
    local_d8 = param_1;
    FUN_140e87440(&local_d8,DAT_1419fe0e8,0x80000000,&local_138,uVar12,uVar14);
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    local_bc = 6;
    uVar12 = uVar12 & 0xffffffffffffff00;
    local_c8 = param_1;
    FUN_140e87440(&local_c8,DAT_1419fe158,0x80000000,&local_148,uVar12,uVar14 & 0xffffffffffffff00);
    uVar13 = (undefined4)(uVar12 >> 0x20);
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    if (param_4 < 1) {
      pdVar5 = (double *)&DAT_1419df7b0;
    }
    else {
      pdVar5 = (double *)*param_5;
    }
    if ((*(uint *)((longlong)pdVar5 + 0xc) & 0xffffff) == 0) {
      dVar8 = *pdVar5;
    }
    else {
      dVar8 = (double)FUN_140e4b060();
    }
    dVar9 = local_168;
    if ((local_15c & 0xffffff) != 0) {
      dVar9 = (double)FUN_140e4b060(&local_168);
    }
    fVar7 = (float)FUN_140e78f90((float)dVar9,(float)dVar8);
    uStack_11c = local_12c;
    uStack_120 = local_130;
    if ((1 << ((byte)local_12c & 0x1f) & 0x46U) == 0) {
      local_128 = local_138;
    }
    else {
      FUN_1400419b0(&local_128,&local_138);
    }
    FUN_140162c50(&local_128,(double)fVar7);
    local_e8 = (undefined4)local_128;
    uStack_e4 = local_128._4_4_;
    uStack_e0 = uStack_120;
    uStack_dc = uStack_11c;
    if ((1 << (local_b8[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_b8);
    }
    FUN_140041b80(local_b8,&local_e8);
    if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    local_78 = local_b8;
    if (param_4 < 1) {
      pdVar5 = (double *)&DAT_1419df7b0;
    }
    else {
      pdVar5 = (double *)*param_5;
    }
    if ((*(uint *)((longlong)pdVar5 + 0xc) & 0xffffff) == 0) {
      dVar8 = *pdVar5;
    }
    else {
      dVar8 = (double)FUN_140e4b060();
    }
    dVar9 = local_168;
    if ((local_15c & 0xffffff) != 0) {
      dVar9 = (double)FUN_140e4b060(&local_168);
    }
    fVar7 = (float)FUN_140e79010((float)dVar9,(float)dVar8);
    uStack_10c = local_13c;
    uStack_110 = local_140;
    if ((1 << ((byte)local_13c & 0x1f) & 0x46U) == 0) {
      local_118 = local_148;
    }
    else {
      FUN_1400419b0(&local_118,&local_148);
    }
    FUN_140162c50(&local_118,(double)fVar7);
    local_e8 = (undefined4)local_118;
    uStack_e4 = local_118._4_4_;
    uStack_e0 = uStack_110;
    uStack_dc = uStack_10c;
    if ((1 << (local_a8[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_a8);
    }
    FUN_140041b80(local_a8,&local_e8);
    if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    local_70 = local_a8;
    uStack_7c = 0xf;
    local_88 = 0x100000000000149;
    local_e8 = 0x149;
    uStack_e4 = 0x1000000;
    uStack_e0 = uStack_80;
    uStack_dc = 0xf;
    if ((1 << (local_98[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_98);
    }
    FUN_140041b80(local_98,&local_e8);
    in_stack_fffffffffffffe90 = &local_78;
    pcVar11 = (code *)CONCAT44(uVar13,DAT_141a12628);
    local_68 = local_98;
    uVar4 = FUN_140e634e0(param_1,param_2,&local_158,3,pcVar11,in_stack_fffffffffffffe90);
    cVar2 = FUN_140e491e0(uVar4);
    if (cVar2 != '\0') {
      local_f8 = 0x4a;
      uVar10 = 0x3ff00000;
LAB_1409772d1:
      *(undefined4 *)((longlong)param_3 + 0xc) = 0xd;
      *param_3 = (ulonglong)uVar10 << 0x20;
      if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      _eh_vector_destructor_iterator_(local_b8,0x10,3,FUN_140041b30);
      DAT_141dc7a50 = (undefined8 *)local_108;
      return param_3;
    }
  }
  local_f8 = 0x4c;
  goto LAB_1409772d1;
}

