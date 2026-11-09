// gml_Script_anon_2793_anon_198_gml_Object_oBossKillText_Create_0 @ 0x1407a2460

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_2793_anon_198_gml_Object_oBossKillText_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 *puVar10;
  uint local_res8;
  undefined1 **ppuVar11;
  longlong **pplVar12;
  ulonglong uVar13;
  longlong **pplVar14;
  ulonglong uVar15;
  undefined8 local_228;
  undefined4 local_220;
  undefined4 local_21c;
  undefined8 local_218;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  longlong local_1f8;
  undefined4 local_1ec;
  undefined8 local_1e8;
  char *local_1e0;
  undefined4 local_1d8;
  undefined8 local_1d0;
  undefined4 local_1c4;
  longlong local_1b8;
  byte local_1ac;
  undefined1 local_1a8 [12];
  byte local_19c;
  undefined4 local_198 [3];
  byte local_18c;
  undefined4 local_188 [3];
  byte local_17c;
  undefined8 local_178;
  undefined4 local_16c;
  undefined8 local_168;
  undefined4 local_160;
  undefined4 local_15c;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 local_14c;
  undefined8 local_148;
  undefined4 local_13c;
  undefined8 local_138;
  undefined4 local_12c;
  undefined8 local_128;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 local_ec;
  longlong local_e8;
  undefined4 local_dc;
  longlong local_d8;
  undefined4 local_cc;
  longlong local_c8;
  uint uStack_bc;
  longlong *local_b8;
  undefined1 *local_b0;
  undefined4 *local_a8;
  undefined4 *local_a0;
  undefined8 *local_98;
  undefined8 local_90;
  undefined4 local_84;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  
  local_1e0 = "gml_Script_anon@1673@anon@198@gml_Object_oBossKillText_Create_0";
  local_1e8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_1e8;
  local_1d8 = 0x49;
  _eh_vector_constructor_iterator_(&local_1b8,0x10,5,FUN_1400424d0,FUN_140041b30);
  local_1ec = 0xffffff;
  local_1f8 = 0;
  local_res8 = 0xffffff;
  uStack_bc = 0xffffff;
  lVar9 = 0;
  local_c8 = 0;
  local_cc = 0xffffff;
  local_d8 = 0;
  local_dc = 0xffffff;
  local_e8 = 0;
  local_ec = 0xffffff;
  local_f8 = 0;
  uStack_6c = 0xffffff;
  local_78 = 0;
  local_fc = 0xffffff;
  local_108 = 0;
  local_68 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419ef568);
  local_1c4 = 0xffffff;
  local_1d0 = 0;
  local_84 = 0xffffff;
  local_90 = 0;
  local_10c = 0xffffff;
  local_118 = 0;
  local_11c = 0xffffff;
  local_128 = 0;
  local_12c = 0xffffff;
  local_138 = 0;
  local_13c = 0xffffff;
  local_148 = 0;
  local_21c = 0;
  local_228 = 0;
  local_14c = 0;
  local_158 = 0;
  local_15c = 0;
  local_168 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_1d8 = 0x4a;
  plVar5 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a08bd8);
  puVar10 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar8 = &DAT_1419df7b0;
  }
  else {
    puVar8 = (undefined8 *)*param_5;
  }
  iVar3 = FUN_140e4a740(puVar8);
  if (((*(uint *)((longlong)plVar5 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar5, lVar1 != 0)) {
    if ((iVar3 < 0) || (*(int *)(lVar1 + 0x24) <= iVar3)) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar3,
                    *(undefined4 *)(lVar1 + 0x24));
      plVar5 = (longlong *)0x0;
    }
    else {
      plVar5 = (longlong *)((longlong)iVar3 * 0x10 + *(longlong *)(lVar1 + 8));
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
  }
  if (plVar5 != &local_1f8) {
    local_218 = *plVar5;
    uStack_210 = (undefined4)plVar5[1];
    uStack_20c = *(undefined4 *)((longlong)plVar5 + 0xc);
    if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f8);
    }
    FUN_140041b80(&local_1f8,&local_218);
  }
  local_1d8 = 0x4c;
  if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  local_228 = 0;
  local_220 = 0;
  local_21c = 5;
  uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a08c28);
  if (param_4 < 1) {
    plVar5 = &DAT_1419df7b0;
LAB_1407a26fa:
    local_218 = *plVar5;
    uStack_210 = (undefined4)plVar5[1];
    uStack_20c = *(undefined4 *)((longlong)plVar5 + 0xc);
    if ((1 << (local_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    FUN_140041b80(&local_1b8,&local_218);
  }
  else {
    plVar5 = (longlong *)*param_5;
    if (plVar5 != &local_1b8) goto LAB_1407a26fa;
  }
  local_b8 = &local_1b8;
  plVar5 = (longlong *)FUN_140e63610(param_1,param_2,&local_228,1,uVar6,&local_b8);
  if (plVar5 != &local_c8) {
    local_218 = *plVar5;
    uStack_210 = (undefined4)plVar5[1];
    uStack_20c = *(undefined4 *)((longlong)plVar5 + 0xc);
    FUN_140041b80(&local_c8,&local_218);
    local_res8 = uStack_bc;
    lVar9 = local_c8;
  }
  local_1d8 = 0x4d;
  plVar5 = (longlong *)0x0;
  if (((local_res8 & 0xffffff) == 2) && (lVar9 != 0)) {
    if (*(int *)(lVar9 + 0x24) < 1) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",0);
    }
    else {
      plVar5 = *(longlong **)(lVar9 + 8);
    }
    if (plVar5 != &local_d8) goto LAB_1407a27f2;
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
    plVar5 = &local_c8;
LAB_1407a27f2:
    local_218 = *plVar5;
    uStack_210 = (undefined4)plVar5[1];
    uStack_20c = *(undefined4 *)((longlong)plVar5 + 0xc);
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    FUN_140041b80(&local_d8,&local_218);
  }
  FUN_140e86c30(&local_1f8,DAT_1419fe0e8,0x80000000,&local_d8);
  local_1d8 = 0x4e;
  plVar5 = (longlong *)0x0;
  if (((local_res8 & 0xffffff) == 2) && (lVar9 != 0)) {
    if (*(int *)(lVar9 + 0x24) < 2) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",1);
    }
    else {
      plVar5 = (longlong *)(*(longlong *)(lVar9 + 8) + 0x10);
    }
    if (plVar5 != &local_e8) goto LAB_1407a2898;
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
    plVar5 = &local_c8;
LAB_1407a2898:
    local_218 = *plVar5;
    uStack_210 = (undefined4)plVar5[1];
    uStack_20c = *(undefined4 *)((longlong)plVar5 + 0xc);
    if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_218);
  }
  FUN_140e86c30(&local_1f8,DAT_1419fe158,0x80000000,&local_e8);
  local_1d8 = 0x50;
  if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  local_228 = 0;
  local_220 = 0;
  local_21c = 5;
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_158 = 0;
  local_150 = 0;
  local_14c = 5;
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  local_168 = 0;
  local_160 = 0;
  local_15c = 5;
  uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a08bf8);
  local_218 = CONCAT44(uRam0000000141dd698c,_DAT_141dd6988);
  uStack_210 = uRam0000000141dd6990;
  uStack_20c = DAT_141dd6994;
  if ((1 << (local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  FUN_140041b80(&local_1b8,&local_218);
  local_b8 = &local_1b8;
  uStack_20c = DAT_141dd6954;
  uStack_210 = DAT_141dd6950;
  if ((1 << ((byte)DAT_141dd6954 & 0x1f) & 0x46U) == 0) {
    local_218 = DAT_141dd6948;
  }
  else {
    FUN_1400419b0(&local_218,&DAT_141dd6948);
  }
  uVar4 = uStack_20c;
  local_208 = (undefined4)local_218;
  uStack_204 = local_218._4_4_;
  uStack_200 = uStack_210;
  uStack_1fc = uStack_20c;
  if ((1 << (local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1a8);
  }
  FUN_140041b80(local_1a8,&local_208);
  if ((1 << ((byte)uVar4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  local_b0 = local_1a8;
  puVar7 = (undefined4 *)gml_Script____struct___117(param_1,param_2,&local_158,1,&local_b8);
  if (puVar7 != local_198) {
    local_208 = *puVar7;
    uStack_204 = puVar7[1];
    uStack_200 = puVar7[2];
    uStack_1fc = puVar7[3];
    if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_198);
    }
    FUN_140041b80(local_198,&local_208);
  }
  local_a8 = local_198;
  uVar13 = 0;
  puVar7 = (undefined4 *)FUN_140e63610(param_1,param_2,&local_168,0,uVar6,0);
  if (puVar7 != local_188) {
    local_208 = *puVar7;
    uStack_204 = puVar7[1];
    uStack_200 = puVar7[2];
    uStack_1fc = puVar7[3];
    if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_188);
    }
    FUN_140041b80(local_188,&local_208);
  }
  local_a0 = local_188;
  ppuVar11 = &local_b0;
  puVar8 = (undefined8 *)FUN_140e64420(param_1,param_2,&local_228,3,ppuVar11);
  if (puVar8 != &local_f8) {
    local_208 = *(undefined4 *)puVar8;
    uStack_204 = *(undefined4 *)((longlong)puVar8 + 4);
    uStack_200 = *(undefined4 *)(puVar8 + 1);
    uStack_1fc = *(undefined4 *)((longlong)puVar8 + 0xc);
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_208);
  }
  FUN_140e87930(&local_1f8,DAT_141a578c0,0x80000000,&local_f8);
  local_1d8 = 0x51;
  if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  local_228 = 0;
  local_220 = 0;
  local_21c = 5;
  pplVar14 = (longlong **)(uVar13 & 0xffffffffffffff00);
  FUN_140e87440(&local_1f8,DAT_141a578c0,0x80000000,&local_78,
                (ulonglong)ppuVar11 & 0xffffffffffffff00,pplVar14);
  local_208 = (undefined4)local_78;
  uStack_204 = local_78._4_4_;
  uStack_200 = uStack_70;
  uStack_1fc = uStack_6c;
  if ((1 << (local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  FUN_140041b80(&local_1b8,&local_208);
  local_b8 = &local_1b8;
  local_208 = (undefined4)DAT_1419df7b0;
  uStack_204 = DAT_1419df7b0._4_4_;
  uStack_200 = DAT_1419df7b8;
  uStack_1fc = DAT_1419df7bc;
  if ((1 << (local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1a8);
  }
  FUN_140041b80(local_1a8,&local_208);
  local_b0 = local_1a8;
  pplVar12 = &local_b8;
  puVar8 = (undefined8 *)gml_Script_seg_add(param_1,param_2,&local_228,2,pplVar12);
  if (puVar8 != &local_108) {
    local_208 = *(undefined4 *)puVar8;
    uStack_204 = *(undefined4 *)((longlong)puVar8 + 4);
    uStack_200 = *(undefined4 *)(puVar8 + 1);
    uStack_1fc = *(undefined4 *)((longlong)puVar8 + 0xc);
    if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_208);
  }
  FUN_140e87930(&local_1f8,DAT_141a46588,0x80000000,&local_108);
  local_1d8 = 0x53;
  if (0 < param_4) {
    puVar10 = (undefined8 *)*param_5;
  }
  uStack_20c = 0;
  local_218 = 0x3ff0000000000000;
  iVar3 = FUN_140e851f0(puVar10,&local_218,DAT_141955260,1);
  if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  if ((iVar3 != -2 && iVar3 < 0) && (cVar2 = FUN_140e491e0(local_68), cVar2 == '\0')) {
    local_1d8 = 0x54;
    if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_228);
    }
    uVar4 = (undefined4)((ulonglong)pplVar12 >> 0x20);
    local_228 = 0;
    local_220 = 0;
    local_21c = 5;
    uStack_20c = 0xf;
    local_218 = 0x1000002000000a9;
    local_208 = 0xa9;
    uStack_204 = 0x1000002;
    uStack_200 = uStack_210;
    uStack_1fc = 0xf;
    if ((1 << (local_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    FUN_140041b80(&local_1b8,&local_208);
    local_b8 = &local_1b8;
    local_208 = _DAT_1419e83b0;
    uStack_204 = uRam00000001419e83b4;
    uStack_200 = uRam00000001419e83b8;
    uStack_1fc = uRam00000001419e83bc;
    if ((1 << (local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1a8);
    }
    FUN_140041b80(local_1a8,&local_208);
    local_b0 = local_1a8;
    local_208 = _DAT_1419df7a0;
    uStack_204 = uRam00000001419df7a4;
    uStack_200 = uRam00000001419df7a8;
    uStack_1fc = uRam00000001419df7ac;
    if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_198);
    }
    FUN_140041b80(local_198,&local_208);
    local_a8 = local_198;
    local_208 = (undefined4)DAT_1419df7b0;
    uStack_204 = DAT_1419df7b0._4_4_;
    uStack_200 = DAT_1419df7b8;
    uStack_1fc = DAT_1419df7bc;
    if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_188);
    }
    FUN_140041b80(local_188,&local_208);
    local_a0 = local_188;
    local_178 = FUN_140e794b0(0,0x4010000000000000);
    if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    local_16c = 0;
    local_98 = &local_178;
    pplVar14 = &local_b8;
    pplVar12 = (longlong **)CONCAT44(uVar4,DAT_141a0a2e8);
    FUN_140e634e0(param_1,param_2,&local_228,5,pplVar12,pplVar14);
  }
  local_1d8 = 0x56;
  if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  local_228 = 0;
  local_220 = 0;
  local_21c = 5;
  uVar15 = (ulonglong)pplVar14 & 0xffffffffffffff00;
  uVar13 = (ulonglong)pplVar12 & 0xffffffffffffff00;
  FUN_140e87440(&local_1f8,DAT_141a57930,0x80000000,&local_1d0,uVar13,uVar15);
  FUN_140e87440(&local_1d0,DAT_141a07778,0x80000000,&local_90,uVar13 & 0xffffffffffffff00,
                uVar15 & 0xffffffffffffff00);
  switch(local_1c4) {
  default:
switchD_1407a2f7e_caseD_1:
    uVar6 = 0;
    break;
  case 6:
    uVar6 = local_1d0;
    break;
  case 0xf:
    iVar3 = (int)((ulonglong)local_1d0 >> 0x20);
    if ((iVar3 != 0x1000000) && (iVar3 != 0x4000001)) goto switchD_1407a2f7e_caseD_1;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar4 = FUN_140e4a8b0(&local_1d0);
    uVar6 = FUN_140e87250(uVar4);
  }
  FUN_140e63610(uVar6,param_2,&local_228,0,&local_90,0);
  local_1d8 = 0x57;
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_10c = 0;
  local_118 = 0;
  FUN_140e87930(&local_1f8,DAT_141a57840,0x80000000,&local_118);
  local_1d8 = 0x58;
  uVar6 = FUN_140e794b0(0x9999999a,0x3ff4cccccccccccd);
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_11c = 0;
  local_128 = uVar6;
  FUN_140e87930(&local_1f8,DAT_141a05568,0x80000000,&local_128);
  local_1d8 = 0x59;
  uVar6 = FUN_140e794b0(0,0x4020000000000000);
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_12c = 0;
  local_138 = uVar6;
  FUN_140e87930(&local_1f8,DAT_141a0a7f8,0x80000000,&local_138);
  local_1d8 = 0x5a;
  uVar6 = FUN_140e78f40(0xffffffffffffffe2);
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_13c = 0;
  local_148 = uVar6;
  FUN_140e87930(&local_1f8,DAT_141a08b78,0x80000000,&local_148);
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_84 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_90);
  }
  if ((1 << ((byte)local_1c4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d0);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_res8 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  _eh_vector_destructor_iterator_(&local_1b8,0x10,5,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_1e8;
  return param_3;
}

