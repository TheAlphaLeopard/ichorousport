// gml_Script_anon_4946_gml_Object_oEnemyDamsel_Create_0 @ 0x14097b460

longlong *
gml_Script_anon_4946_gml_Object_oEnemyDamsel_Create_0
          (longlong *param_1,ulonglong param_2,longlong *param_3,undefined4 param_4,
          undefined8 param_5)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong **pplVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  uint uVar11;
  undefined4 uVar12;
  uint uVar13;
  ulonglong uVar14;
  longlong *local_178;
  undefined4 uStack_170;
  uint uStack_16c;
  longlong *local_168;
  undefined4 local_160;
  undefined4 local_15c;
  longlong *local_158;
  undefined4 uStack_150;
  uint uStack_14c;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 local_13c;
  longlong *local_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined8 local_128;
  char *local_120;
  undefined4 local_118;
  undefined8 local_110;
  undefined4 local_104;
  longlong *local_100;
  undefined4 local_f8;
  uint local_f4;
  longlong *local_f0;
  undefined4 local_e8;
  uint local_e4;
  longlong *local_e0;
  undefined4 local_d8;
  uint local_d4;
  longlong *local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  byte local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 *local_78;
  uint local_70 [2];
  undefined8 *local_68;
  
  local_120 = "gml_Script_anon@3890@gml_Object_oEnemyDamsel_Create_0";
  local_128 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_128;
  local_118 = 0xad;
  FUN_140041df0(local_70,param_4,1,param_5);
  uVar12 = 1;
  _eh_vector_constructor_iterator_(&local_98,0x10,1,FUN_1400424d0,FUN_140041b30);
  uVar11 = 0xffffff;
  local_d4 = 0xffffff;
  local_e0 = (longlong *)0x0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_104 = 0xffffff;
  local_110 = 0;
  local_e4 = 0xffffff;
  local_f0 = (longlong *)0x0;
  local_12c = 0xffffff;
  local_138 = (longlong *)0x0;
  local_ac = 0xffffff;
  local_b8 = 0;
  local_f4 = 0xffffff;
  local_100 = (longlong *)0x0;
  local_7c = 0xffffff;
  local_88 = 0;
  local_13c = 0;
  uVar13 = 0;
  local_148 = 0;
  puVar1 = (undefined4 *)((longlong)param_3 + 0xc);
  *puVar1 = 5;
  *param_3 = 0;
  local_118 = 0xad;
  puVar10 = &DAT_1419df7b0;
  if ((int)local_70[0] < 1) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)*local_68;
  }
  iVar3 = FUN_140e851f0(puVar4,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar3 == 0) {
    local_118 = 0xad;
    puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f0818);
    if ((int)local_70[0] < 1) {
      puVar7 = &DAT_1419df7b0;
    }
    else {
      puVar7 = (undefined8 *)*local_68;
    }
    if (puVar4 != puVar7) {
      local_158 = (longlong *)*puVar4;
      uStack_150 = *(undefined4 *)(puVar4 + 1);
      uStack_14c = *(uint *)((longlong)puVar4 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar7);
      }
      FUN_140041b80(puVar7,&local_158);
    }
  }
  local_118 = 0xae;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_148 = 0;
  local_140 = 0;
  local_13c = 5;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f440);
  if (puVar4 != &local_98) {
    local_158 = (longlong *)*puVar4;
    uStack_150 = *(undefined4 *)(puVar4 + 1);
    uStack_14c = *(uint *)((longlong)puVar4 + 0xc);
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    FUN_140041b80(&local_98,&local_158);
  }
  local_78 = &local_98;
  uVar5 = FUN_140e634e0(param_1,param_2,&local_148,1,CONCAT44(uVar12,DAT_141a02ef8),&local_78);
  cVar2 = FUN_140e491e0(uVar5);
  if (cVar2 == '\0') {
    local_118 = 0xae;
  }
  else {
    local_118 = 0xb0;
    if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    local_148 = 0;
    local_140 = 0;
    local_13c = 5;
    uVar9 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f0968);
    uVar14 = 0;
    pplVar6 = (longlong **)FUN_140e63610(param_1,param_2,&local_148,0,uVar9,0);
    plVar8 = (longlong *)0x0;
    if (pplVar6 != &local_e0) {
      local_158 = *pplVar6;
      uStack_150 = *(undefined4 *)(pplVar6 + 1);
      uStack_14c = *(uint *)((longlong)pplVar6 + 0xc);
      FUN_140041b80(&local_e0,&local_158);
      plVar8 = local_e0;
      uVar11 = local_d4;
    }
    local_118 = 0xb1;
    local_15c = 6;
    local_168 = param_1;
    FUN_140e87440(&local_168,DAT_1419fe158,0x80000000,&local_a8,uVar9 & 0xffffffffffffff00,
                  uVar14 & 0xffffffffffffff00);
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    uStack_170 = local_d8;
    uStack_16c = uVar11;
    if ((1 << ((byte)uVar11 & 0x1f) & 0x46U) == 0) {
      local_178 = plVar8;
    }
    else {
      FUN_1400419b0(&local_178,&local_e0);
    }
    FUN_1400462a0(&local_178,&local_a8);
    local_158 = local_178;
    uStack_150 = uStack_170;
    uStack_14c = uStack_16c;
    if ((1 << ((byte)local_104 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_110);
    }
    FUN_140041b80(&local_110,&local_158);
    if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    local_118 = 0xb2;
    local_15c = 0;
    local_168 = (longlong *)0x0;
    iVar3 = FUN_140e851f0(&local_110,&local_168,DAT_141955260,1);
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    if (iVar3 == -2 || 0 < iVar3) {
      local_118 = 0xb4;
      uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f440);
      plVar8 = param_1;
      uVar9 = param_2;
      FUN_140e87170(uVar5,DAT_1419fe158,0x80000000,&local_f0,param_1,param_2);
      local_15c = 6;
      local_168 = param_1;
      FUN_140e87440(&local_168,DAT_1419fe158,0x80000000,&local_a8,
                    (ulonglong)plVar8 & 0xffffffffffffff00,uVar9 & 0xffffffffffffff00);
      if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      uStack_16c = local_e4;
      uStack_170 = local_e8;
      if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) == 0) {
        local_178 = local_f0;
      }
      else {
        FUN_1400419b0(&local_178,&local_f0);
      }
      FUN_1400462a0(&local_178,&local_a8);
      local_158 = local_178;
      uStack_150 = uStack_170;
      uStack_14c = uStack_16c;
      if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      FUN_140041b80(&local_138,&local_158);
      if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      local_118 = 0xb5;
      local_15c = 0;
      local_168 = (longlong *)0x0;
      iVar3 = FUN_140e851f0(&local_138,&local_168,DAT_141955260,1);
      if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      if ((iVar3 == -2 || -1 < iVar3) &&
         ((iVar3 = FUN_140e851f0(&local_138,&local_110,DAT_141955260,1), iVar3 == -2 || (iVar3 < 1))
         )) {
        local_118 = 0xb7;
        local_15c = local_12c;
        local_160 = local_130;
        if ((1 << ((byte)local_12c & 0x1f) & 0x46U) == 0) {
          local_168 = local_138;
        }
        else {
          FUN_1400419b0(&local_168,&local_138);
        }
        FUN_140046500(&local_168,&local_110);
        if (0 < (int)local_70[0]) {
          puVar10 = (undefined8 *)*local_68;
        }
        uStack_16c = *(undefined4 *)((longlong)puVar10 + 0xc);
        uStack_170 = *(undefined4 *)(puVar10 + 1);
        if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) == 0) {
          local_178 = (longlong *)*puVar10;
        }
        else {
          FUN_1400419b0(&local_178,puVar10);
        }
        uStack_14c = 0;
        local_158 = (longlong *)0x3fe0000000000000;
        FUN_140042560(&local_178,&local_158);
        if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_158);
        }
        uStack_bc = uStack_16c;
        uStack_c0 = uStack_170;
        if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) == 0) {
          local_c8 = local_178;
        }
        else {
          FUN_1400419b0(&local_c8,&local_178);
        }
        FUN_140042560(&local_c8,&local_168);
        local_158 = local_c8;
        uStack_150 = uStack_c0;
        uStack_14c = uStack_bc;
        if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_b8);
        }
        FUN_140041b80(&local_b8,&local_158);
        if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_c8);
        }
        if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_178);
        }
        if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_168);
        }
        local_118 = 0xb8;
        uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f440);
        plVar8 = param_1;
        FUN_140e87170(uVar5,DAT_1419fe0e8,0x80000000,&local_100,param_1,param_2);
        uStack_14c = 6;
        local_158 = param_1;
        FUN_140e87440(&local_158,DAT_1419fe0e8,0x80000000,&local_88,
                      (ulonglong)plVar8 & 0xffffffffffffff00,param_2 & 0xffffffffffffff00);
        if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_158);
        }
        uStack_16c = local_f4;
        uStack_170 = local_f8;
        if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) == 0) {
          local_178 = local_100;
        }
        else {
          FUN_1400419b0(&local_178,&local_100);
        }
        FUN_1400462a0(&local_178,&local_88);
        if ((uStack_16c & 0xffffff) == 0) {
          uVar12 = SUB84(local_178,0);
        }
        else {
          uVar12 = FUN_140e4b060(&local_178);
        }
        local_158 = (longlong *)FUN_140e78d00(uVar12);
        uStack_14c = 0;
        iVar3 = FUN_140e851f0(&local_158,&local_b8,DAT_141955260,1);
        if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_158);
        }
        if ((1 << ((byte)*puVar1 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(param_3);
        }
        *puVar1 = 0xd;
        if (iVar3 != -2 && iVar3 < 1) {
          uVar13 = 0x3ff00000;
        }
        *param_3 = (ulonglong)uVar13 << 0x20;
        if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_178);
        }
        goto LAB_14097bdf3;
      }
      local_118 = 0xb5;
    }
    else {
      local_118 = 0xb2;
    }
  }
  *puVar1 = 0xd;
  *param_3 = 0;
LAB_14097bdf3:
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_100);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f0);
  }
  if ((1 << ((byte)local_104 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_110);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)uVar11 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e0);
  }
  _eh_vector_destructor_iterator_(&local_98,0x10,1,FUN_140041b30);
  if (0 < (int)local_70[0]) {
    uVar9 = (ulonglong)local_70[0];
    puVar10 = local_68;
    do {
      puVar4 = (undefined8 *)*puVar10;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      *puVar4 = 0;
      *(undefined4 *)(puVar4 + 1) = 0;
      *(undefined4 *)((longlong)puVar4 + 0xc) = 5;
      puVar10 = puVar10 + 1;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  FUN_140e4cd60(local_68);
  DAT_141dc7a50 = (undefined8 *)local_128;
  return param_3;
}

