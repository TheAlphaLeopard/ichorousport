// gml_Script_anon_3807_gml_Object_oPlayer_Other_10 @ 0x140c627a0

undefined8 *
gml_Script_anon_3807_gml_Object_oPlayer_Other_10
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  double dVar1;
  char cVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  int iVar8;
  longlong *plVar9;
  uint uVar10;
  longlong lVar11;
  undefined4 uVar12;
  code *pcVar13;
  ulonglong uVar14;
  ulonglong in_stack_fffffffffffffe80;
  undefined8 **ppuVar15;
  undefined8 local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined4 local_160;
  undefined4 local_15c;
  undefined8 local_158;
  undefined4 local_14c;
  undefined8 local_148;
  undefined4 local_13c;
  undefined1 local_138 [12];
  byte local_12c;
  longlong local_128;
  byte local_11c;
  longlong local_118;
  byte local_10c;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  longlong local_f8;
  undefined4 local_ec;
  longlong local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  longlong local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  char *local_c0;
  undefined4 local_b8;
  longlong local_b0;
  uint uStack_a4;
  longlong local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 *local_88;
  longlong *local_80;
  longlong *local_78;
  longlong local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  plVar9 = (longlong *)0x0;
  local_c0 = "gml_Script_anon@293@gml_Object_oPlayer_Other_10";
  local_c8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_c8;
  local_b8 = 10;
  pcVar13 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_138,0x10,3,FUN_1400424d0,FUN_140041b30);
  uStack_8c = 0xffffff;
  local_98 = 0;
  local_13c = 0xffffff;
  local_148 = 0;
  local_14c = 0xffffff;
  local_158 = 0;
  uVar10 = 0xffffff;
  uStack_a4 = 0xffffff;
  local_b0 = 0;
  uStack_5c = 0xffffff;
  local_68 = 0;
  local_ec = 0xffffff;
  local_f8 = 0;
  local_cc = 0xffffff;
  local_d8 = 0;
  local_dc = 0xffffff;
  local_e8 = 0;
  local_15c = 0;
  local_168 = 0;
  local_fc = 0;
  local_108 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_b8 = 0xb;
  plVar3 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f8208);
  uStack_16c = 6;
  uVar14 = (ulonglong)pcVar13 & 0xffffffffffffff00;
  local_178 = param_1;
  FUN_140e87440(&local_178,DAT_141a0a728,0x80000000,&local_98,uVar14,
                in_stack_fffffffffffffe80 & 0xffffffffffffff00);
  uVar12 = (undefined4)(uVar14 >> 0x20);
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  local_178 = (longlong *)local_98;
  uStack_170 = uStack_90;
  uStack_16c = uStack_8c;
  if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_138);
  }
  FUN_140041b80(local_138,&local_178);
  local_88 = local_138;
  if (plVar3 != &local_128) {
    local_178 = (longlong *)*plVar3;
    uStack_170 = (undefined4)plVar3[1];
    uStack_16c = *(undefined4 *)((longlong)plVar3 + 0xc);
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_178);
  }
  local_80 = &local_128;
  uVar5 = CONCAT44(uVar12,DAT_141a089e8);
  plVar4 = (longlong *)FUN_140e634e0(param_1,param_2,&local_108,1,uVar5,&local_88);
  uVar12 = (undefined4)((ulonglong)uVar5 >> 0x20);
  if (plVar4 != &local_118) {
    local_178 = (longlong *)*plVar4;
    uStack_170 = (undefined4)plVar4[1];
    uStack_16c = *(undefined4 *)((longlong)plVar4 + 0xc);
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_178);
  }
  local_78 = &local_118;
  ppuVar15 = &local_80;
  uVar14 = CONCAT44(uVar12,DAT_141a01478);
  uVar5 = FUN_140e634e0(param_1,param_2,&local_168,2,uVar14,ppuVar15);
  cVar2 = FUN_140e491e0(uVar5);
  if (cVar2 == '\0') {
    local_b8 = 0xd;
    uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5e38);
    if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    local_13c = 0;
    local_148 = 0;
    FUN_140e86c30(uVar5,DAT_1419fe0e8,0x80000000,&local_148);
    local_b8 = 0xe;
    if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    local_14c = 0;
    local_158 = 0;
    uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5e38);
    FUN_140e86c30(uVar5,DAT_1419fe158,0x80000000,&local_158);
    local_b8 = 0x10;
    goto LAB_140c63021;
  }
  local_b8 = 0x13;
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  local_168 = 0;
  local_160 = 0;
  local_15c = 5;
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_108 = 0;
  local_100 = 0;
  local_fc = 5;
  uStack_16c = 6;
  uVar14 = uVar14 & 0xffffffffffffff00;
  local_178 = param_1;
  FUN_140e87440(&local_178,DAT_141a0a728,0x80000000,&local_98,uVar14,
                (ulonglong)ppuVar15 & 0xffffffffffffff00);
  uVar12 = (undefined4)(uVar14 >> 0x20);
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  local_178 = (longlong *)local_98;
  uStack_170 = uStack_90;
  uStack_16c = uStack_8c;
  if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_138);
  }
  FUN_140041b80(local_138,&local_178);
  local_88 = local_138;
  if (plVar3 != &local_128) {
    local_178 = (longlong *)*plVar3;
    uStack_170 = (undefined4)plVar3[1];
    uStack_16c = *(undefined4 *)((longlong)plVar3 + 0xc);
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_178);
  }
  local_80 = &local_128;
  uVar5 = CONCAT44(uVar12,DAT_141a089e8);
  plVar3 = (longlong *)FUN_140e634e0(param_1,param_2,&local_108,1,uVar5,&local_88);
  uVar12 = (undefined4)((ulonglong)uVar5 >> 0x20);
  if (plVar3 != &local_118) {
    local_178 = (longlong *)*plVar3;
    uStack_170 = (undefined4)plVar3[1];
    uStack_16c = *(undefined4 *)((longlong)plVar3 + 0xc);
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_178);
  }
  local_78 = &local_118;
  ppuVar15 = &local_80;
  uVar14 = CONCAT44(uVar12,DAT_1419ff4f8);
  plVar3 = (longlong *)FUN_140e634e0(param_1,param_2,&local_168,2,uVar14,ppuVar15);
  lVar11 = 0;
  if (plVar3 != &local_b0) {
    local_178 = (longlong *)*plVar3;
    uStack_170 = (undefined4)plVar3[1];
    uStack_16c = *(undefined4 *)((longlong)plVar3 + 0xc);
    FUN_140041b80(&local_b0,&local_178);
    lVar11 = local_b0;
    uVar10 = uStack_a4;
  }
  local_b8 = 0x14;
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  local_168 = 0;
  local_160 = 0;
  local_15c = 5;
  uStack_16c = 6;
  uVar14 = uVar14 & 0xffffffffffffff00;
  local_178 = param_1;
  FUN_140e87440(&local_178,DAT_141a0cfc8,0x80000000,&local_68,uVar14,
                (ulonglong)ppuVar15 & 0xffffffffffffff00);
  uVar12 = (undefined4)(uVar14 >> 0x20);
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  local_178 = (longlong *)local_68;
  uStack_170 = uStack_60;
  uStack_16c = uStack_5c;
  if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_138);
  }
  FUN_140041b80(local_138,&local_178);
  local_88 = local_138;
  iVar8 = 0;
  if ((uVar10 == 2) && (lVar11 != 0)) {
    iVar8 = *(int *)(lVar11 + 0x24);
  }
  puVar6 = (undefined8 *)
           FUN_140e634e0(param_1,param_2,&local_168,1,CONCAT44(uVar12,DAT_1419fe728),&local_88);
  if ((*(uint *)((longlong)puVar6 + 0xc) & 0xffffff) == 0) {
    uVar12 = (undefined4)*puVar6;
  }
  else {
    uVar12 = FUN_140e4b060(puVar6);
  }
  dVar1 = (double)FUN_140e78ec0(uVar12,0,(double)(iVar8 + -1));
  iVar8 = (int)dVar1;
  if (((uVar10 & 0xffffff) == 2) && (lVar11 != 0)) {
    if ((iVar8 < 0) || (*(int *)(lVar11 + 0x24) <= iVar8)) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar8,
                    *(undefined4 *)(lVar11 + 0x24));
    }
    else {
      plVar9 = (longlong *)((longlong)iVar8 * 0x10 + *(longlong *)(lVar11 + 8));
    }
    if (plVar9 != &local_f8) goto LAB_140c62e12;
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
    plVar9 = &local_b0;
LAB_140c62e12:
    local_178 = (longlong *)*plVar9;
    uStack_170 = (undefined4)plVar9[1];
    uStack_16c = *(undefined4 *)((longlong)plVar9 + 0xc);
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_178);
  }
  local_b8 = 0x15;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5ef8);
  uVar7 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5e38);
  (**(code **)(*param_1 + 8))(param_1,DAT_1419f8208);
  FUN_140e87170(&local_f8,DAT_1419fe0e8,0x80000000,&local_d8,param_1,param_2);
  uStack_16c = local_cc;
  uStack_170 = local_d0;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) == 0) {
    local_178 = (longlong *)local_d8;
  }
  else {
    FUN_1400419b0(&local_178,&local_d8);
  }
  FUN_140042560(&local_178,uVar5);
  local_58 = (undefined4)local_178;
  uStack_54 = local_178._4_4_;
  uStack_50 = uStack_170;
  uStack_4c = uStack_16c;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  FUN_140041b80(&local_148,&local_58);
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  FUN_140e86c30(uVar7,DAT_1419fe0e8,0x80000000,&local_148);
  local_b8 = 0x16;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5e38);
  FUN_140e87170(&local_f8,DAT_1419fe158,0x80000000,&local_e8,param_1,param_2);
  uStack_16c = local_dc;
  uStack_170 = local_e0;
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) == 0) {
    local_178 = (longlong *)local_e8;
  }
  else {
    FUN_1400419b0(&local_178,&local_e8);
  }
  uVar12 = uStack_16c;
  local_58 = (undefined4)local_178;
  uStack_54 = local_178._4_4_;
  uStack_50 = uStack_170;
  uStack_4c = uStack_16c;
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  FUN_140041b80(&local_158,&local_58);
  if ((1 << ((byte)uVar12 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  FUN_140e86c30(uVar5,DAT_1419fe158,0x80000000,&local_158);
LAB_140c63021:
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)uVar10 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b0);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  _eh_vector_destructor_iterator_(local_138,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_c8;
  return param_3;
}

