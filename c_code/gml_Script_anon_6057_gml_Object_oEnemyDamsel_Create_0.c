// gml_Script_anon_6057_gml_Object_oEnemyDamsel_Create_0 @ 0x14097bf90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_6057_gml_Object_oEnemyDamsel_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  longlong **pplVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  bool bVar10;
  undefined4 uVar11;
  ulonglong uVar12;
  undefined1 **ppuVar13;
  undefined8 local_1d8;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  longlong *local_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined4 local_1ac;
  longlong *local_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  longlong *local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined1 local_188 [12];
  byte local_17c;
  undefined1 local_178 [12];
  byte local_16c;
  undefined8 local_168;
  byte local_15c;
  undefined8 local_158;
  byte local_14c;
  undefined1 local_148 [12];
  byte local_13c;
  undefined8 local_138;
  byte local_12c;
  undefined8 local_128;
  byte local_11c;
  undefined8 local_118;
  byte local_10c;
  undefined8 local_108;
  byte local_fc;
  undefined1 local_f8 [12];
  byte local_ec;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  char *local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined4 local_a4;
  undefined1 *local_98;
  undefined1 *local_90;
  undefined8 *local_88;
  undefined8 *local_80;
  undefined1 *local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined1 *local_50;
  undefined8 local_48;
  undefined4 local_3c;
  
  local_d0 = "gml_Script_anon@4276@gml_Object_oEnemyDamsel_Create_0";
  local_d8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_d8;
  local_c8 = 0xbc;
  _eh_vector_constructor_iterator_(local_188,0x10,10,FUN_1400424d0,FUN_140041b30);
  uVar4 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419ef4c8);
  local_b4 = 0xffffff;
  local_c0 = 0;
  uStack_18c = 0xffffff;
  local_198 = (longlong *)0x0;
  uStack_dc = 0xffffff;
  local_e8 = 0;
  local_3c = 0xffffff;
  local_48 = 0;
  local_a4 = 0xffffff;
  local_b0 = 0;
  local_1ac = 0;
  local_1b8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_c8 = 0xbd;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f07a8);
  FUN_140e63610(param_1,param_2,&local_1b8,0,uVar5,0);
  local_c8 = 0xbf;
  cVar2 = FUN_140e491e0(uVar4);
  if (cVar2 == '\0') {
    local_c8 = 0xbf;
  }
  else {
    local_c8 = 0xc1;
    if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    local_1b8 = 0;
    local_1b0 = 0;
    local_1ac = 5;
    uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f05e8);
    uVar12 = 0;
    uVar4 = FUN_140e63610(param_1,param_2,&local_1b8,0,uVar6,0);
    cVar2 = FUN_140e491e0(uVar4);
    bVar10 = cVar2 == '\0';
    if (bVar10) {
      uStack_1bc = 0;
      local_1c8 = (longlong *)0x40efffe000000000;
      pplVar7 = &local_1c8;
    }
    else {
      uStack_19c = 0;
      local_1a8 = (longlong *)0x406fe00000000000;
      pplVar7 = &local_1a8;
    }
    uVar1 = uStack_19c;
    uVar11 = uStack_1bc;
    local_1d8 = *pplVar7;
    uStack_1d0 = *(undefined4 *)(pplVar7 + 1);
    uStack_1cc = *(undefined4 *)((longlong)pplVar7 + 0xc);
    if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c0);
    }
    FUN_140041b80(&local_c0,&local_1d8);
    if (bVar10) {
      if ((1 << ((byte)uVar11 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1c8);
      }
    }
    if (!bVar10) {
      if ((1 << ((byte)uVar1 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1a8);
      }
    }
    local_c8 = 0xc2;
    FUN_140e9c1f0(0x3eb33333);
    local_c8 = 0xc3;
    if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    local_1b8 = 0;
    local_1b0 = 0;
    local_1ac = 5;
    puVar8 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f0ab8);
    uStack_1bc = 6;
    uVar12 = uVar12 & 0xffffffffffffff00;
    uVar6 = uVar6 & 0xffffffffffffff00;
    local_1c8 = param_1;
    FUN_140e87440(&local_1c8,DAT_1419fe0e8,0x80000000,&local_198,uVar6,uVar12);
    if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    uStack_1bc = 6;
    uVar6 = uVar6 & 0xffffffffffffff00;
    local_1c8 = param_1;
    FUN_140e87440(&local_1c8,DAT_1419fe158,0x80000000,&local_e8,uVar6,uVar12 & 0xffffffffffffff00);
    uVar11 = (undefined4)(uVar6 >> 0x20);
    if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    local_1d8 = local_198;
    uStack_1d0 = uStack_190;
    uStack_1cc = uStack_18c;
    if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_188);
    }
    FUN_140041b80(local_188,&local_1d8);
    local_98 = local_188;
    local_1d8 = (longlong *)local_e8;
    uStack_1d0 = uStack_e0;
    uStack_1cc = uStack_dc;
    if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_178);
    }
    FUN_140041b80(local_178,&local_1d8);
    local_90 = local_178;
    if (puVar8 != &local_168) {
      local_1d8 = (longlong *)*puVar8;
      uStack_1d0 = *(undefined4 *)(puVar8 + 1);
      uStack_1cc = *(undefined4 *)((longlong)puVar8 + 0xc);
      if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      FUN_140041b80(&local_168,&local_1d8);
    }
    local_88 = &local_168;
    local_1d8 = (longlong *)CONCAT44(uRam00000001419ea654,_DAT_1419ea650);
    uStack_1d0 = uRam00000001419ea658;
    uStack_1cc = uRam00000001419ea65c;
    if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    FUN_140041b80(&local_158,&local_1d8);
    local_80 = &local_158;
    local_1d8 = (longlong *)CONCAT44(uRam00000001419ea654,_DAT_1419ea650);
    uStack_1d0 = uRam00000001419ea658;
    uStack_1cc = uRam00000001419ea65c;
    if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_148);
    }
    FUN_140041b80(local_148,&local_1d8);
    local_78 = local_148;
    local_1d8 = (longlong *)CONCAT44(uRam00000001419df7c4,_DAT_1419df7c0);
    uStack_1d0 = uRam00000001419df7c8;
    uStack_1cc = uRam00000001419df7cc;
    if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    FUN_140041b80(&local_138,&local_1d8);
    local_70 = &local_138;
    ppuVar13 = &local_98;
    uVar6 = CONCAT44(uVar11,DAT_1419f0728);
    FUN_140e634e0(param_1,param_2,&local_1b8,6,uVar6,ppuVar13);
    local_c8 = 0xc4;
    if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    local_1b8 = 0;
    local_1b0 = 0;
    local_1ac = 5;
    puVar8 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f0818);
    puVar9 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f0908);
    uStack_1bc = 6;
    uVar12 = (ulonglong)ppuVar13 & 0xffffffffffffff00;
    uVar6 = uVar6 & 0xffffffffffffff00;
    local_1c8 = param_1;
    FUN_140e87440(&local_1c8,DAT_1419fe0e8,0x80000000,&local_198,uVar6,uVar12);
    if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    uStack_1bc = 6;
    uVar6 = uVar6 & 0xffffffffffffff00;
    local_1c8 = param_1;
    FUN_140e87440(&local_1c8,DAT_1419fe158,0x80000000,&local_e8,uVar6,uVar12 & 0xffffffffffffff00);
    uVar11 = (undefined4)(uVar6 >> 0x20);
    if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    local_1d8 = local_198;
    uStack_1d0 = uStack_190;
    uStack_1cc = uStack_18c;
    if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_188);
    }
    FUN_140041b80(local_188,&local_1d8);
    local_98 = local_188;
    local_1d8 = (longlong *)local_e8;
    uStack_1d0 = uStack_e0;
    uStack_1cc = uStack_dc;
    if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_178);
    }
    FUN_140041b80(local_178,&local_1d8);
    local_90 = local_178;
    uStack_1bc = *(undefined4 *)((longlong)puVar8 + 0xc);
    uStack_1c0 = *(undefined4 *)(puVar8 + 1);
    if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) == 0) {
      local_1c8 = (longlong *)*puVar8;
    }
    else {
      FUN_1400419b0(&local_1c8,puVar8);
    }
    uStack_1cc = 0;
    local_1d8 = (longlong *)0x3fe0000000000000;
    FUN_140042560(&local_1c8,&local_1d8);
    if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    uStack_19c = uStack_18c;
    uStack_1a0 = uStack_190;
    if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) == 0) {
      local_1a8 = local_198;
    }
    else {
      FUN_1400419b0(&local_1a8,&local_198);
    }
    FUN_1400462a0(&local_1a8,&local_1c8);
    local_1d8 = local_1a8;
    uStack_1d0 = uStack_1a0;
    uStack_1cc = uStack_19c;
    if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    FUN_140041b80(&local_168,&local_1d8);
    if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    local_88 = &local_168;
    if (puVar9 != &local_158) {
      local_1d8 = (longlong *)*puVar9;
      uStack_1d0 = *(undefined4 *)(puVar9 + 1);
      uStack_1cc = *(undefined4 *)((longlong)puVar9 + 0xc);
      if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      FUN_140041b80(&local_158,&local_1d8);
    }
    local_80 = &local_158;
    uStack_19c = *(undefined4 *)((longlong)puVar8 + 0xc);
    uStack_1a0 = *(undefined4 *)(puVar8 + 1);
    if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) == 0) {
      local_1a8 = (longlong *)*puVar8;
    }
    else {
      FUN_1400419b0(&local_1a8,puVar8);
    }
    uStack_1cc = 0;
    local_1d8 = (longlong *)0x3fe0000000000000;
    FUN_140042560(&local_1a8,&local_1d8);
    if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    uStack_1bc = uStack_18c;
    uStack_1c0 = uStack_190;
    if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) == 0) {
      local_1c8 = local_198;
    }
    else {
      FUN_1400419b0(&local_1c8,&local_198);
    }
    FUN_1400460e0(&local_1c8,&local_1a8);
    local_1d8 = local_1c8;
    uStack_1d0 = uStack_1c0;
    uStack_1cc = uStack_1bc;
    if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_148);
    }
    FUN_140041b80(local_148,&local_1d8);
    if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    local_78 = local_148;
    if (puVar9 != &local_138) {
      local_1d8 = (longlong *)*puVar9;
      uStack_1d0 = *(undefined4 *)(puVar9 + 1);
      uStack_1cc = *(undefined4 *)((longlong)puVar9 + 0xc);
      if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      FUN_140041b80(&local_138,&local_1d8);
    }
    local_70 = &local_138;
    local_68 = &local_c0;
    local_60 = &local_c0;
    local_58 = &local_c0;
    local_1d8 = (longlong *)CONCAT44(uRam00000001419df7c4,_DAT_1419df7c0);
    uStack_1d0 = uRam00000001419df7c8;
    uStack_1cc = uRam00000001419df7cc;
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_f8);
    }
    FUN_140041b80(local_f8,&local_1d8);
    local_50 = local_f8;
    ppuVar13 = &local_98;
    uVar6 = CONCAT44(uVar11,DAT_1419f08b8);
    FUN_140e634e0(param_1,param_2,&local_1b8,10,uVar6,ppuVar13);
    local_c8 = 0xc5;
    if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    local_1b8 = 0;
    local_1b0 = 0;
    local_1ac = 5;
    uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5868);
    FUN_140e87440(uVar4,DAT_1419f5df8,0x80000000,&local_48,uVar6 & 0xffffffffffffff00,
                  (ulonglong)ppuVar13 & 0xffffffffffffff00);
    uStack_1bc = DAT_141dd8854;
    uStack_1c0 = DAT_141dd8850;
    if ((1 << ((byte)DAT_141dd8854 & 0x1f) & 0x46U) == 0) {
      local_1c8 = DAT_141dd8848;
    }
    else {
      FUN_1400419b0(&local_1c8,&DAT_141dd8848);
    }
    uVar4 = FUN_140069500(uVar4);
    uVar6 = 0;
    puVar8 = &local_48;
    uVar4 = FUN_140e63610(uVar4,param_2,&local_1b8,0,puVar8,0);
    iVar3 = FUN_140e851f0(uVar4,&local_1c8,DAT_141955260,0);
    if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    if (iVar3 == 0) {
      local_c8 = 199;
      puVar9 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f0818);
      uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f0608);
      uStack_19c = *(undefined4 *)((longlong)puVar9 + 0xc);
      uStack_1a0 = *(undefined4 *)(puVar9 + 1);
      if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) == 0) {
        local_1a8 = (longlong *)*puVar9;
      }
      else {
        FUN_1400419b0(&local_1a8,puVar9);
      }
      FUN_1400460e0(&local_1a8,uVar4);
      uStack_1bc = uStack_19c;
      uStack_1c0 = uStack_1a0;
      if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) == 0) {
        local_1c8 = local_1a8;
      }
      else {
        FUN_1400419b0(&local_1c8,&local_1a8);
      }
      uStack_1cc = 0;
      local_1d8 = (longlong *)0x3fe0000000000000;
      FUN_140042560(&local_1c8,&local_1d8);
      if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1d8);
      }
      local_1d8 = local_1c8;
      uStack_1d0 = uStack_1c0;
      uStack_1cc = uStack_1bc;
      if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_b0);
      }
      FUN_140041b80(&local_b0,&local_1d8);
      if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1c8);
      }
      if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1a8);
      }
      local_c8 = 200;
      if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1b8);
      }
      local_1b8 = 0;
      local_1b0 = 0;
      local_1ac = 5;
      puVar9 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f0908);
      uStack_1cc = 6;
      uVar6 = uVar6 & 0xffffffffffffff00;
      uVar12 = (ulonglong)puVar8 & 0xffffffffffffff00;
      local_1d8 = param_1;
      FUN_140e87440(&local_1d8,DAT_1419fe0e8,0x80000000,&local_198,uVar12,uVar6);
      if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1d8);
      }
      uStack_1cc = 6;
      uVar12 = uVar12 & 0xffffffffffffff00;
      local_1d8 = param_1;
      FUN_140e87440(&local_1d8,DAT_1419fe158,0x80000000,&local_e8,uVar12,uVar6 & 0xffffffffffffff00)
      ;
      uVar11 = (undefined4)(uVar12 >> 0x20);
      if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1d8);
      }
      local_1d8 = local_198;
      uStack_1d0 = uStack_190;
      uStack_1cc = uStack_18c;
      if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_188);
      }
      FUN_140041b80(local_188,&local_1d8);
      local_98 = local_188;
      local_1d8 = (longlong *)local_e8;
      uStack_1d0 = uStack_e0;
      uStack_1cc = uStack_dc;
      if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_178);
      }
      FUN_140041b80(local_178,&local_1d8);
      local_90 = local_178;
      uStack_1bc = uStack_18c;
      uStack_1c0 = uStack_190;
      if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) == 0) {
        local_1c8 = local_198;
      }
      else {
        FUN_1400419b0(&local_1c8,&local_198);
      }
      FUN_1400462a0(&local_1c8,&local_b0);
      local_1d8 = local_1c8;
      uStack_1d0 = uStack_1c0;
      uStack_1cc = uStack_1bc;
      if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      FUN_140041b80(&local_168,&local_1d8);
      if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1c8);
      }
      local_88 = &local_168;
      if (puVar9 != &local_158) {
        local_1d8 = (longlong *)*puVar9;
        uStack_1d0 = *(undefined4 *)(puVar9 + 1);
        uStack_1cc = *(undefined4 *)((longlong)puVar9 + 0xc);
        if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_158);
        }
        FUN_140041b80(&local_158,&local_1d8);
      }
      local_80 = &local_158;
      uStack_1bc = uStack_18c;
      uStack_1c0 = uStack_190;
      if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) == 0) {
        local_1c8 = local_198;
      }
      else {
        FUN_1400419b0(&local_1c8,&local_198);
      }
      FUN_1400460e0(&local_1c8,&local_b0);
      local_1d8 = local_1c8;
      uStack_1d0 = uStack_1c0;
      uStack_1cc = uStack_1bc;
      if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_148);
      }
      FUN_140041b80(local_148,&local_1d8);
      if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1c8);
      }
      local_78 = local_148;
      if (puVar9 != &local_138) {
        local_1d8 = (longlong *)*puVar9;
        uStack_1d0 = *(undefined4 *)(puVar9 + 1);
        uStack_1cc = *(undefined4 *)((longlong)puVar9 + 0xc);
        if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_138);
        }
        FUN_140041b80(&local_138,&local_1d8);
      }
      local_70 = &local_138;
      local_1d8 = (longlong *)CONCAT44(uRam00000001419ea6d4,_DAT_1419ea6d0);
      uStack_1d0 = uRam00000001419ea6d8;
      uStack_1cc = uRam00000001419ea6dc;
      if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      FUN_140041b80(&local_128,&local_1d8);
      local_68 = &local_128;
      local_1d8 = (longlong *)CONCAT44(uRam00000001419ea6d4,_DAT_1419ea6d0);
      uStack_1d0 = uRam00000001419ea6d8;
      uStack_1cc = uRam00000001419ea6dc;
      if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      FUN_140041b80(&local_118,&local_1d8);
      local_60 = &local_118;
      local_1d8 = (longlong *)CONCAT44(uRam00000001419ea6d4,_DAT_1419ea6d0);
      uStack_1d0 = uRam00000001419ea6d8;
      uStack_1cc = uRam00000001419ea6dc;
      if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      FUN_140041b80(&local_108,&local_1d8);
      local_1d8 = (longlong *)CONCAT44(uRam00000001419df7c4,_DAT_1419df7c0);
      uStack_1d0 = uRam00000001419df7c8;
      uStack_1cc = uRam00000001419df7cc;
      local_58 = &local_108;
      if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_f8);
      }
      FUN_140041b80(local_f8,&local_1d8);
      local_50 = local_f8;
      ppuVar13 = &local_98;
      uVar6 = CONCAT44(uVar11,DAT_1419f08b8);
      FUN_140e634e0(param_1,param_2,&local_1b8,10,uVar6,ppuVar13);
      local_c8 = 0xc9;
      if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1b8);
      }
      local_1b8 = 0;
      local_1b0 = 0;
      local_1ac = 5;
      puVar8 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f0ab8);
      uStack_1cc = 6;
      uVar12 = (ulonglong)ppuVar13 & 0xffffffffffffff00;
      uVar6 = uVar6 & 0xffffffffffffff00;
      local_1d8 = param_1;
      FUN_140e87440(&local_1d8,DAT_1419fe0e8,0x80000000,&local_198,uVar6,uVar12);
      if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1d8);
      }
      uStack_1cc = 6;
      uVar6 = uVar6 & 0xffffffffffffff00;
      local_1d8 = param_1;
      FUN_140e87440(&local_1d8,DAT_1419fe158,0x80000000,&local_e8,uVar6,uVar12 & 0xffffffffffffff00)
      ;
      uVar11 = (undefined4)(uVar6 >> 0x20);
      if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1d8);
      }
      local_1d8 = local_198;
      uStack_1d0 = uStack_190;
      uStack_1cc = uStack_18c;
      if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_188);
      }
      FUN_140041b80(local_188,&local_1d8);
      local_98 = local_188;
      local_1d8 = (longlong *)local_e8;
      uStack_1d0 = uStack_e0;
      uStack_1cc = uStack_dc;
      if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_178);
      }
      FUN_140041b80(local_178,&local_1d8);
      local_90 = local_178;
      uStack_1bc = *(undefined4 *)((longlong)puVar8 + 0xc);
      uStack_1c0 = *(undefined4 *)(puVar8 + 1);
      if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) == 0) {
        local_1c8 = (longlong *)*puVar8;
      }
      else {
        FUN_1400419b0(&local_1c8,puVar8);
      }
      FUN_1400460e0(&local_1c8,uVar4);
      local_1d8 = local_1c8;
      uStack_1d0 = uStack_1c0;
      uStack_1cc = uStack_1bc;
      if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      FUN_140041b80(&local_168,&local_1d8);
      if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1c8);
      }
      local_88 = &local_168;
      local_1d8 = (longlong *)CONCAT44(uRam00000001419ea6d4,_DAT_1419ea6d0);
      uStack_1d0 = uRam00000001419ea6d8;
      uStack_1cc = uRam00000001419ea6dc;
      if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      FUN_140041b80(&local_158,&local_1d8);
      local_80 = &local_158;
      local_1d8 = (longlong *)CONCAT44(uRam00000001419ea6d4,_DAT_1419ea6d0);
      uStack_1d0 = uRam00000001419ea6d8;
      uStack_1cc = uRam00000001419ea6dc;
      if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_148);
      }
      FUN_140041b80(local_148,&local_1d8);
      local_78 = local_148;
      local_1d8 = (longlong *)CONCAT44(uRam00000001419df7c4,_DAT_1419df7c0);
      uStack_1d0 = uRam00000001419df7c8;
      uStack_1cc = uRam00000001419df7cc;
      if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      FUN_140041b80(&local_138,&local_1d8);
      local_70 = &local_138;
      FUN_140e634e0(param_1,param_2,&local_1b8,6,CONCAT44(uVar11,DAT_1419f0728),&local_98);
    }
    local_c8 = 0xcb;
    FUN_140e9c1f0(0x3f800000);
  }
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b0);
  }
  if ((1 << ((byte)local_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c0);
  }
  _eh_vector_destructor_iterator_(local_188,0x10,10,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_d8;
  return param_3;
}

