// gml_Script_anon_2512_gml_Object_oParInteractable_Create_0 @ 0x140ba9ff0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_2512_gml_Object_oParInteractable_Create_0
          (longlong *param_1,ulonglong param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong **pplVar7;
  undefined8 *puVar8;
  undefined4 uVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  double dVar13;
  code *pcVar14;
  ulonglong uVar15;
  undefined1 **ppuVar16;
  ulonglong uVar17;
  ulonglong in_stack_fffffffffffffcd0;
  undefined8 local_328;
  undefined4 uStack_320;
  uint uStack_31c;
  uint local_318;
  longlong *local_308;
  undefined4 uStack_300;
  uint uStack_2fc;
  undefined8 local_2f8;
  undefined4 local_2f0;
  undefined4 local_2ec;
  longlong *local_2e8;
  undefined4 uStack_2e0;
  uint uStack_2dc;
  undefined1 *local_2d8;
  undefined4 local_2cc;
  undefined1 local_2c8 [12];
  byte local_2bc;
  undefined1 local_2b8 [12];
  byte local_2ac;
  undefined8 local_2a8;
  byte local_29c;
  undefined1 local_298 [12];
  byte local_28c;
  undefined1 local_288 [12];
  byte local_27c;
  undefined1 local_278 [12];
  byte local_26c;
  undefined1 local_268 [12];
  byte local_25c;
  undefined1 local_258 [12];
  byte local_24c;
  undefined1 local_248 [12];
  byte local_23c;
  undefined1 local_238 [12];
  byte local_22c;
  undefined1 local_228 [12];
  byte local_21c;
  undefined1 local_218 [12];
  byte local_20c;
  undefined1 local_208 [12];
  byte local_1fc;
  undefined1 local_1f8 [12];
  byte local_1ec;
  undefined8 local_1e8;
  char *local_1e0;
  undefined4 local_1d8;
  undefined8 local_1d0;
  undefined4 local_1c4;
  longlong *local_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  longlong *local_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  undefined4 local_18c;
  undefined4 local_188;
  longlong *local_180;
  undefined4 local_178;
  uint local_174;
  longlong *local_170;
  undefined4 local_168;
  uint local_164;
  undefined1 *local_158;
  undefined1 *local_150;
  undefined8 *local_148;
  undefined1 *local_140;
  undefined1 *local_138;
  undefined1 *local_130;
  undefined1 *local_128;
  undefined8 *local_120;
  undefined1 *local_118;
  undefined1 *local_110;
  undefined1 *local_108;
  undefined1 *local_100;
  undefined1 *local_f8;
  undefined1 *local_f0;
  undefined8 local_e8;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  longlong *local_b8;
  undefined4 uStack_b0;
  uint uStack_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  longlong *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  double local_88;
  uint local_7c;
  
  local_318 = 0;
  local_1e0 = "gml_Script_anon@892@gml_Object_oParInteractable_Create_0";
  local_1e8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_1e8;
  local_1d8 = 0x32;
  pcVar14 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_2c8,0x10,0xe,FUN_1400424d0,FUN_140041b30);
  uVar6 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419ef678);
  local_174 = 0xffffff;
  local_180 = (longlong *)0x0;
  local_188 = 0xffffff;
  local_8c = 0xffffff;
  local_98 = (longlong *)0x0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_1c4 = 0xffffff;
  local_1d0 = 0;
  local_2cc = 0xffffff;
  local_2d8 = (undefined1 *)0x0;
  uStack_ac = 0xffffff;
  local_b8 = (longlong *)0x0;
  local_164 = 0xffffff;
  local_170 = (longlong *)0x0;
  local_18c = 0xffffff;
  local_198 = 0;
  local_dc = 0xffffff;
  local_e8 = 0;
  uStack_19c = 0xffffff;
  local_1a8 = (longlong *)0x0;
  uStack_1ac = 0xffffff;
  local_1b8 = (longlong *)0x0;
  local_7c = 0xffffff;
  local_88 = 0.0;
  local_2ec = 0;
  local_2f8 = 0;
  local_bc = 0;
  local_c8 = 0;
  local_cc = 0;
  local_d8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_1d8 = 0x33;
  cVar3 = FUN_140e491e0(uVar6);
  if (cVar3 != '\0') {
    local_1d8 = 0x34;
    uVar9 = 0xffffff;
    goto LAB_140bac8be;
  }
  local_1d8 = 0x36;
  uStack_2fc = 6;
  uVar15 = (ulonglong)pcVar14 & 0xffffffffffffff00;
  local_308 = param_1;
  FUN_140e87440(&local_308,DAT_141a0cfc8,0x80000000,&local_180,uVar15,
                in_stack_fffffffffffffcd0 & 0xffffffffffffff00);
  uVar9 = (undefined4)(uVar15 >> 0x20);
  if ((1 << ((byte)uStack_2fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_308);
  }
  uStack_2fc = 0;
  local_308 = (longlong *)0x0;
  iVar4 = FUN_140e851f0(&local_180,&local_308,DAT_141955260,1);
  if ((1 << ((byte)uStack_2fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_308);
  }
  uVar5 = 1 << ((byte)local_2ec & 0x1f);
  if (iVar4 == -2 || 0 < iVar4) {
    local_1d8 = 0x3c;
    if ((uVar5 & 0x46) != 0) {
      FUN_140041a50(&local_2f8);
    }
    local_2f8 = 0;
    local_2f0 = 0;
    local_2ec = 5;
    uStack_31c = 0xf;
    local_328 = (longlong *)0x10000010000018d;
    local_308 = (longlong *)0x10000010000018d;
    uStack_300 = uStack_320;
    uStack_2fc = 0xf;
    if ((1 << (local_2bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_2c8);
    }
    FUN_140041b80(local_2c8,&local_308);
    local_158 = local_2c8;
    ppuVar16 = &local_158;
    uVar15 = CONCAT44(uVar9,DAT_141a049b8);
    pplVar7 = (longlong **)FUN_140e634e0(param_1,param_2,&local_2f8,1,uVar15,ppuVar16);
    plVar10 = (longlong *)0x0;
    uVar9 = 0xffffff;
    if (pplVar7 != &local_98) {
      local_328 = *pplVar7;
      uStack_320 = *(undefined4 *)(pplVar7 + 1);
      uStack_31c = *(undefined4 *)((longlong)pplVar7 + 0xc);
      FUN_140041b80(&local_98,&local_328);
      local_188 = local_8c;
      plVar10 = local_98;
      uVar9 = local_8c;
    }
    local_1d8 = 0x3d;
    uStack_2fc = 6;
    uVar17 = (ulonglong)ppuVar16 & 0xffffffffffffff00;
    uVar15 = uVar15 & 0xffffffffffffff00;
    local_308 = param_1;
    FUN_140e87440(&local_308,DAT_141a0cfc8,0x80000000,&local_180,uVar15,uVar17);
    if ((1 << ((byte)uStack_2fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_308);
    }
    uStack_300 = local_90;
    uStack_2fc = uVar9;
    if ((1 << ((byte)uVar9 & 0x1f) & 0x46U) == 0) {
      local_308 = plVar10;
    }
    else {
      FUN_1400419b0(&local_308,&local_98);
    }
    local_318 = 0x10;
    uStack_31c = 7;
    local_328 = (longlong *)CONCAT44(local_328._4_4_,1);
    FUN_1400462a0(&local_308,&local_328);
    if ((1 << ((byte)uStack_31c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_328);
    }
    uStack_2dc = local_174;
    uStack_2e0 = local_178;
    if ((1 << ((byte)local_174 & 0x1f) & 0x46U) == 0) {
      local_2e8 = local_180;
    }
    else {
      FUN_1400419b0(&local_2e8,&local_180);
    }
    local_318 = 0x30;
    FUN_140046500(&local_2e8,&local_308);
    local_328 = local_2e8;
    uStack_320 = uStack_2e0;
    uStack_31c = uStack_2dc;
    if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    FUN_140041b80(&local_a8,&local_328);
    local_318 = 0x10;
    if ((1 << ((byte)uStack_2dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2e8);
    }
    local_318 = 0;
    if ((1 << ((byte)uStack_2fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_308);
    }
    local_1d8 = 0x3f;
    if ((1 << ((byte)local_1c4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d0);
    }
    local_1c4 = 0;
    local_1d0 = 0x416fffffe0000000;
    local_1d8 = 0x40;
    if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2d8);
    }
    local_2cc = 0;
    local_2d8 = (undefined1 *)0x0;
    local_1d8 = 0x42;
    uStack_31c = 0;
    local_328 = (longlong *)0x3fd0000000000000;
    iVar4 = FUN_140e851f0(&local_a8,&local_328,DAT_141955260,1);
    if ((1 << ((byte)uStack_31c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_328);
    }
    if (iVar4 == -2 || -1 < iVar4) {
      local_1d8 = 0x47;
      uStack_31c = 0;
      local_328 = (longlong *)0x3fe0000000000000;
      iVar4 = FUN_140e851f0(&local_a8,&local_328,DAT_141955260,1);
      if ((1 << ((byte)uStack_31c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_328);
      }
      if (iVar4 != -2 && iVar4 < 0) {
        local_1d8 = 0x49;
        if ((1 << ((byte)local_1c4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1d0);
        }
        local_1c4 = 0;
        local_1d0 = 0x41559adf80000000;
        local_1d8 = 0x4a;
        if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2d8);
        }
        local_2d8 = (undefined1 *)0xc000000000000000;
        goto LAB_140baa926;
      }
      local_1d8 = 0x4c;
      uStack_31c = 0;
      local_328 = (longlong *)0x3fe8000000000000;
      iVar4 = FUN_140e851f0(&local_a8,&local_328,DAT_141955260,1);
      if ((1 << ((byte)uStack_31c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_328);
      }
      if (iVar4 != -2 && iVar4 < 0) {
        local_1d8 = 0x4e;
        if ((1 << ((byte)local_1c4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1d0);
        }
        local_1c4 = 0;
        local_1d0 = 0x41643616e0000000;
        local_1d8 = 0x4f;
        if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2d8);
        }
        local_2d8 = &DAT_bff0000000000000;
        goto LAB_140baa926;
      }
    }
    else {
      local_1d8 = 0x44;
      if ((1 << ((byte)local_1c4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1d0);
      }
      local_1c4 = 0;
      local_1d0 = 0x413d294400000000;
      local_1d8 = 0x45;
      if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2d8);
      }
      local_2d8 = (undefined1 *)0xc010000000000000;
LAB_140baa926:
      local_2cc = 0;
    }
    local_1d8 = 0x52;
    if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2f8);
    }
    local_2f8 = 0;
    local_2f0 = 0;
    local_2ec = 5;
    uStack_31c = 6;
    uVar17 = uVar17 & 0xffffffffffffff00;
    uVar15 = uVar15 & 0xffffffffffffff00;
    local_328 = param_1;
    FUN_140e87440(&local_328,DAT_1419fe0e8,0x80000000,&local_b8,uVar15,uVar17);
    if ((1 << ((byte)uStack_31c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_328);
    }
    uStack_31c = 6;
    local_328 = param_1;
    FUN_140e87440(&local_328,DAT_1419fe158,0x80000000,&local_170,uVar15 & 0xffffffffffffff00,
                  uVar17 & 0xffffffffffffff00);
    if ((1 << ((byte)uStack_31c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_328);
    }
    local_328 = local_b8;
    uStack_320 = uStack_b0;
    uStack_31c = uStack_ac;
    if ((1 << (local_2bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_2c8);
    }
    FUN_140041b80(local_2c8,&local_328);
    local_158 = local_2c8;
    uStack_2dc = local_164;
    uStack_2e0 = local_168;
    if ((1 << ((byte)local_164 & 0x1f) & 0x46U) == 0) {
      local_2e8 = local_170;
    }
    else {
      FUN_1400419b0(&local_2e8,&local_170);
    }
    local_318 = 0x40;
    uStack_31c = 7;
    local_328 = (longlong *)CONCAT44(local_328._4_4_,0xd);
    FUN_1400462a0(&local_2e8,&local_328);
    if ((1 << ((byte)uStack_31c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_328);
    }
    uStack_2fc = uStack_2dc;
    uStack_300 = uStack_2e0;
    if ((1 << ((byte)uStack_2dc & 0x1f) & 0x46U) == 0) {
      local_308 = local_2e8;
    }
    else {
      FUN_1400419b0(&local_308,&local_2e8);
    }
    local_318 = 0xc0;
    FUN_1400460e0(&local_308,&local_2d8);
    local_328 = local_308;
    uStack_320 = uStack_300;
    uStack_31c = uStack_2fc;
    if ((1 << (local_2ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_2b8);
    }
    FUN_140041b80(local_2b8,&local_328);
    local_318 = 0x40;
    if ((1 << ((byte)uStack_2fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_308);
    }
    local_318 = 0;
    if ((1 << ((byte)uStack_2dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2e8);
    }
    local_150 = local_2b8;
    puVar8 = (undefined8 *)gml_Script_worldwide_load(param_1,param_2,&local_2f8,2,&local_158);
    if (puVar8 != &local_198) {
      local_328 = (longlong *)*puVar8;
      uStack_320 = *(undefined4 *)(puVar8 + 1);
      uStack_31c = *(uint *)((longlong)puVar8 + 0xc);
      if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_198);
      }
      FUN_140041b80(&local_198,&local_328);
    }
    local_1d8 = 0x53;
    if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2f8);
    }
    local_2f8 = 0;
    local_2f0 = 0;
    local_2ec = 5;
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    local_c8 = 0;
    local_c0 = 0;
    local_bc = 5;
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    local_d8 = 0;
    local_d0 = 0;
    local_cc = 5;
    uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a0a8a8);
    local_328 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_320 = DAT_1419df7b8;
    uStack_31c = DAT_1419df7bc;
    if ((1 << (local_2bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_2c8);
    }
    FUN_140041b80(local_2c8,&local_328);
    local_158 = local_2c8;
    uStack_2fc = DAT_141dda1a4;
    uStack_300 = DAT_141dda1a0;
    if ((1 << ((byte)DAT_141dda1a4 & 0x1f) & 0x46U) == 0) {
      local_308 = DAT_141dda198;
    }
    else {
      FUN_1400419b0(&local_308,&DAT_141dda198);
    }
    uVar5 = uStack_2fc;
    local_328 = local_308;
    uStack_320 = uStack_300;
    uStack_31c = uStack_2fc;
    if ((1 << (local_2ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_2b8);
    }
    FUN_140041b80(local_2b8,&local_328);
    if ((1 << ((byte)uVar5 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_308);
    }
    local_150 = local_2b8;
    puVar8 = (undefined8 *)gml_Script____struct___117(param_1,param_2,&local_c8,1,&local_158);
    if (puVar8 != &local_2a8) {
      local_328 = (longlong *)*puVar8;
      uStack_320 = *(undefined4 *)(puVar8 + 1);
      uStack_31c = *(undefined4 *)((longlong)puVar8 + 0xc);
      if ((1 << (local_29c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2a8);
      }
      FUN_140041b80(&local_2a8,&local_328);
    }
    local_148 = &local_2a8;
    uStack_2dc = DAT_141dda194;
    uStack_2e0 = DAT_141dda190;
    if ((1 << ((byte)DAT_141dda194 & 0x1f) & 0x46U) == 0) {
      local_2e8 = DAT_141dda188;
    }
    else {
      FUN_1400419b0(&local_2e8,&DAT_141dda188);
    }
    uVar5 = 1 << ((byte)uStack_2dc & 0x1f) & 0x46;
    uStack_300 = uStack_2e0;
    uStack_2fc = uStack_2dc;
    if (uVar5 == 0) {
      local_308 = local_2e8;
    }
    else {
      FUN_1400419b0(&local_308,&local_2e8);
    }
    local_318 = 0x400;
    FUN_1400460e0(&local_308,uVar6);
    local_328 = local_308;
    uStack_320 = uStack_300;
    uStack_31c = uStack_2fc;
    if ((1 << (local_28c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_298);
    }
    FUN_140041b80(local_298,&local_328);
    local_318 = 0;
    if ((1 << ((byte)uStack_2fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_308);
    }
    if (uVar5 != 0) {
      FUN_140041a50(&local_2e8);
    }
    local_140 = local_298;
    local_328 = (longlong *)CONCAT44(uRam0000000141dda1ac,_DAT_141dda1a8);
    uStack_320 = uRam0000000141dda1b0;
    uStack_31c = DAT_141dda1b4;
    if ((1 << (local_27c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_288);
    }
    FUN_140041b80(local_288,&local_328);
    local_138 = local_288;
    uVar6 = gml_Script_worldwide_get_dialogue(param_1,param_2,&local_d8,2,&local_140);
    puVar8 = (undefined8 *)FUN_140e64420(param_1,param_2,&local_2f8,2,&local_150);
    uStack_2fc = *(undefined4 *)((longlong)puVar8 + 0xc);
    uStack_300 = *(undefined4 *)(puVar8 + 1);
    if ((1 << ((byte)uStack_2fc & 0x1f) & 0x46U) == 0) {
      local_308 = (longlong *)*puVar8;
    }
    else {
      FUN_1400419b0(&local_308,puVar8);
    }
    local_318 = 0x800;
    FUN_1400460e0(&local_308,uVar6);
    local_328 = local_308;
    uStack_320 = uStack_300;
    uStack_31c = uStack_2fc;
    if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_328);
    local_318 = 0;
    if ((1 << ((byte)uStack_2fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_308);
    }
    local_1d8 = 0x55;
    if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2f8);
    }
    local_2f8 = 0;
    local_2f0 = 0;
    local_2ec = 5;
    FUN_140e87170(&local_198,DAT_1419fe0e8,0x80000000,&local_1a8,param_1,param_2);
    FUN_140e87170(&local_198,DAT_1419fe158,0x80000000,&local_1b8,param_1,param_2);
    uStack_2fc = uStack_19c;
    uStack_300 = uStack_1a0;
    if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) == 0) {
      local_308 = local_1a8;
    }
    else {
      FUN_1400419b0(&local_308,&local_1a8);
    }
    local_318 = 0x1000;
    uStack_31c = 7;
    local_328 = (longlong *)CONCAT44(local_328._4_4_,1);
    FUN_1400462a0(&local_308,&local_328);
    if ((1 << ((byte)uStack_31c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_328);
    }
    local_328 = local_308;
    uStack_320 = uStack_300;
    uStack_31c = uStack_2fc;
    if ((1 << (local_2bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_2c8);
    }
    FUN_140041b80(local_2c8,&local_328);
    local_318 = 0;
    if ((1 << ((byte)uStack_2fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_308);
    }
    local_158 = local_2c8;
    local_328 = local_1b8;
    uStack_320 = uStack_1b0;
    uStack_31c = uStack_1ac;
    if ((1 << (local_2ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_2b8);
    }
    FUN_140041b80(local_2b8,&local_328);
    local_150 = local_2b8;
    local_148 = &local_e8;
    local_328 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_320 = DAT_1419df7b8;
    uStack_31c = DAT_1419df7bc;
    if ((1 << (local_28c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_298);
    }
    FUN_140041b80(local_298,&local_328);
    local_140 = local_298;
    local_328 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_320 = DAT_1419df7b8;
    uStack_31c = DAT_1419df7bc;
    if ((1 << (local_27c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_288);
    }
    FUN_140041b80(local_288,&local_328);
    local_138 = local_288;
    local_328 = (longlong *)CONCAT44(uRam00000001419ec804,_DAT_1419ec800);
    uStack_320 = uRam00000001419ec808;
    uStack_31c = uRam00000001419ec80c;
    if ((1 << (local_26c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_278);
    }
    FUN_140041b80(local_278,&local_328);
    local_130 = local_278;
    local_328 = (longlong *)CONCAT44(uRam00000001419ec804,_DAT_1419ec800);
    uStack_320 = uRam00000001419ec808;
    uStack_31c = uRam00000001419ec80c;
    if ((1 << (local_25c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_268);
    }
    FUN_140041b80(local_268,&local_328);
    local_128 = local_268;
    local_328 = (longlong *)CONCAT44(uRam0000000141dc7364,_DAT_141dc7360);
    uStack_320 = uRam0000000141dc7368;
    uStack_31c = uRam0000000141dc736c;
    if ((1 << (local_24c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_258);
    }
    FUN_140041b80(local_258,&local_328);
    local_328 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_320 = DAT_1419df7b8;
    uStack_31c = DAT_1419df7bc;
    local_120 = (undefined8 *)local_258;
    if ((1 << (local_23c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_248);
    }
    FUN_140041b80(local_248,&local_328);
    local_118 = local_248;
    local_328 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_320 = DAT_1419df7b8;
    uStack_31c = DAT_1419df7bc;
    if ((1 << (local_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_238);
    }
    FUN_140041b80(local_238,&local_328);
    local_110 = local_238;
    local_328 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_320 = DAT_1419df7b8;
    uStack_31c = DAT_1419df7bc;
    if ((1 << (local_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_228);
    }
    FUN_140041b80(local_228,&local_328);
    local_108 = local_228;
    local_328 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_320 = DAT_1419df7b8;
    uStack_31c = DAT_1419df7bc;
    if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_218);
    }
    FUN_140041b80(local_218,&local_328);
    local_100 = local_218;
    local_328 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_320 = DAT_1419df7b8;
    uStack_31c = DAT_1419df7bc;
    if ((1 << (local_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_208);
    }
    FUN_140041b80(local_208,&local_328);
    local_f8 = local_208;
    local_328 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_320 = DAT_1419df7b8;
    uStack_31c = DAT_1419df7bc;
    if ((1 << (local_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1f8);
    }
    FUN_140041b80(local_1f8,&local_328);
    local_f0 = local_1f8;
    gml_Script_draw_sprite_hires(param_1,param_2,&local_2f8,0xe,&local_158);
    local_1d8 = 0x56;
    if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2f8);
    }
    local_2f8 = 0;
    local_2f0 = 0;
    local_2ec = 5;
    FUN_140e87170(&local_198,DAT_1419fe0e8,0x80000000,&local_1a8,param_1,param_2);
    FUN_140e87170(&local_198,DAT_1419fe158,0x80000000,&local_1b8,param_1,param_2);
    uStack_2fc = uStack_19c;
    uStack_300 = uStack_1a0;
    if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) == 0) {
      local_308 = local_1a8;
    }
    else {
      FUN_1400419b0(&local_308,&local_1a8);
    }
    local_318 = 0x8000;
    uStack_31c = 7;
    local_328 = (longlong *)CONCAT44(local_328._4_4_,1);
    FUN_1400460e0(&local_308,&local_328);
    if ((1 << ((byte)uStack_31c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_328);
    }
    local_328 = local_308;
    uStack_320 = uStack_300;
    uStack_31c = uStack_2fc;
    if ((1 << (local_2bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_2c8);
    }
    FUN_140041b80(local_2c8,&local_328);
    local_318 = 0;
    if ((1 << ((byte)uStack_2fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_308);
    }
    local_158 = local_2c8;
    local_328 = local_1b8;
    uStack_320 = uStack_1b0;
    uStack_31c = uStack_1ac;
    if ((1 << (local_2ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_2b8);
    }
    FUN_140041b80(local_2b8,&local_328);
    local_150 = local_2b8;
    local_148 = &local_e8;
    local_328 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_320 = DAT_1419df7b8;
    uStack_31c = DAT_1419df7bc;
    if ((1 << (local_28c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_298);
    }
    FUN_140041b80(local_298,&local_328);
    local_140 = local_298;
    local_328 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_320 = DAT_1419df7b8;
    uStack_31c = DAT_1419df7bc;
    if ((1 << (local_27c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_288);
    }
    FUN_140041b80(local_288,&local_328);
    local_138 = local_288;
    local_328 = (longlong *)CONCAT44(uRam00000001419ec804,_DAT_1419ec800);
    uStack_320 = uRam00000001419ec808;
    uStack_31c = uRam00000001419ec80c;
    if ((1 << (local_26c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_278);
    }
    FUN_140041b80(local_278,&local_328);
    local_130 = local_278;
    local_328 = (longlong *)CONCAT44(uRam00000001419ec804,_DAT_1419ec800);
    uStack_320 = uRam00000001419ec808;
    uStack_31c = uRam00000001419ec80c;
    if ((1 << (local_25c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_268);
    }
    FUN_140041b80(local_268,&local_328);
    local_128 = local_268;
    local_328 = (longlong *)CONCAT44(uRam0000000141dc7364,_DAT_141dc7360);
    uStack_320 = uRam0000000141dc7368;
    uStack_31c = uRam0000000141dc736c;
    if ((1 << (local_24c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_258);
    }
    FUN_140041b80(local_258,&local_328);
    local_328 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_320 = DAT_1419df7b8;
    uStack_31c = DAT_1419df7bc;
    local_120 = (undefined8 *)local_258;
    if ((1 << (local_23c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_248);
    }
    FUN_140041b80(local_248,&local_328);
    local_118 = local_248;
    local_328 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_320 = DAT_1419df7b8;
    uStack_31c = DAT_1419df7bc;
    if ((1 << (local_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_238);
    }
    FUN_140041b80(local_238,&local_328);
    local_110 = local_238;
    local_328 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_320 = DAT_1419df7b8;
    uStack_31c = DAT_1419df7bc;
    if ((1 << (local_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_228);
    }
    FUN_140041b80(local_228,&local_328);
    local_108 = local_228;
    local_328 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_320 = DAT_1419df7b8;
    uStack_31c = DAT_1419df7bc;
    if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_218);
    }
    FUN_140041b80(local_218,&local_328);
    local_100 = local_218;
    local_328 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_320 = DAT_1419df7b8;
    uStack_31c = DAT_1419df7bc;
    if ((1 << (local_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_208);
    }
    FUN_140041b80(local_208,&local_328);
    local_f8 = local_208;
    local_328 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_320 = DAT_1419df7b8;
    uStack_31c = DAT_1419df7bc;
    if ((1 << (local_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1f8);
    }
    FUN_140041b80(local_1f8,&local_328);
    local_f0 = local_1f8;
    gml_Script_draw_sprite_hires(param_1,param_2,&local_2f8,0xe,&local_158);
    local_1d8 = 0x57;
    if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2f8);
    }
    local_2f8 = 0;
    local_2f0 = 0;
    local_2ec = 5;
    FUN_140e87170(&local_198,DAT_1419fe0e8,0x80000000,&local_1a8,param_1,param_2);
    FUN_140e87170(&local_198,DAT_1419fe158,0x80000000,&local_1b8,param_1,param_2);
    local_328 = local_1a8;
    uStack_320 = uStack_1a0;
    uStack_31c = uStack_19c;
    if ((1 << (local_2bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_2c8);
    }
    FUN_140041b80(local_2c8,&local_328);
    local_158 = local_2c8;
    uStack_2fc = uStack_1ac;
    uStack_300 = uStack_1b0;
    if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) == 0) {
      local_308 = local_1b8;
    }
    else {
      FUN_1400419b0(&local_308,&local_1b8);
    }
    local_318 = 0x40000;
    uStack_31c = 7;
    local_328 = (longlong *)CONCAT44(local_328._4_4_,1);
    FUN_1400462a0(&local_308,&local_328);
    if ((1 << ((byte)uStack_31c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_328);
    }
    local_328 = local_308;
    uStack_320 = uStack_300;
    uStack_31c = uStack_2fc;
    if ((1 << (local_2ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_2b8);
    }
    FUN_140041b80(local_2b8,&local_328);
    local_318 = 0;
    if ((1 << ((byte)uStack_2fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_308);
    }
    local_150 = local_2b8;
    local_148 = &local_e8;
    local_328 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_320 = DAT_1419df7b8;
    uStack_31c = DAT_1419df7bc;
    if ((1 << (local_28c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_298);
    }
    FUN_140041b80(local_298,&local_328);
    local_140 = local_298;
    local_328 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_320 = DAT_1419df7b8;
    uStack_31c = DAT_1419df7bc;
    if ((1 << (local_27c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_288);
    }
    FUN_140041b80(local_288,&local_328);
    local_138 = local_288;
    local_328 = (longlong *)CONCAT44(uRam00000001419ec804,_DAT_1419ec800);
    uStack_320 = uRam00000001419ec808;
    uStack_31c = uRam00000001419ec80c;
    if ((1 << (local_26c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_278);
    }
    FUN_140041b80(local_278,&local_328);
    local_130 = local_278;
    local_328 = (longlong *)CONCAT44(uRam00000001419ec804,_DAT_1419ec800);
    uStack_320 = uRam00000001419ec808;
    uStack_31c = uRam00000001419ec80c;
    if ((1 << (local_25c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_268);
    }
    FUN_140041b80(local_268,&local_328);
    local_128 = local_268;
    local_328 = (longlong *)CONCAT44(uRam0000000141dc7364,_DAT_141dc7360);
    uStack_320 = uRam0000000141dc7368;
    uStack_31c = uRam0000000141dc736c;
    if ((1 << (local_24c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_258);
    }
    FUN_140041b80(local_258,&local_328);
    local_328 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_320 = DAT_1419df7b8;
    uStack_31c = DAT_1419df7bc;
    local_120 = (undefined8 *)local_258;
    if ((1 << (local_23c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_248);
    }
    FUN_140041b80(local_248,&local_328);
    local_118 = local_248;
    local_328 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_320 = DAT_1419df7b8;
    uStack_31c = DAT_1419df7bc;
    if ((1 << (local_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_238);
    }
    FUN_140041b80(local_238,&local_328);
    local_110 = local_238;
    local_328 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_320 = DAT_1419df7b8;
    uStack_31c = DAT_1419df7bc;
    if ((1 << (local_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_228);
    }
    FUN_140041b80(local_228,&local_328);
    local_108 = local_228;
    local_328 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_320 = DAT_1419df7b8;
    uStack_31c = DAT_1419df7bc;
    if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_218);
    }
    FUN_140041b80(local_218,&local_328);
    local_100 = local_218;
    local_328 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_320 = DAT_1419df7b8;
    uStack_31c = DAT_1419df7bc;
    if ((1 << (local_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_208);
    }
    FUN_140041b80(local_208,&local_328);
    local_f8 = local_208;
    local_328 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_320 = DAT_1419df7b8;
    uStack_31c = DAT_1419df7bc;
    if ((1 << (local_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1f8);
    }
    FUN_140041b80(local_1f8,&local_328);
    local_f0 = local_1f8;
    gml_Script_draw_sprite_hires(param_1,param_2,&local_2f8,0xe,&local_158);
    local_1d8 = 0x58;
    if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2f8);
    }
    local_2f8 = 0;
    local_2f0 = 0;
    local_2ec = 5;
    FUN_140e87170(&local_198,DAT_1419fe0e8,0x80000000,&local_1a8,param_1,param_2);
    FUN_140e87170(&local_198,DAT_1419fe158,0x80000000,&local_1b8,param_1,param_2);
    local_328 = local_1a8;
    uStack_320 = uStack_1a0;
    uStack_31c = uStack_19c;
    if ((1 << (local_2bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_2c8);
    }
    FUN_140041b80(local_2c8,&local_328);
    local_158 = local_2c8;
    uStack_2fc = uStack_1ac;
    uStack_300 = uStack_1b0;
    if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) == 0) {
      local_308 = local_1b8;
    }
    else {
      FUN_1400419b0(&local_308,&local_1b8);
    }
    local_318 = 0x80000;
    uStack_31c = 7;
    local_328 = (longlong *)CONCAT44(local_328._4_4_,1);
    FUN_1400460e0(&local_308,&local_328);
    if ((1 << ((byte)uStack_31c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_328);
    }
    local_328 = local_308;
    uStack_320 = uStack_300;
    uStack_31c = uStack_2fc;
    if ((1 << (local_2ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_2b8);
    }
    FUN_140041b80(local_2b8,&local_328);
    local_318 = 0;
    if ((1 << ((byte)uStack_2fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_308);
    }
    local_150 = local_2b8;
    local_148 = &local_e8;
    local_328 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_320 = DAT_1419df7b8;
    uStack_31c = DAT_1419df7bc;
    if ((1 << (local_28c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_298);
    }
    FUN_140041b80(local_298,&local_328);
    local_140 = local_298;
    local_328 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_320 = DAT_1419df7b8;
    uStack_31c = DAT_1419df7bc;
    if ((1 << (local_27c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_288);
    }
    FUN_140041b80(local_288,&local_328);
    local_138 = local_288;
    local_328 = (longlong *)CONCAT44(uRam00000001419ec804,_DAT_1419ec800);
    uStack_320 = uRam00000001419ec808;
    uStack_31c = uRam00000001419ec80c;
    if ((1 << (local_26c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_278);
    }
    FUN_140041b80(local_278,&local_328);
    local_130 = local_278;
    local_328 = (longlong *)CONCAT44(uRam00000001419ec804,_DAT_1419ec800);
    uStack_320 = uRam00000001419ec808;
    uStack_31c = uRam00000001419ec80c;
    if ((1 << (local_25c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_268);
    }
    FUN_140041b80(local_268,&local_328);
    local_128 = local_268;
    local_328 = (longlong *)CONCAT44(uRam0000000141dc7364,_DAT_141dc7360);
    uStack_320 = uRam0000000141dc7368;
    uStack_31c = uRam0000000141dc736c;
    if ((1 << (local_24c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_258);
    }
    FUN_140041b80(local_258,&local_328);
    local_328 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_320 = DAT_1419df7b8;
    uStack_31c = DAT_1419df7bc;
    local_120 = (undefined8 *)local_258;
    if ((1 << (local_23c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_248);
    }
    FUN_140041b80(local_248,&local_328);
    local_118 = local_248;
    local_328 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_320 = DAT_1419df7b8;
    uStack_31c = DAT_1419df7bc;
    if ((1 << (local_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_238);
    }
    FUN_140041b80(local_238,&local_328);
    local_110 = local_238;
    local_328 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_320 = DAT_1419df7b8;
    uStack_31c = DAT_1419df7bc;
    if ((1 << (local_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_228);
    }
    FUN_140041b80(local_228,&local_328);
    local_108 = local_228;
    local_328 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_320 = DAT_1419df7b8;
    uStack_31c = DAT_1419df7bc;
    if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_218);
    }
    FUN_140041b80(local_218,&local_328);
    local_100 = local_218;
    local_328 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_320 = DAT_1419df7b8;
    uStack_31c = DAT_1419df7bc;
    if ((1 << (local_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_208);
    }
    FUN_140041b80(local_208,&local_328);
    local_f8 = local_208;
    local_328 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_320 = DAT_1419df7b8;
    uStack_31c = DAT_1419df7bc;
    if ((1 << (local_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1f8);
    }
    FUN_140041b80(local_1f8,&local_328);
    local_f0 = local_1f8;
    gml_Script_draw_sprite_hires(param_1,param_2,&local_2f8,0xe,&local_158);
    local_1d8 = 0x59;
    if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2f8);
    }
    local_2f8 = 0;
    local_2f0 = 0;
    local_2ec = 5;
    FUN_140e87170(&local_198,DAT_1419fe0e8,0x80000000,&local_1a8,param_1,param_2);
    uVar15 = param_2;
    FUN_140e87170(&local_198,DAT_1419fe158,0x80000000,&local_1b8,param_1,param_2);
    local_328 = local_1a8;
    uStack_320 = uStack_1a0;
    uStack_31c = uStack_19c;
    if ((1 << (local_2bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_2c8);
    }
    FUN_140041b80(local_2c8,&local_328);
    local_158 = local_2c8;
    local_328 = local_1b8;
    uStack_320 = uStack_1b0;
    uStack_31c = uStack_1ac;
    if ((1 << (local_2ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_2b8);
    }
    FUN_140041b80(local_2b8,&local_328);
    local_150 = local_2b8;
    local_148 = &local_e8;
    local_328 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_320 = DAT_1419df7b8;
    uStack_31c = DAT_1419df7bc;
    if ((1 << (local_28c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_298);
    }
    FUN_140041b80(local_298,&local_328);
    local_140 = local_298;
    local_328 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_320 = DAT_1419df7b8;
    uStack_31c = DAT_1419df7bc;
    if ((1 << (local_27c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_288);
    }
    FUN_140041b80(local_288,&local_328);
    local_138 = local_288;
    local_328 = (longlong *)CONCAT44(uRam00000001419ec804,_DAT_1419ec800);
    uStack_320 = uRam00000001419ec808;
    uStack_31c = uRam00000001419ec80c;
    if ((1 << (local_26c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_278);
    }
    FUN_140041b80(local_278,&local_328);
    local_130 = local_278;
    local_328 = (longlong *)CONCAT44(uRam00000001419ec804,_DAT_1419ec800);
    uStack_320 = uRam00000001419ec808;
    uStack_31c = uRam00000001419ec80c;
    if ((1 << (local_25c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_268);
    }
    FUN_140041b80(local_268,&local_328);
    local_128 = local_268;
    local_120 = &local_1d0;
    local_328 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_320 = DAT_1419df7b8;
    uStack_31c = DAT_1419df7bc;
    if ((1 << (local_23c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_248);
    }
    FUN_140041b80(local_248,&local_328);
    local_118 = local_248;
    local_328 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_320 = DAT_1419df7b8;
    uStack_31c = DAT_1419df7bc;
    if ((1 << (local_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_238);
    }
    FUN_140041b80(local_238,&local_328);
    local_110 = local_238;
    local_328 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_320 = DAT_1419df7b8;
    uStack_31c = DAT_1419df7bc;
    if ((1 << (local_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_228);
    }
    FUN_140041b80(local_228,&local_328);
    local_108 = local_228;
    local_328 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_320 = DAT_1419df7b8;
    uStack_31c = DAT_1419df7bc;
    if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_218);
    }
    FUN_140041b80(local_218,&local_328);
    local_100 = local_218;
    local_328 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_320 = DAT_1419df7b8;
    uStack_31c = DAT_1419df7bc;
    if ((1 << (local_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_208);
    }
    FUN_140041b80(local_208,&local_328);
    local_f8 = local_208;
    local_328 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_320 = DAT_1419df7b8;
    uStack_31c = DAT_1419df7bc;
    if ((1 << (local_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1f8);
    }
    FUN_140041b80(local_1f8,&local_328);
    local_f0 = local_1f8;
    ppuVar16 = &local_158;
    gml_Script_draw_sprite_hires(param_1,param_2,&local_2f8,0xe,ppuVar16);
    local_1d8 = 0x5b;
    uStack_31c = 6;
    uVar15 = uVar15 & 0xffffffffffffff00;
    uVar17 = (ulonglong)ppuVar16 & 0xffffffffffffff00;
    local_328 = param_1;
    FUN_140e87440(&local_328,DAT_141a0a728,0x80000000,&local_88,uVar17,uVar15);
    if ((1 << ((byte)uStack_31c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_328);
    }
    uStack_31c = 6;
    uVar15 = uVar15 & 0xffffffffffffff00;
    uVar17 = uVar17 & 0xffffffffffffff00;
    local_328 = param_1;
    FUN_140e87440(&local_328,DAT_141a0cfc8,0x80000000,&local_180,uVar17,uVar15);
    if ((1 << ((byte)uStack_31c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_328);
    }
    uStack_31c = 6;
    uVar15 = uVar15 & 0xffffffffffffff00;
    uVar17 = uVar17 & 0xffffffffffffff00;
    local_328 = param_1;
    FUN_140e87440(&local_328,DAT_1419fe0e8,0x80000000,&local_b8,uVar17,uVar15);
    if ((1 << ((byte)uStack_31c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_328);
    }
    uStack_31c = 6;
    uVar17 = uVar17 & 0xffffffffffffff00;
    local_328 = param_1;
    FUN_140e87440(&local_328,DAT_1419fe158,0x80000000,&local_170,uVar17,uVar15 & 0xffffffffffffff00)
    ;
    uVar9 = (undefined4)(uVar17 >> 0x20);
    if ((1 << ((byte)uStack_31c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_328);
    }
    uStack_2dc = local_164;
    uStack_2e0 = local_168;
    if ((1 << ((byte)local_164 & 0x1f) & 0x46U) == 0) {
      local_2e8 = local_170;
    }
    else {
      FUN_1400419b0(&local_2e8,&local_170);
    }
    local_318 = 0x100000;
    FUN_1400460e0(&local_2e8,&local_2d8);
    plVar10 = local_2e8;
    if ((uStack_2dc & 0xffffff) != 0) {
      plVar10 = (longlong *)FUN_140e4b060(&local_2e8);
    }
    plVar11 = local_b8;
    if ((uStack_ac & 0xffffff) != 0) {
      plVar11 = (longlong *)FUN_140e4b060(&local_b8);
    }
    plVar12 = local_180;
    if ((local_174 & 0xffffff) != 0) {
      plVar12 = (longlong *)FUN_140e4b060(&local_180);
    }
    dVar13 = local_88;
    if ((local_7c & 0xffffff) != 0) {
      dVar13 = (double)FUN_140e4b060(&local_88);
    }
    FUN_140ec5d30(param_1,(longlong)dVar13,(float)(double)plVar12,(float)(double)plVar11,
                  CONCAT44(uVar9,(float)(double)plVar10));
    if ((1 << ((byte)uStack_2dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2e8);
    }
    local_1d8 = 0x5d;
    if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2f8);
    }
    local_2f8 = 0;
    local_2f0 = 0;
    local_2ec = 5;
    uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a03228);
    if (param_4 < 1) {
      param_5 = &DAT_1419df7b0;
    }
    else {
      param_5 = (undefined8 *)*param_5;
    }
    cVar3 = FUN_140e491e0(param_5);
    if (cVar3 == '\0') {
      uStack_31c = 0;
      local_328 = (longlong *)&DAT_bff0000000000000;
      pplVar7 = (longlong **)&local_328;
      uVar5 = 8;
    }
    else {
      uStack_2fc = 0;
      local_308 = (longlong *)0x3ff0000000000000;
      pplVar7 = &local_308;
      uVar5 = 4;
    }
    uVar2 = uStack_2fc;
    uVar1 = uStack_31c;
    local_318 = uVar5;
    local_2e8 = *pplVar7;
    uStack_2e0 = *(undefined4 *)(pplVar7 + 1);
    uStack_2dc = *(undefined4 *)((longlong)pplVar7 + 0xc);
    if ((1 << (local_2bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_2c8);
    }
    FUN_140041b80(local_2c8,&local_2e8);
    if (((uVar5 & 8) != 0) &&
       (uVar5 = uVar5 & 0xfffffff7, local_318 = uVar5, (1 << ((byte)uVar1 & 0x1f) & 0x46U) != 0)) {
      FUN_140041a50(&local_328);
    }
    if (((uVar5 & 4) != 0) && ((1 << ((byte)uVar2 & 0x1f) & 0x46U) != 0)) {
      FUN_140041a50(&local_308);
    }
    local_158 = local_2c8;
    FUN_140e63610(param_1,param_2,&local_2f8,1,uVar6,&local_158);
  }
  else {
    local_1d8 = 0x38;
    if ((uVar5 & 0x46) != 0) {
      FUN_140041a50(&local_2f8);
    }
    local_2f8 = 0;
    local_2f0 = 0;
    local_2ec = 5;
    uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a03228);
    if (param_4 < 1) {
      param_5 = &DAT_1419df7b0;
    }
    else {
      param_5 = (undefined8 *)*param_5;
    }
    cVar3 = FUN_140e491e0(param_5);
    if (cVar3 == '\0') {
      uStack_2fc = 0;
      local_308 = (longlong *)&DAT_bff0000000000000;
      pplVar7 = &local_308;
      uVar5 = 2;
      local_318 = 2;
    }
    else {
      uStack_2dc = 0;
      local_2e8 = (longlong *)0x3ff0000000000000;
      pplVar7 = &local_2e8;
      uVar5 = 1;
      local_318 = 1;
    }
    uVar2 = uStack_2dc;
    uVar1 = uStack_2fc;
    local_328 = *pplVar7;
    uStack_320 = *(undefined4 *)(pplVar7 + 1);
    uStack_31c = *(undefined4 *)((longlong)pplVar7 + 0xc);
    if ((1 << (local_2bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_2c8);
    }
    FUN_140041b80(local_2c8,&local_328);
    if (((uVar5 & 2) != 0) &&
       (uVar5 = uVar5 & 0xfffffffd, local_318 = uVar5, (1 << ((byte)uVar1 & 0x1f) & 0x46U) != 0)) {
      FUN_140041a50(&local_308);
    }
    if (((uVar5 & 1) != 0) && ((1 << ((byte)uVar2 & 0x1f) & 0x46U) != 0)) {
      FUN_140041a50(&local_2e8);
    }
    local_158 = local_2c8;
    FUN_140e63610(param_1,param_2,&local_2f8,1,uVar6,&local_158);
    local_1d8 = 0x39;
  }
  uVar9 = local_188;
LAB_140bac8be:
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2f8);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)local_164 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_170);
  }
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2d8);
  }
  if ((1 << ((byte)local_1c4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d0);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)uVar9 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_174 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_180);
  }
  _eh_vector_destructor_iterator_(local_2c8,0x10,0xe,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_1e8;
  return param_3;
}

