// gml_Script_anon_1526____struct___506_gml_Object_oEnemyRotFly_Create_0 @ 0x140a24620

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_1526____struct___506_gml_Object_oEnemyRotFly_Create_0
          (longlong *param_1,ulonglong param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong **pplVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  bool bVar14;
  code *pcVar15;
  ulonglong uVar16;
  undefined4 uVar19;
  longlong *plVar17;
  ulonglong uVar18;
  ulonglong in_stack_fffffffffffffdd0;
  undefined1 **ppuVar20;
  undefined8 local_228;
  undefined4 local_220;
  undefined4 local_21c;
  undefined4 local_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  longlong *local_208;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  longlong *local_1f8;
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined8 local_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined8 local_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  longlong *local_1b8;
  undefined4 local_1b0;
  undefined4 local_1ac;
  longlong *local_1a8;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined8 local_198;
  undefined4 local_18c;
  undefined8 local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  longlong *local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  char *local_150;
  undefined4 local_148;
  longlong *local_140;
  undefined4 local_134;
  undefined1 local_128 [12];
  byte local_11c;
  undefined1 local_118 [12];
  byte local_10c;
  undefined1 local_108 [12];
  byte local_fc;
  undefined1 local_f8 [12];
  byte local_ec;
  undefined4 local_e8 [3];
  byte local_dc;
  undefined4 local_d8 [3];
  byte local_cc;
  undefined1 local_c8 [12];
  byte local_bc;
  undefined1 local_b8 [12];
  byte local_ac;
  undefined1 local_a8 [12];
  byte local_9c;
  uint local_98 [2];
  undefined8 *local_90;
  undefined1 *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  undefined1 *local_70;
  undefined4 *local_68;
  undefined4 *local_60;
  undefined1 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  
  local_150 = "gml_Script_anon@1270@gml_Object_oEnemyRotFly_Create_0";
  local_158 = DAT_141dc7a50;
  local_148 = 0x47;
  DAT_141dc7a50 = &local_158;
  FUN_140041df0(local_98,param_4,1,param_5);
  pcVar15 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_128,0x10,9,FUN_1400424d0,FUN_140041b30);
  uStack_16c = 0xffffff;
  local_178 = (longlong *)0x0;
  local_19c = 0xffffff;
  local_1a8 = (longlong *)0x0;
  local_1ac = 0xffffff;
  local_1b8 = (longlong *)0x0;
  uStack_17c = 0xffffff;
  local_188 = 0;
  local_18c = 0xffffff;
  local_198 = 0;
  uStack_15c = 0xffffff;
  local_168 = 0;
  uStack_1bc = 0xffffff;
  local_1c8 = (longlong *)0x0;
  local_21c = 0;
  local_228 = 0;
  local_1cc = 0;
  local_1d8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_148 = 0x47;
  puVar13 = &DAT_1419df7b0;
  uVar12 = (ulonglong)local_98[0];
  if ((int)local_98[0] < 1) {
    puVar11 = &DAT_1419df7b0;
  }
  else {
    puVar11 = (undefined8 *)*local_90;
  }
  iVar5 = FUN_140e851f0(puVar11,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar5 == 0) {
    local_148 = 0x47;
    if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_228);
    }
    local_228 = 0;
    local_220 = 0;
    local_21c = 5;
    if ((int)local_98[0] < 1) {
      puVar11 = &DAT_1419df7b0;
    }
    else {
      puVar11 = (undefined8 *)*local_90;
    }
    in_stack_fffffffffffffdd0 = 0;
    pcVar15 = (code *)CONCAT44((int)((ulonglong)pcVar15 >> 0x20),DAT_1419fd6d8);
    puVar6 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_228,0,pcVar15,0);
    if (puVar6 != puVar11) {
      local_208 = (longlong *)*puVar6;
      uStack_200 = *(undefined4 *)(puVar6 + 1);
      uStack_1fc = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar11 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar11);
      }
      FUN_140041b80(puVar11,&local_208);
    }
  }
  local_148 = 0x49;
  if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  local_228 = 0;
  local_220 = 0;
  local_21c = 5;
  if ((int)local_98[0] < 1) {
    puVar11 = &DAT_1419df7b0;
  }
  else {
    puVar11 = (undefined8 *)*local_90;
  }
  in_stack_fffffffffffffdd0 = in_stack_fffffffffffffdd0 & 0xffffffffffffff00;
  uVar16 = (ulonglong)pcVar15 & 0xffffffffffffff00;
  FUN_140e87440(puVar11,DAT_141a1f4e0,0x80000000,&local_178,uVar16,in_stack_fffffffffffffdd0);
  local_208 = local_178;
  uStack_200 = uStack_170;
  uStack_1fc = uStack_16c;
  if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_128);
  }
  FUN_140041b80(local_128,&local_208);
  local_88 = local_128;
  local_1ec = 6;
  uVar16 = uVar16 & 0xffffffffffffff00;
  local_1f8 = param_1;
  FUN_140e87440(&local_1f8,DAT_1419fe0e8,0x80000000,&local_188,uVar16,
                in_stack_fffffffffffffdd0 & 0xffffffffffffff00);
  uVar19 = (undefined4)(uVar16 >> 0x20);
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  ppuVar20 = &local_88;
  uVar18 = CONCAT44(uVar19,DAT_141a02ef8);
  uVar7 = FUN_140e634e0(param_1,param_2,&local_228,1,uVar18,ppuVar20);
  cVar4 = FUN_140e491e0(uVar7);
  plVar17 = param_1;
  uVar16 = param_2;
  if (cVar4 == '\0') {
    if (0 < (int)local_98[0]) {
      puVar13 = (undefined8 *)*local_90;
    }
    FUN_140e87170(puVar13,DAT_1419fe0e8,0x80000000,&local_1b8,param_1,param_2);
    uStack_1dc = local_1ac;
    uStack_1e0 = local_1b0;
    if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) == 0) {
      local_1e8 = local_1b8;
    }
    else {
      FUN_1400419b0(&local_1e8,&local_1b8);
    }
    pplVar8 = (longlong **)&local_1e8;
    bVar2 = false;
    bVar1 = true;
  }
  else {
    if (0 < (int)local_98[0]) {
      puVar13 = (undefined8 *)*local_90;
    }
    FUN_140e87440(puVar13,DAT_141a1f4e0,0x80000000,&local_178,uVar18 & 0xffffffffffffff00,
                  (ulonglong)ppuVar20 & 0xffffffffffffff00);
    FUN_140e87170(&local_178,DAT_1419fe0e8,0x80000000,&local_1a8,param_1,param_2);
    local_1ec = local_19c;
    local_1f0 = local_1a0;
    if ((1 << ((byte)local_19c & 0x1f) & 0x46U) == 0) {
      local_1f8 = local_1a8;
    }
    else {
      FUN_1400419b0(&local_1f8,&local_1a8);
    }
    pplVar8 = &local_1f8;
    bVar2 = true;
    bVar1 = false;
  }
  iVar5 = FUN_140e851f0(pplVar8,&local_188,DAT_141955260,1);
  bVar14 = iVar5 == -2 || -1 < iVar5;
  if (bVar14) {
    local_134 = 0;
    local_140 = (longlong *)&DAT_bff0000000000000;
    pplVar8 = &local_140;
  }
  else {
    uStack_1fc = 0;
    local_208 = (longlong *)0x3ff0000000000000;
    pplVar8 = &local_208;
  }
  uVar3 = local_134;
  uVar19 = uStack_1fc;
  local_218 = *(undefined4 *)pplVar8;
  uStack_214 = *(undefined4 *)((longlong)pplVar8 + 4);
  uStack_210 = *(undefined4 *)(pplVar8 + 1);
  uStack_20c = *(undefined4 *)((longlong)pplVar8 + 0xc);
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  FUN_140041b80(&local_198,&local_218);
  if ((bVar14) && ((1 << ((byte)uVar3 & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_140);
  }
  if ((iVar5 != -2 && -1 >= iVar5) && ((1 << ((byte)uVar19 & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_208);
  }
  if ((bVar1) && ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_1e8);
  }
  if ((bVar2) && ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_1f8);
  }
  local_148 = 0x4a;
  if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  local_228 = 0;
  local_220 = 0;
  local_21c = 5;
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  local_1d8 = 0;
  local_1d0 = 0;
  local_1cc = 5;
  uVar7 = (**(code **)(*param_1 + 8))(param_1,DAT_1419ff338);
  puVar9 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a11b48);
  uStack_1fc = 6;
  uVar16 = uVar16 & 0xffffffffffffff00;
  uVar18 = (ulonglong)plVar17 & 0xffffffffffffff00;
  local_208 = param_1;
  FUN_140e87440(&local_208,DAT_1419fe0e8,0x80000000,&local_188,uVar18,uVar16);
  if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  uStack_1fc = 6;
  uVar16 = uVar16 & 0xffffffffffffff00;
  uVar18 = uVar18 & 0xffffffffffffff00;
  local_208 = param_1;
  FUN_140e87440(&local_208,DAT_1419fe158,0x80000000,&local_168,uVar18,uVar16);
  if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  uVar18 = uVar18 & 0xffffffffffffff00;
  FUN_140e87440(uVar7,DAT_141a572c0,0x80000000,&local_1c8,uVar18,uVar16 & 0xffffffffffffff00);
  uVar19 = (undefined4)(uVar18 >> 0x20);
  local_218 = (undefined4)local_1c8;
  uStack_214 = local_1c8._4_4_;
  uStack_210 = uStack_1c0;
  uStack_20c = uStack_1bc;
  if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_128);
  }
  FUN_140041b80(local_128,&local_218);
  local_88 = local_128;
  local_1ec = 0;
  local_1f8 = (longlong *)0x4050400000000000;
  FUN_140042560(&local_1f8,&local_198);
  uStack_1dc = uStack_1bc;
  uStack_1e0 = uStack_1c0;
  if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) == 0) {
    local_1e8 = local_1c8;
  }
  else {
    FUN_1400419b0(&local_1e8,&local_1c8);
  }
  FUN_1400460e0(&local_1e8,&local_1f8);
  local_218 = (undefined4)local_1e8;
  uStack_214 = local_1e8._4_4_;
  uStack_210 = uStack_1e0;
  uStack_20c = uStack_1dc;
  if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_118);
  }
  FUN_140041b80(local_118,&local_218);
  if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  local_80 = local_118;
  local_218 = (undefined4)local_188;
  uStack_214 = local_188._4_4_;
  uStack_210 = uStack_180;
  uStack_20c = uStack_17c;
  if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_108);
  }
  FUN_140041b80(local_108,&local_218);
  local_78 = local_108;
  local_218 = (undefined4)local_168;
  uStack_214 = local_168._4_4_;
  uStack_210 = uStack_160;
  uStack_20c = uStack_15c;
  if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_f8);
  }
  FUN_140041b80(local_f8,&local_218);
  local_70 = local_f8;
  puVar10 = (undefined4 *)
            FUN_140e634e0(param_1,param_2,&local_1d8,2,CONCAT44(uVar19,DAT_1419fdca8),&local_88);
  if (puVar10 != local_e8) {
    local_218 = *puVar10;
    uStack_214 = puVar10[1];
    uStack_210 = puVar10[2];
    uStack_20c = puVar10[3];
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_e8);
    }
    FUN_140041b80(local_e8,&local_218);
  }
  local_68 = local_e8;
  if (puVar9 != local_d8) {
    local_218 = *puVar9;
    uStack_214 = puVar9[1];
    uStack_210 = puVar9[2];
    uStack_20c = puVar9[3];
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_d8);
    }
    FUN_140041b80(local_d8,&local_218);
  }
  local_60 = local_d8;
  local_218 = _DAT_1419ead60;
  uStack_214 = uRam00000001419ead64;
  uStack_210 = uRam00000001419ead68;
  uStack_20c = uRam00000001419ead6c;
  if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_c8);
  }
  FUN_140041b80(local_c8,&local_218);
  local_58 = local_c8;
  local_218 = (undefined4)DAT_1419df7b0;
  uStack_214 = DAT_1419df7b0._4_4_;
  uStack_210 = DAT_1419df7b8;
  uStack_20c = DAT_1419df7bc;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_218);
  local_50 = local_b8;
  local_218 = (undefined4)DAT_1419df7b0;
  uStack_214 = DAT_1419df7b0._4_4_;
  uStack_210 = DAT_1419df7b8;
  uStack_20c = DAT_1419df7bc;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_218);
  local_48 = local_a8;
  gml_Script_get_blood_col(param_1,param_2,&local_228,7,&local_78);
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  _eh_vector_destructor_iterator_(local_128,0x10,9,FUN_140041b30);
  if (0 < (int)local_98[0]) {
    puVar13 = local_90;
    do {
      puVar11 = (undefined8 *)*puVar13;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar11 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar11);
      }
      *puVar11 = 0;
      *(undefined4 *)(puVar11 + 1) = 0;
      *(undefined4 *)((longlong)puVar11 + 0xc) = 5;
      puVar13 = puVar13 + 1;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  FUN_140e4cd60(local_90);
  DAT_141dc7a50 = (undefined8 *)local_158;
  return param_3;
}

