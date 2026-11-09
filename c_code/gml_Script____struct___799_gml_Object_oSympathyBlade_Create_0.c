// gml_Script____struct___799_gml_Object_oSympathyBlade_Create_0 @ 0x140da8780

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script____struct___799_gml_Object_oSympathyBlade_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  ulonglong *puVar6;
  undefined4 uVar7;
  float fVar8;
  undefined4 uVar9;
  double dVar10;
  undefined1 auVar11 [16];
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar12 [16];
  undefined4 uVar15;
  undefined1 auVar13 [16];
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar14 [16];
  ulonglong uVar16;
  longlong *plVar17;
  undefined8 **ppuVar18;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  undefined4 local_170;
  undefined4 local_16c;
  undefined8 local_168;
  undefined4 local_160;
  undefined4 local_15c;
  undefined8 local_158;
  char *local_150;
  undefined4 local_148;
  undefined8 local_140;
  byte local_134;
  undefined1 local_130 [12];
  byte local_124;
  undefined1 local_120 [12];
  byte local_114;
  undefined8 local_110;
  undefined4 local_108;
  undefined4 local_104;
  undefined8 local_100;
  undefined4 local_f8;
  undefined4 local_f4;
  double local_f0;
  undefined4 local_e4;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined8 local_d0;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 local_94;
  undefined8 local_90;
  undefined4 local_84;
  undefined8 *local_80;
  undefined1 *local_78;
  undefined1 *local_70;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  local_150 = "gml_Script_anon@262@___struct___799@gml_Object_oSympathyBlade_Create_0";
  local_158 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_158;
  local_148 = 0x17;
  uVar9 = 1;
  _eh_vector_constructor_iterator_(&local_140,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_84 = 0xffffff;
  local_90 = 0;
  puVar3 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a013a8);
  uStack_4c = 0xffffff;
  local_58 = 0;
  uStack_5c = 0xffffff;
  local_68 = 0;
  local_d4 = 0xffffff;
  local_e0 = 0;
  uVar7 = 0xffffff;
  local_94 = 0xffffff;
  local_a0 = 0;
  local_e4 = 0xffffff;
  local_f0 = 0.0;
  local_a4 = 0xffffff;
  local_b0 = 0;
  local_f4 = 0xffffff;
  local_100 = 0;
  local_b4 = 0xffffff;
  local_c0 = 0;
  local_104 = 0xffffff;
  local_110 = 0;
  local_c4 = 0xffffff;
  local_d0 = 0;
  local_16c = 0;
  local_178 = 0;
  local_15c = 0;
  local_168 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_148 = 0x19;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f0d0);
  if (puVar4 != &local_140) {
    local_1a8 = *puVar4;
    uStack_1a0 = puVar4[1];
    if ((1 << (local_134 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_140);
    }
    FUN_140041b80(&local_140,&local_1a8);
  }
  local_80 = &local_140;
  ppuVar18 = &local_80;
  uVar16 = CONCAT44(uVar9,DAT_141a02ef8);
  uVar5 = FUN_140e634e0(param_1,param_2,&local_178,1,uVar16,ppuVar18);
  cVar1 = FUN_140e491e0(uVar5);
  if (cVar1 == '\0') {
    local_148 = 0x1b;
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    local_168 = 0;
    local_160 = 0;
    local_15c = 5;
    uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5868);
    FUN_140e87440(uVar5,DAT_141a55540,0x80000000,&local_90,uVar16 & 0xffffffffffffff00,
                  (ulonglong)ppuVar18 & 0xffffffffffffff00);
    local_1a8 = _DAT_141ddb9a8;
    uStack_1a0 = uRam0000000141ddb9b0;
    if ((1 << (local_124 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_130);
    }
    FUN_140041b80(local_130,&local_1a8);
    local_78 = local_130;
    uVar5 = FUN_140069500(uVar5);
    FUN_140e63610(uVar5,param_2,&local_168,1,&local_90,&local_78);
    local_148 = 0x1c;
  }
  else {
    local_148 = 0x20;
    if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    uVar9 = (undefined4)(uVar16 >> 0x20);
    local_178 = 0;
    local_170 = 0;
    local_16c = 5;
    puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f440);
    if (puVar4 != &local_140) {
      local_1a8 = *puVar4;
      uStack_1a0 = puVar4[1];
      if ((1 << (local_134 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_140);
      }
      FUN_140041b80(&local_140,&local_1a8);
    }
    local_80 = &local_140;
    ppuVar18 = &local_80;
    uVar16 = CONCAT44(uVar9,DAT_141a02ef8);
    uVar5 = FUN_140e634e0(param_1,param_2,&local_178,1,uVar16,ppuVar18);
    cVar1 = FUN_140e491e0(uVar5);
    if (cVar1 == '\0') {
      local_148 = 0x22;
      if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      local_168 = 0;
      local_160 = 0;
      local_15c = 5;
      uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5868);
      FUN_140e87440(uVar5,DAT_141a55540,0x80000000,&local_90,uVar16 & 0xffffffffffffff00,
                    (ulonglong)ppuVar18 & 0xffffffffffffff00);
      local_1a8 = _DAT_141ddb998;
      uStack_1a0 = uRam0000000141ddb9a0;
      if ((1 << (local_124 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_130);
      }
      FUN_140041b80(local_130,&local_1a8);
      local_78 = local_130;
      uVar5 = FUN_140069500(uVar5);
      FUN_140e63610(uVar5,param_2,&local_168,1,&local_90,&local_78);
      local_148 = 0x23;
    }
    else {
      local_148 = 0x27;
      if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      local_178 = 0;
      local_170 = 0;
      local_16c = 5;
      puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a01408);
      uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f440);
      FUN_140e87170(uVar5,DAT_1419fe0e8,0x80000000,&local_58,param_1,param_2);
      plVar17 = param_1;
      FUN_140e87170(uVar5,DAT_1419fe158,0x80000000,&local_68,param_1,param_2);
      uVar7 = (undefined4)((ulonglong)plVar17 >> 0x20);
      FUN_140e609c0(DAT_141a729d8);
      FUN_140e645a0(&local_198,
                    gml_Script_anon_262____struct___799_gml_Object_oSympathyBlade_Create_0,0);
      if (&local_198 != puVar3) {
        uStack_1a0 = CONCAT44(uStack_18c,uStack_190);
        local_1a8 = local_198;
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar3);
        }
        FUN_140041b80(puVar3,&local_1a8);
      }
      FUN_140e60910(1);
      if (puVar3 != &local_140) {
        local_1a8 = *puVar3;
        uStack_1a0 = puVar3[1];
        if ((1 << (local_134 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_140);
        }
        FUN_140041b80(&local_140,&local_1a8);
      }
      if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_198);
      }
      local_80 = &local_140;
      uStack_1a0 = CONCAT44(uStack_4c,uStack_50);
      local_1a8 = local_58;
      if ((1 << (local_124 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_130);
      }
      FUN_140041b80(local_130,&local_1a8);
      local_78 = local_130;
      uStack_1a0 = CONCAT44(uStack_5c,uStack_60);
      local_1a8 = local_68;
      if ((1 << (local_114 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_120);
      }
      FUN_140041b80(local_120,&local_1a8);
      local_70 = local_120;
      FUN_140e609c0(param_1);
      puVar3 = (undefined8 *)
               FUN_140e634e0(param_1,param_2,&local_178,3,CONCAT44(uVar7,DAT_1419fd6d8),&local_80);
      if (puVar3 != puVar4) {
        local_1a8 = *puVar3;
        uStack_1a0 = puVar3[1];
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar4);
        }
        FUN_140041b80(puVar4,&local_1a8);
      }
      FUN_140e60910(1);
      local_148 = 0x29;
      FUN_140e85f80(param_1,DAT_1419fd2a8,0x80000000,&local_e0);
      uStack_17c = local_d4;
      uStack_180 = local_d8;
      if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) == 0) {
        local_188 = local_e0;
      }
      else {
        FUN_1400419b0(&local_188,&local_e0);
      }
      uStack_1a0 = uStack_1a0 & 0xffffffff;
      local_1a8 = 0x3fa999999999999a;
      FUN_140042560(&local_188,&local_1a8);
      if ((1 << ((byte)(uStack_1a0 >> 0x20) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1a8);
      }
      uStack_18c = uStack_17c;
      uStack_190 = uStack_180;
      if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) == 0) {
        local_198 = local_188;
      }
      else {
        FUN_1400419b0(&local_198,&local_188);
      }
      uStack_1a0._4_4_ = 7;
      local_1a8 = CONCAT44(local_1a8._4_4_,0x168);
      FUN_140046880(&local_198,&local_1a8);
      if ((1 << ((byte)uStack_1a0._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1a8);
      }
      uStack_1a0 = CONCAT44(uStack_18c,uStack_190);
      local_1a8 = local_198;
      FUN_140041b80(&local_a0,&local_1a8);
      if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_198);
      }
      if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      local_148 = 0x2a;
      uStack_1a0 = CONCAT44(0xf,(undefined4)uStack_1a0);
      local_1a8 = 0x10000000000012b;
      dVar10 = (double)FUN_140e4b060(&local_1a8);
      iVar2 = FUN_140edd1e0(param_1,param_2,(int)dVar10);
      if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f0);
      }
      local_e4 = 0;
      local_f0 = (double)iVar2;
      if ((1 << ((byte)(uStack_1a0 >> 0x20) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1a8);
      }
      local_148 = 0x2b;
      uStack_18c = 0;
      local_198 = 0x4076800000000000;
      FUN_140046500(&local_198,&local_f0);
      uStack_1a0 = CONCAT44(uStack_18c,uStack_190);
      local_1a8 = local_198;
      if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_b0);
      }
      FUN_140041b80(&local_b0,&local_1a8);
      if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_198);
      }
      local_148 = 0x2c;
      puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f5a08);
      puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a013f8);
      FUN_140e609c0(param_1);
      uStack_18c = *(undefined4 *)((longlong)puVar3 + 0xc);
      uStack_190 = *(undefined4 *)(puVar3 + 1);
      if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) == 0) {
        local_198 = *puVar3;
      }
      else {
        FUN_1400419b0(&local_198,puVar3);
      }
      FUN_140042560(&local_198,&local_b0);
      uVar7 = local_94;
      uStack_17c = local_94;
      uStack_180 = local_98;
      if ((1 << ((byte)local_94 & 0x1f) & 0x46U) == 0) {
        local_188 = local_a0;
      }
      else {
        FUN_1400419b0(&local_188,&local_a0);
      }
      FUN_1400460e0(&local_188,&local_198);
      if (&local_188 != puVar4) {
        uStack_1a0 = CONCAT44(uStack_17c,uStack_180);
        local_1a8 = local_188;
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar4);
        }
        FUN_140041b80(puVar4,&local_1a8);
      }
      if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_198);
      }
      FUN_140e60910(1);
      local_148 = 0x2e;
      uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a01408);
      puVar6 = (ulonglong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a58020);
      puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a013f8);
      FUN_140e87170(uVar5,DAT_1419fe0e8,0x80000000,&local_100,param_1,param_2);
      if ((*(uint *)((longlong)puVar3 + 0xc) & 0xffffff) == 0) {
        uVar9 = (undefined4)*puVar3;
        uVar15 = (undefined4)((ulonglong)*puVar3 >> 0x20);
      }
      else {
        uVar5 = FUN_140e4b060(puVar3);
        uVar9 = (undefined4)uVar5;
        uVar15 = (undefined4)((ulonglong)uVar5 >> 0x20);
      }
      if ((*(uint *)((longlong)puVar6 + 0xc) & 0xffffff) == 0) {
        auVar11._8_8_ = 0;
        auVar11._0_8_ = *puVar6;
      }
      else {
        auVar11._0_8_ = FUN_140e4b060(puVar6);
        auVar11._8_8_ = extraout_XMM0_Qb;
      }
      auVar12._4_12_ = auVar11._4_12_;
      auVar12._0_4_ = (float)auVar11._0_8_;
      fVar8 = (float)FUN_140e78f90(auVar12._0_8_,(float)(double)CONCAT44(uVar15,uVar9));
      uStack_18c = local_f4;
      uStack_190 = local_f8;
      if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) == 0) {
        local_198 = local_100;
      }
      else {
        FUN_1400419b0(&local_198,&local_100);
      }
      FUN_140162c50(&local_198,(double)fVar8);
      uStack_1a0 = CONCAT44(uStack_18c,uStack_190);
      local_1a8 = local_198;
      if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_c0);
      }
      FUN_140041b80(&local_c0,&local_1a8);
      if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_198);
      }
      FUN_140e86fa0(param_1,DAT_1419fe0e8,0x80000000,&local_c0);
      local_148 = 0x2f;
      uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a01408);
      puVar6 = (ulonglong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a58020);
      puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a013f8);
      FUN_140e87170(uVar5,DAT_1419fe158,0x80000000,&local_110,param_1,param_2);
      if ((*(uint *)((longlong)puVar3 + 0xc) & 0xffffff) == 0) {
        uVar9 = (undefined4)*puVar3;
        uVar15 = (undefined4)((ulonglong)*puVar3 >> 0x20);
      }
      else {
        uVar5 = FUN_140e4b060(puVar3);
        uVar9 = (undefined4)uVar5;
        uVar15 = (undefined4)((ulonglong)uVar5 >> 0x20);
      }
      if ((*(uint *)((longlong)puVar6 + 0xc) & 0xffffff) == 0) {
        auVar13._8_8_ = 0;
        auVar13._0_8_ = *puVar6;
      }
      else {
        auVar13._0_8_ = FUN_140e4b060(puVar6);
        auVar13._8_8_ = extraout_XMM0_Qb_00;
      }
      auVar14._4_12_ = auVar13._4_12_;
      auVar14._0_4_ = (float)auVar13._0_8_;
      fVar8 = (float)FUN_140e79010(auVar14._0_8_,(float)(double)CONCAT44(uVar15,uVar9));
      uStack_18c = local_104;
      uStack_190 = local_108;
      if ((1 << ((byte)local_104 & 0x1f) & 0x46U) == 0) {
        local_198 = local_110;
      }
      else {
        FUN_1400419b0(&local_198,&local_110);
      }
      FUN_140162c50(&local_198,(double)fVar8);
      uStack_1a0 = CONCAT44(uStack_18c,uStack_190);
      local_1a8 = local_198;
      if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_d0);
      }
      FUN_140041b80(&local_d0,&local_1a8);
      if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_198);
      }
      FUN_140e86fa0(param_1,DAT_1419fe158,0x80000000,&local_d0);
      local_148 = 0x31;
      puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a7f8);
      FUN_140e609c0(param_1);
      uStack_17c = *(undefined4 *)((longlong)puVar3 + 0xc);
      uStack_180 = *(undefined4 *)(puVar3 + 1);
      if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) == 0) {
        local_188 = *puVar3;
      }
      else {
        FUN_1400419b0(&local_188,puVar3);
      }
      uStack_1a0 = CONCAT44(7,(undefined4)uStack_1a0);
      local_1a8 = CONCAT44(local_1a8._4_4_,0xb4);
      FUN_1400460e0(&local_188,&local_1a8);
      if ((1 << ((byte)(uStack_1a0 >> 0x20) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1a8);
      }
      if (&local_188 != puVar4) {
        uStack_1a0 = CONCAT44(uStack_17c,uStack_180);
        local_1a8 = local_188;
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar4);
        }
        FUN_140041b80(puVar4,&local_1a8);
      }
      if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      FUN_140e60910(1);
    }
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d0);
  }
  if ((1 << ((byte)local_104 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_110);
  }
  if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c0);
  }
  if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_100);
  }
  if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b0);
  }
  if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f0);
  }
  if ((1 << ((byte)uVar7 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a0);
  }
  if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e0);
  }
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)uStack_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  if ((1 << ((byte)local_84 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_90);
  }
  _eh_vector_destructor_iterator_(&local_140,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_158;
  return param_3;
}

