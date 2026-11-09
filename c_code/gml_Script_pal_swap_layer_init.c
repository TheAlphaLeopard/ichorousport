// gml_Script_pal_swap_layer_init @ 0x140448c40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_pal_swap_layer_init
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  double dVar13;
  code *pcVar14;
  ulonglong uVar15;
  ulonglong in_stack_fffffffffffffdd0;
  ulonglong uVar16;
  undefined8 **ppuVar17;
  undefined8 local_228;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  longlong local_218;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 local_208;
  undefined8 local_200;
  undefined4 local_1f8;
  undefined4 local_1f4;
  uint local_1f0;
  undefined8 local_1e8;
  undefined4 local_1dc;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined4 local_1cc;
  longlong local_1c8;
  undefined4 local_1c0;
  undefined4 local_1bc;
  longlong local_1b8;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined8 local_1a8;
  char *local_1a0;
  undefined4 local_198;
  undefined8 local_190;
  undefined4 local_184;
  undefined8 *local_180;
  longlong *local_178;
  longlong *local_170;
  longlong *local_168;
  longlong *local_160;
  undefined8 local_158;
  undefined4 local_14c;
  undefined8 local_148;
  byte local_13c;
  undefined8 local_138;
  byte local_12c;
  undefined8 local_128;
  byte local_11c;
  longlong local_118;
  byte local_10c;
  longlong local_108;
  byte local_fc;
  undefined8 local_f8;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_dc;
  double local_d8;
  uint local_cc;
  longlong local_c8;
  uint uStack_bc;
  double local_b8;
  uint local_ac;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  double local_68;
  uint local_5c;
  undefined8 local_58;
  undefined4 local_4c;
  
  plVar9 = (longlong *)0x0;
  local_208 = 0;
  local_1a0 = "gml_Script_pal_swap_set";
  local_1a8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_1a8;
  local_198 = 0x40;
  pcVar14 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_148,0x10,5,FUN_1400424d0,FUN_140041b30);
  puVar5 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419f74e8);
  local_184 = 0xffffff;
  local_190 = 0;
  local_1dc = 0xffffff;
  local_1e8 = 0;
  local_4c = 0xffffff;
  local_58 = 0;
  local_5c = 0xffffff;
  local_68 = 0.0;
  local_cc = 0xffffff;
  local_d8 = 0.0;
  local_14c = 0xffffff;
  local_158 = 0;
  local_1f0 = 0xffffff;
  uStack_bc = 0xffffff;
  local_c8 = 0;
  uStack_6c = 0xffffff;
  local_78 = 0;
  local_1ac = 0xffffff;
  local_1b8 = 0;
  local_1bc = 0xffffff;
  local_1c8 = 0;
  local_dc = 0xffffff;
  local_e8 = 0;
  local_ec = 0xffffff;
  local_f8 = 0;
  uStack_7c = 0xffffff;
  local_88 = 0;
  uStack_8c = 0xffffff;
  local_98 = 0;
  uStack_9c = 0xffffff;
  local_a8 = 0;
  local_ac = 0xffffff;
  local_b8 = 0.0;
  local_1f4 = 0;
  local_200 = 0;
  local_1cc = 0;
  local_1d8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_198 = 0x42;
  if (puVar5 != &local_190) {
    local_228 = *puVar5;
    uStack_220 = *(undefined4 *)(puVar5 + 1);
    uStack_21c = *(undefined4 *)((longlong)puVar5 + 0xc);
    FUN_140041b80(&local_190,&local_228);
  }
  local_198 = 0x43;
  puVar5 = &DAT_1419df7b0;
  if (param_4 < 2) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)param_5[1];
  }
  uStack_20c = 0;
  local_218 = 0;
  iVar2 = FUN_140e851f0(puVar7,&local_218,DAT_141955260,0);
  if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  if (iVar2 == 0) {
    local_198 = 0x43;
  }
  else {
    local_198 = 0x45;
    if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    local_1dc = 0;
    local_1e8 = 0;
    local_198 = 0x47;
    if (param_4 < 3) {
      puVar7 = &DAT_1419df7b0;
    }
    else {
      puVar7 = (undefined8 *)param_5[2];
    }
    cVar1 = FUN_140e491e0(puVar7);
    if (cVar1 == '\0') {
      local_198 = 0x48;
      if ((1 << ((byte)local_1f4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_200);
      }
      uVar4 = (undefined4)((ulonglong)pcVar14 >> 0x20);
      local_200 = 0;
      local_1f8 = 0;
      local_1f4 = 5;
      if (param_4 < 1) {
        puVar7 = &DAT_1419df7b0;
LAB_140448f08:
        local_228 = *puVar7;
        uStack_220 = *(undefined4 *)(puVar7 + 1);
        uStack_21c = *(undefined4 *)((longlong)puVar7 + 0xc);
        if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_148);
        }
        FUN_140041b80(&local_148,&local_228);
      }
      else {
        puVar7 = (undefined8 *)*param_5;
        if (puVar7 != &local_148) goto LAB_140448f08;
      }
      local_180 = &local_148;
      ppuVar17 = &local_180;
      uVar15 = CONCAT44(uVar4,DAT_141a04628);
      uVar6 = FUN_140e634e0(param_1,param_2,&local_200,1,uVar15,ppuVar17);
      cVar1 = FUN_140e491e0(uVar6);
      if (cVar1 != '\0') {
        local_198 = 0x4a;
        uVar16 = (ulonglong)ppuVar17 & 0xffffffffffffff00;
        uVar15 = uVar15 & 0xffffffffffffff00;
        FUN_140e87440(&local_190,DAT_1419f5138,0x80000000,&local_58,uVar15,uVar16);
        cVar1 = FUN_140e491e0(&local_58);
        uVar15 = uVar15 & 0xffffffffffffff00;
        if (cVar1 == '\0') {
          local_198 = 0x4d;
          FUN_140e87440(&local_190,DAT_1419f5388,0x80000000,&local_d8,uVar15,
                        uVar16 & 0xffffffffffffff00);
          uVar4 = (undefined4)(uVar15 >> 0x20);
          dVar13 = local_d8;
          if ((local_cc & 0xffffff) != 0) {
            dVar13 = (double)FUN_140e4b060(&local_d8);
          }
          FUN_140ec9e10((longlong)dVar13);
        }
        else {
          local_198 = 0x4b;
          FUN_140e87440(&local_190,DAT_1419f52a8,0x80000000,&local_68,uVar15,
                        uVar16 & 0xffffffffffffff00);
          uVar4 = (undefined4)(uVar15 >> 0x20);
          dVar13 = local_68;
          if ((local_5c & 0xffffff) != 0) {
            dVar13 = (double)FUN_140e4b060(&local_68);
          }
          FUN_140ec9e10((longlong)dVar13);
          local_198 = 0x4c;
          if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1e8);
          }
          local_1dc = 0;
          local_1e8 = 0x3ff0000000000000;
        }
        local_198 = 0x4f;
        if ((1 << ((byte)local_1f4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_200);
        }
        local_200 = 0;
        local_1f8 = 0;
        local_1f4 = 5;
        if (param_4 < 1) {
          puVar7 = &DAT_1419df7b0;
        }
        else {
          puVar7 = (undefined8 *)*param_5;
        }
        uVar3 = FUN_140e4a740(puVar7);
        puVar7 = (undefined8 *)FUN_140ec6010(&local_200,uVar3,0);
        if (puVar7 != &local_158) {
          local_228 = *puVar7;
          uStack_220 = *(undefined4 *)(puVar7 + 1);
          uStack_21c = *(undefined4 *)((longlong)puVar7 + 0xc);
          if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_158);
          }
          FUN_140041b80(&local_158,&local_228);
        }
        if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1d8);
        }
        local_1d8 = 0;
        local_1d0 = 0;
        local_1cc = 5;
        if (param_4 < 1) {
          puVar7 = &DAT_1419df7b0;
LAB_140449155:
          local_228 = *puVar7;
          uStack_220 = *(undefined4 *)(puVar7 + 1);
          uStack_21c = *(undefined4 *)((longlong)puVar7 + 0xc);
          if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_148);
          }
          FUN_140041b80(&local_148,&local_228);
        }
        else {
          puVar7 = (undefined8 *)*param_5;
          if (puVar7 != &local_148) goto LAB_140449155;
        }
        local_180 = &local_148;
        local_228 = CONCAT44(uRam0000000141dc65e4,_DAT_141dc65e0);
        uStack_220 = uRam0000000141dc65e8;
        uStack_21c = uRam0000000141dc65ec;
        if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_138);
        }
        FUN_140041b80(&local_138,&local_228);
        local_178 = &local_138;
        ppuVar17 = &local_180;
        uVar15 = CONCAT44(uVar4,DAT_141a04898);
        plVar8 = (longlong *)FUN_140e634e0(param_1,param_2,&local_1d8,2,uVar15,ppuVar17);
        lVar12 = 0;
        if (plVar8 != &local_c8) {
          local_228 = *plVar8;
          uStack_220 = (undefined4)plVar8[1];
          uStack_21c = *(undefined4 *)((longlong)plVar8 + 0xc);
          FUN_140041b80(&local_c8,&local_228);
          local_1f0 = uStack_bc;
          lVar12 = local_c8;
        }
        local_198 = 0x51;
        if ((1 << ((byte)local_1f4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_200);
        }
        local_200 = 0;
        local_1f8 = 0;
        local_1f4 = 5;
        uVar4 = FUN_140e4a740(&local_1e8);
        uVar15 = uVar15 & 0xffffffffffffff00;
        FUN_140e87440(&local_190,DAT_141a08768,uVar4,&local_78,uVar15,
                      (ulonglong)ppuVar17 & 0xffffffffffffff00);
        uVar4 = (undefined4)(uVar15 >> 0x20);
        local_228 = local_78;
        uStack_220 = uStack_70;
        uStack_21c = uStack_6c;
        if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_148);
        }
        FUN_140041b80(&local_148,&local_228);
        local_180 = &local_148;
        uVar6 = CONCAT44(uVar4,DAT_1419f5468);
        local_178 = &local_158;
        FUN_140e634e0(param_1,param_2,&local_200,2,uVar6,&local_180);
        uVar4 = (undefined4)((ulonglong)uVar6 >> 0x20);
        local_198 = 0x53;
        if ((1 << ((byte)local_1f4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_200);
        }
        local_200 = 0;
        local_1f8 = 0;
        local_1f4 = 5;
        uVar6 = CONCAT44(uVar4,DAT_141a04658);
        local_180 = &local_158;
        plVar8 = (longlong *)FUN_140e634e0(param_1,param_2,&local_200,1,uVar6,&local_180);
        uVar4 = (undefined4)((ulonglong)uVar6 >> 0x20);
        if (plVar8 != &local_1b8) {
          local_228 = *plVar8;
          uStack_220 = (undefined4)plVar8[1];
          uStack_21c = *(undefined4 *)((longlong)plVar8 + 0xc);
          if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1b8);
          }
          FUN_140041b80(&local_1b8,&local_228);
        }
        if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1d8);
        }
        local_1d8 = 0;
        local_1d0 = 0;
        local_1cc = 5;
        ppuVar17 = &local_178;
        uVar15 = CONCAT44(uVar4,DAT_141a04668);
        local_178 = &local_158;
        plVar8 = (longlong *)FUN_140e634e0(param_1,param_2,&local_1d8,1,uVar15,ppuVar17);
        if (plVar8 != &local_1c8) {
          local_228 = *plVar8;
          uStack_220 = (undefined4)plVar8[1];
          uStack_21c = *(undefined4 *)((longlong)plVar8 + 0xc);
          if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1c8);
          }
          FUN_140041b80(&local_1c8,&local_228);
        }
        uStack_20c = local_1ac;
        uStack_210 = local_1b0;
        if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) == 0) {
          local_218 = local_1b8;
        }
        else {
          FUN_1400419b0(&local_218,&local_1b8);
        }
        local_208 = 1;
        uStack_21c = 0;
        local_228 = 0x3fe0000000000000;
        FUN_140042560(&local_218,&local_228);
        if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_228);
        }
        local_228 = local_218;
        uStack_220 = uStack_210;
        uStack_21c = uStack_20c;
        if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_e8);
        }
        FUN_140041b80(&local_e8,&local_228);
        local_208 = 0;
        if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_218);
        }
        uStack_20c = local_1bc;
        uStack_210 = local_1c0;
        if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) == 0) {
          local_218 = local_1c8;
        }
        else {
          FUN_1400419b0(&local_218,&local_1c8);
        }
        local_208 = 2;
        uStack_21c = 0;
        local_228 = 0x3fe0000000000000;
        FUN_140042560(&local_218,&local_228);
        if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_228);
        }
        local_228 = local_218;
        uStack_220 = uStack_210;
        uStack_21c = uStack_20c;
        if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_f8);
        }
        FUN_140041b80(&local_f8,&local_228);
        local_208 = 0;
        if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_218);
        }
        local_198 = 0x58;
        uVar4 = FUN_140e4a740(&local_1e8);
        uVar16 = (ulonglong)ppuVar17 & 0xffffffffffffff00;
        uVar15 = uVar15 & 0xffffffffffffff00;
        FUN_140e87440(&local_190,DAT_1419f5028,uVar4,&local_88,uVar15,uVar16);
        local_228 = local_88;
        uStack_220 = uStack_80;
        uStack_21c = uStack_7c;
        if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_148);
        }
        FUN_140041b80(&local_148,&local_228);
        local_180 = &local_148;
        local_178 = &local_1b8;
        local_170 = &local_1c8;
        FUN_140ec9ea0(3,&local_180);
        local_198 = 0x59;
        uVar4 = FUN_140e4a740(&local_1e8);
        uVar16 = uVar16 & 0xffffffffffffff00;
        uVar15 = uVar15 & 0xffffffffffffff00;
        FUN_140e87440(&local_190,DAT_1419f4f88,uVar4,&local_98,uVar15,uVar16);
        local_228 = local_98;
        uStack_220 = uStack_90;
        uStack_21c = uStack_8c;
        if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_148);
        }
        FUN_140041b80(&local_148,&local_228);
        uVar10 = local_1f0;
        local_180 = &local_148;
        plVar8 = (longlong *)0x0;
        uVar11 = local_1f0 & 0xffffff;
        if ((uVar11 == 2) && (lVar12 != 0)) {
          if (*(int *)(lVar12 + 0x24) < 1) {
            FUN_140e632c0("index out of bounds request %d maximum size is %d",0);
          }
          else {
            plVar8 = *(longlong **)(lVar12 + 8);
          }
        }
        else {
          FUN_140e632c0("trying to index variable that is not an array");
          plVar8 = &local_c8;
        }
        uStack_20c = *(undefined4 *)((longlong)plVar8 + 0xc);
        uStack_210 = (undefined4)plVar8[1];
        if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) == 0) {
          local_218 = *plVar8;
        }
        else {
          FUN_1400419b0(&local_218,plVar8);
        }
        local_208 = 4;
        FUN_1400460e0(&local_218,&local_e8);
        local_228 = local_218;
        uStack_220 = uStack_210;
        uStack_21c = uStack_20c;
        if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_138);
        }
        FUN_140041b80(&local_138,&local_228);
        local_208 = 0;
        if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_218);
        }
        local_178 = &local_138;
        plVar8 = (longlong *)0x0;
        if ((uVar11 == 2) && (lVar12 != 0)) {
          if (*(int *)(lVar12 + 0x24) < 2) {
            FUN_140e632c0("index out of bounds request %d maximum size is %d",1);
          }
          else {
            plVar8 = (longlong *)(*(longlong *)(lVar12 + 8) + 0x10);
          }
        }
        else {
          FUN_140e632c0("trying to index variable that is not an array");
          plVar8 = &local_c8;
        }
        uStack_20c = *(undefined4 *)((longlong)plVar8 + 0xc);
        uStack_210 = (undefined4)plVar8[1];
        if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) == 0) {
          local_218 = *plVar8;
        }
        else {
          FUN_1400419b0(&local_218,plVar8);
        }
        local_208 = 8;
        FUN_1400460e0(&local_218,&local_f8);
        local_228 = local_218;
        uStack_220 = uStack_210;
        uStack_21c = uStack_20c;
        if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_128);
        }
        FUN_140041b80(&local_128,&local_228);
        if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_218);
        }
        local_170 = &local_128;
        plVar8 = (longlong *)0x0;
        if ((uVar11 == 2) && (lVar12 != 0)) {
          if (*(int *)(lVar12 + 0x24) < 3) {
            FUN_140e632c0("index out of bounds request %d maximum size is %d",2);
          }
          else {
            plVar8 = (longlong *)(*(longlong *)(lVar12 + 8) + 0x20);
          }
          if (plVar8 != &local_118) goto LAB_140449897;
        }
        else {
          FUN_140e632c0("trying to index variable that is not an array");
          plVar8 = &local_c8;
LAB_140449897:
          local_228 = *plVar8;
          uStack_220 = (undefined4)plVar8[1];
          uStack_21c = *(undefined4 *)((longlong)plVar8 + 0xc);
          if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_118);
          }
          FUN_140041b80(&local_118,&local_228);
        }
        local_168 = &local_118;
        if ((uVar11 == 2) && (lVar12 != 0)) {
          if (*(int *)(lVar12 + 0x24) < 4) {
            FUN_140e632c0("index out of bounds request %d maximum size is %d",3);
          }
          else {
            plVar9 = (longlong *)(*(longlong *)(lVar12 + 8) + 0x30);
          }
          if (plVar9 != &local_108) goto LAB_14044991a;
        }
        else {
          FUN_140e632c0("trying to index variable that is not an array");
          plVar9 = &local_c8;
LAB_14044991a:
          local_228 = *plVar9;
          uStack_220 = (undefined4)plVar9[1];
          uStack_21c = *(undefined4 *)((longlong)plVar9 + 0xc);
          if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_108);
          }
          FUN_140041b80(&local_108,&local_228);
        }
        local_160 = &local_108;
        FUN_140ec9ea0(5,&local_180);
        local_198 = 0x5a;
        uVar4 = FUN_140e4a740(&local_1e8);
        FUN_140e87440(&local_190,DAT_141a57830,uVar4,&local_a8,uVar15 & 0xffffffffffffff00,
                      uVar16 & 0xffffffffffffff00);
        local_228 = local_a8;
        uStack_220 = uStack_a0;
        uStack_21c = uStack_9c;
        if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_148);
        }
        FUN_140041b80(&local_148,&local_228);
        local_180 = &local_148;
        if ((param_4 < 2) || (puVar5 = (undefined8 *)param_5[1], puVar5 != &local_138)) {
          local_228 = *puVar5;
          uStack_220 = *(undefined4 *)(puVar5 + 1);
          uStack_21c = *(undefined4 *)((longlong)puVar5 + 0xc);
          if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_138);
          }
          FUN_140041b80(&local_138,&local_228);
        }
        local_178 = &local_138;
        FUN_140ec9ea0(2,&local_180);
        goto LAB_14044a255;
      }
      local_198 = 0x48;
    }
    else {
      local_198 = 0x5c;
      in_stack_fffffffffffffdd0 = in_stack_fffffffffffffdd0 & 0xffffffffffffff00;
      uVar15 = (ulonglong)pcVar14 & 0xffffffffffffff00;
      FUN_140e87440(&local_190,DAT_1419f5138,0x80000000,&local_58,uVar15,in_stack_fffffffffffffdd0);
      cVar1 = FUN_140e491e0(&local_58);
      uVar15 = uVar15 & 0xffffffffffffff00;
      if (cVar1 == '\0') {
        local_198 = 0x5f;
        FUN_140e87440(&local_190,DAT_1419f5388,0x80000000,&local_d8,uVar15,
                      in_stack_fffffffffffffdd0 & 0xffffffffffffff00);
        uVar4 = (undefined4)(uVar15 >> 0x20);
        dVar13 = local_d8;
        if ((local_cc & 0xffffff) != 0) {
          dVar13 = (double)FUN_140e4b060(&local_d8);
        }
        FUN_140ec9e10((longlong)dVar13);
      }
      else {
        local_198 = 0x5d;
        FUN_140e87440(&local_190,DAT_1419f50b8,0x80000000,&local_b8,uVar15,
                      in_stack_fffffffffffffdd0 & 0xffffffffffffff00);
        uVar4 = (undefined4)(uVar15 >> 0x20);
        dVar13 = local_b8;
        if ((local_ac & 0xffffff) != 0) {
          dVar13 = (double)FUN_140e4b060(&local_b8);
        }
        FUN_140ec9e10((longlong)dVar13);
        local_198 = 0x5e;
        if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1e8);
        }
        local_1dc = 0;
        local_1e8 = 0x4000000000000000;
      }
      local_198 = 0x61;
      if ((1 << ((byte)local_1f4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_200);
      }
      local_200 = 0;
      local_1f8 = 0;
      local_1f4 = 5;
      if (param_4 < 1) {
        puVar7 = &DAT_1419df7b0;
LAB_140449b8f:
        local_228 = *puVar7;
        uStack_220 = *(undefined4 *)(puVar7 + 1);
        uStack_21c = *(undefined4 *)((longlong)puVar7 + 0xc);
        if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_148);
        }
        FUN_140041b80(&local_148,&local_228);
      }
      else {
        puVar7 = (undefined8 *)*param_5;
        if (puVar7 != &local_148) goto LAB_140449b8f;
      }
      local_180 = &local_148;
      ppuVar17 = &local_180;
      uVar15 = CONCAT44(uVar4,DAT_141a04b28);
      puVar7 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_200,1,uVar15,ppuVar17);
      if (puVar7 != &local_158) {
        local_228 = *puVar7;
        uStack_220 = *(undefined4 *)(puVar7 + 1);
        uStack_21c = *(undefined4 *)((longlong)puVar7 + 0xc);
        if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_158);
        }
        FUN_140041b80(&local_158,&local_228);
      }
      local_198 = 99;
      if ((1 << ((byte)local_1f4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_200);
      }
      local_200 = 0;
      local_1f8 = 0;
      local_1f4 = 5;
      uVar4 = FUN_140e4a740(&local_1e8);
      uVar15 = uVar15 & 0xffffffffffffff00;
      FUN_140e87440(&local_190,DAT_141a08768,uVar4,&local_78,uVar15,
                    (ulonglong)ppuVar17 & 0xffffffffffffff00);
      uVar4 = (undefined4)(uVar15 >> 0x20);
      local_228 = local_78;
      uStack_220 = uStack_70;
      uStack_21c = uStack_6c;
      if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      FUN_140041b80(&local_148,&local_228);
      local_180 = &local_148;
      uVar6 = CONCAT44(uVar4,DAT_1419f5468);
      local_178 = &local_158;
      FUN_140e634e0(param_1,param_2,&local_200,2,uVar6,&local_180);
      uVar4 = (undefined4)((ulonglong)uVar6 >> 0x20);
      local_198 = 0x65;
      if ((1 << ((byte)local_1f4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_200);
      }
      local_200 = 0;
      local_1f8 = 0;
      local_1f4 = 5;
      uVar6 = CONCAT44(uVar4,DAT_141a04658);
      local_180 = &local_158;
      plVar9 = (longlong *)FUN_140e634e0(param_1,param_2,&local_200,1,uVar6,&local_180);
      uVar4 = (undefined4)((ulonglong)uVar6 >> 0x20);
      if (plVar9 != &local_1b8) {
        local_228 = *plVar9;
        uStack_220 = (undefined4)plVar9[1];
        uStack_21c = *(undefined4 *)((longlong)plVar9 + 0xc);
        if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1b8);
        }
        FUN_140041b80(&local_1b8,&local_228);
      }
      if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1d8);
      }
      local_1d8 = 0;
      local_1d0 = 0;
      local_1cc = 5;
      ppuVar17 = &local_178;
      uVar15 = CONCAT44(uVar4,DAT_141a04668);
      local_178 = &local_158;
      plVar9 = (longlong *)FUN_140e634e0(param_1,param_2,&local_1d8,1,uVar15,ppuVar17);
      if (plVar9 != &local_1c8) {
        local_228 = *plVar9;
        uStack_220 = (undefined4)plVar9[1];
        uStack_21c = *(undefined4 *)((longlong)plVar9 + 0xc);
        if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1c8);
        }
        FUN_140041b80(&local_1c8,&local_228);
      }
      uStack_20c = local_1ac;
      uStack_210 = local_1b0;
      if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) == 0) {
        local_218 = local_1b8;
      }
      else {
        FUN_1400419b0(&local_218,&local_1b8);
      }
      local_208 = 0x10;
      uStack_21c = 0;
      local_228 = 0x3fe0000000000000;
      FUN_140042560(&local_218,&local_228);
      if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_228);
      }
      local_228 = local_218;
      uStack_220 = uStack_210;
      uStack_21c = uStack_20c;
      if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e8);
      }
      FUN_140041b80(&local_e8,&local_228);
      local_208 = 0;
      if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_218);
      }
      uStack_20c = local_1bc;
      uStack_210 = local_1c0;
      if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) == 0) {
        local_218 = local_1c8;
      }
      else {
        FUN_1400419b0(&local_218,&local_1c8);
      }
      local_208 = 0x20;
      uStack_21c = 0;
      local_228 = 0x3fe0000000000000;
      FUN_140042560(&local_218,&local_228);
      if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_228);
      }
      local_228 = local_218;
      uStack_220 = uStack_210;
      uStack_21c = uStack_20c;
      if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f8);
      }
      FUN_140041b80(&local_f8,&local_228);
      if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_218);
      }
      local_198 = 0x69;
      uVar4 = FUN_140e4a740(&local_1e8);
      uVar16 = (ulonglong)ppuVar17 & 0xffffffffffffff00;
      uVar15 = uVar15 & 0xffffffffffffff00;
      FUN_140e87440(&local_190,DAT_1419f5028,uVar4,&local_88,uVar15,uVar16);
      local_228 = local_88;
      uStack_220 = uStack_80;
      uStack_21c = uStack_7c;
      if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      FUN_140041b80(&local_148,&local_228);
      local_180 = &local_148;
      local_178 = &local_1b8;
      local_170 = &local_1c8;
      FUN_140ec9ea0(3,&local_180);
      local_198 = 0x6a;
      uVar4 = FUN_140e4a740(&local_1e8);
      uVar16 = uVar16 & 0xffffffffffffff00;
      uVar15 = uVar15 & 0xffffffffffffff00;
      FUN_140e87440(&local_190,DAT_1419f4f88,uVar4,&local_98,uVar15,uVar16);
      local_228 = local_98;
      uStack_220 = uStack_90;
      uStack_21c = uStack_8c;
      if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      FUN_140041b80(&local_148,&local_228);
      local_180 = &local_148;
      local_178 = &local_e8;
      local_170 = &local_f8;
      uStack_20c = 0;
      local_218 = 0x3ff0000000000000;
      local_208 = 0x40;
      FUN_1400460e0(&local_218,&local_e8);
      local_228 = local_218;
      uStack_220 = uStack_210;
      uStack_21c = uStack_20c;
      if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      FUN_140041b80(&local_118,&local_228);
      if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_218);
      }
      local_168 = &local_118;
      uStack_20c = 0;
      local_218 = 0x3ff0000000000000;
      local_208 = 0x80;
      FUN_1400460e0(&local_218,&local_f8);
      local_228 = local_218;
      uStack_220 = uStack_210;
      uStack_21c = uStack_20c;
      if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      FUN_140041b80(&local_108,&local_228);
      if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_218);
      }
      local_160 = &local_108;
      FUN_140ec9ea0(5,&local_180);
      local_198 = 0x6b;
      uVar4 = FUN_140e4a740(&local_1e8);
      FUN_140e87440(&local_190,DAT_141a57830,uVar4,&local_a8,uVar15 & 0xffffffffffffff00,
                    uVar16 & 0xffffffffffffff00);
      local_228 = local_a8;
      uStack_220 = uStack_a0;
      uStack_21c = uStack_9c;
      if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      FUN_140041b80(&local_148,&local_228);
      local_180 = &local_148;
      if ((param_4 < 2) || (puVar5 = (undefined8 *)param_5[1], puVar5 != &local_138)) {
        local_228 = *puVar5;
        uStack_220 = *(undefined4 *)(puVar5 + 1);
        uStack_21c = *(undefined4 *)((longlong)puVar5 + 0xc);
        if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_138);
        }
        FUN_140041b80(&local_138,&local_228);
      }
      local_178 = &local_138;
      FUN_140ec9ea0(2,&local_180);
    }
  }
  uVar10 = local_1f0;
LAB_14044a255:
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  if ((1 << ((byte)local_1f4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_200);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)uVar10 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  if ((1 << ((byte)local_184 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_190);
  }
  _eh_vector_destructor_iterator_(&local_148,0x10,5,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_1a8;
  return param_3;
}

