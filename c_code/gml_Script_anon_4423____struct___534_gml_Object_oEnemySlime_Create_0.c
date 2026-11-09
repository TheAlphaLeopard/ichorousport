// gml_Script_anon_4423____struct___534_gml_Object_oEnemySlime_Create_0 @ 0x140a79bd0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_4423____struct___534_gml_Object_oEnemySlime_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  ulonglong uVar11;
  undefined4 uVar13;
  undefined8 **ppuVar12;
  undefined8 **ppuVar14;
  ulonglong uVar15;
  undefined8 local_188;
  undefined4 local_180;
  undefined4 local_17c;
  undefined8 local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  double local_168;
  uint local_15c;
  undefined8 local_158;
  byte local_14c;
  undefined4 local_148 [3];
  byte local_13c;
  undefined1 local_138 [12];
  byte local_12c;
  undefined8 local_128;
  char *local_120;
  undefined4 local_118;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 *local_e8;
  undefined4 *local_e0;
  undefined1 *local_d8;
  undefined8 local_d0;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined4 local_94;
  undefined8 local_90;
  undefined4 local_84;
  undefined8 local_80;
  undefined4 local_74;
  undefined8 local_70;
  undefined4 local_64;
  undefined8 *local_60;
  
  local_120 = "gml_Script_anon@3864@___struct___533@gml_Object_oEnemySlime_Create_0";
  local_128 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_128;
  local_118 = 0xdc;
  uVar13 = 1;
  _eh_vector_constructor_iterator_(&local_158,0x10,3,FUN_1400424d0,FUN_140041b30);
  puVar4 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_64 = 0xffffff;
  local_70 = 0;
  local_74 = 0xffffff;
  local_80 = 0;
  local_a4 = 0xffffff;
  local_b0 = 0;
  local_84 = 0xffffff;
  local_90 = 0;
  local_94 = 0xffffff;
  local_a0 = 0;
  local_b4 = 0xffffff;
  local_c0 = 0;
  local_c4 = 0xffffff;
  local_d0 = 0;
  local_15c = 0xffffff;
  local_168 = 0.0;
  local_17c = 0;
  local_188 = 0;
  local_ec = 0;
  local_f8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_118 = 0xde;
  local_60 = puVar4;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f440);
  if (puVar5 != &local_158) {
    local_178 = *puVar5;
    uStack_170 = *(undefined4 *)(puVar5 + 1);
    uStack_16c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    FUN_140041b80(&local_158,&local_178);
  }
  local_e8 = &local_158;
  ppuVar14 = &local_e8;
  uVar6 = FUN_140e634e0(param_1,param_2,&local_188,1,CONCAT44(uVar13,DAT_141a02ef8),ppuVar14);
  cVar1 = FUN_140e491e0(uVar6);
  if (cVar1 == '\0') {
    local_118 = 0xdf;
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    local_f8 = 0;
    local_f0 = 0;
    local_ec = 5;
    puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f440);
    FUN_140e609c0(param_1);
    puVar7 = (undefined8 *)gml_Script_FracPos(param_1,param_2,&local_f8,0,0);
    if (puVar7 != puVar5) {
      local_178 = *puVar7;
      uStack_170 = *(undefined4 *)(puVar7 + 1);
      uStack_16c = *(undefined4 *)((longlong)puVar7 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar5);
      }
      FUN_140041b80(puVar5,&local_178);
    }
    FUN_140e60910(1);
  }
  local_118 = 0xe1;
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  local_188 = 0;
  local_180 = 0;
  local_17c = 5;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f230);
  puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f230);
  if (puVar5 != &local_158) {
    local_178 = *puVar5;
    uStack_170 = *(undefined4 *)(puVar5 + 1);
    uStack_16c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    FUN_140041b80(&local_158,&local_178);
  }
  local_e8 = &local_158;
  local_178 = CONCAT44(uRam0000000141dc6fc4,_DAT_141dc6fc0);
  uStack_170 = uRam0000000141dc6fc8;
  uStack_16c = uRam0000000141dc6fcc;
  if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_148);
  }
  FUN_140041b80(local_148,&local_178);
  local_e0 = local_148;
  local_178 = CONCAT44(uRam00000001419eb0c4,_DAT_1419eb0c0);
  uStack_170 = uRam00000001419eb0c8;
  uStack_16c = uRam00000001419eb0cc;
  if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_138);
  }
  FUN_140041b80(local_138,&local_178);
  local_d8 = local_138;
  FUN_140e609c0(param_1);
  ppuVar12 = &local_e8;
  puVar5 = (undefined8 *)gml_Script_arc(param_1,param_2,&local_188,3,ppuVar12);
  if (puVar5 != puVar7) {
    local_178 = *puVar5;
    uStack_170 = *(undefined4 *)(puVar5 + 1);
    uStack_16c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar7);
    }
    FUN_140041b80(puVar7,&local_178);
  }
  FUN_140e60910(1);
  local_118 = 0xe2;
  uVar6 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f500);
  uStack_16c = 0;
  local_178 = 0x3fc999999999999a;
  FUN_140042560(&local_178,puVar4);
  FUN_1400460e0(uVar6,&local_178);
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  local_118 = 0xe4;
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  local_188 = 0;
  local_180 = 0;
  local_17c = 5;
  uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57560);
  FUN_140e87440(uVar6,DAT_141a06298,0x80000000,&local_70,(ulonglong)ppuVar12 & 0xffffffffffffff00,
                (ulonglong)ppuVar14 & 0xffffffffffffff00);
  uVar6 = FUN_140069500(uVar6);
  uVar15 = 0;
  puVar5 = &local_70;
  FUN_140e63610(uVar6,param_2,&local_188,0,puVar5,0);
  local_118 = 0xe6;
  uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  uVar15 = uVar15 & 0xffffffffffffff00;
  uVar11 = (ulonglong)puVar5 & 0xffffffffffffff00;
  FUN_140e87440(uVar6,DAT_141a0a848,0x80000000,&local_80,uVar11,uVar15);
  uStack_16c = 0;
  local_178 = 0x4044000000000000;
  uVar2 = FUN_140e851f0(&local_80,&local_178,DAT_141955260,1);
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if (uVar2 < 0x80000000) {
    local_118 = 0xe8;
    uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57560);
    if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b0);
    }
    local_a4 = 0;
    local_b0 = 0x3ff0000000000000;
    FUN_140e87930(uVar6,DAT_141a0a748,0x80000000,&local_b0);
    local_118 = 0xe9;
    if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    local_188 = 0;
    local_180 = 0;
    local_17c = 5;
    uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5868);
    FUN_140e87440(uVar6,DAT_141a55540,0x80000000,&local_90,uVar11 & 0xffffffffffffff00,
                  uVar15 & 0xffffffffffffff00);
    local_178 = CONCAT44(uRam0000000141dd8f8c,_DAT_141dd8f88);
    uStack_170 = uRam0000000141dd8f90;
    uStack_16c = DAT_141dd8f94;
    if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    FUN_140041b80(&local_158,&local_178);
    local_e8 = &local_158;
    plVar8 = (longlong *)FUN_140069500(uVar6);
    uVar6 = 1;
    puVar5 = &local_90;
  }
  else {
    local_118 = 0xed;
    uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
    uVar15 = uVar15 & 0xffffffffffffff00;
    uVar11 = uVar11 & 0xffffffffffffff00;
    FUN_140e87440(uVar6,DAT_141a1f090,0x80000000,&local_a0,uVar11,uVar15);
    uStack_16c = 0;
    local_178 = 0;
    iVar3 = FUN_140e851f0(&local_a0,&local_178,DAT_141955260,1);
    if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    if (0 < iVar3) {
      uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a0a748);
      uStack_16c = 0;
      local_178 = 0x3fe0000000000000;
      iVar3 = FUN_140e851f0(uVar6,&local_178,DAT_141955260,1);
      if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      if (iVar3 != -2 && iVar3 < 1) {
        local_118 = 0xef;
        if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_188);
        }
        local_188 = 0;
        local_180 = 0;
        local_17c = 5;
        uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
        puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f090);
        puVar9 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f5a58);
        puVar10 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f090);
        FUN_140e87440(uVar6,DAT_141a1f090,0x80000000,&local_a0,uVar11 & 0xffffffffffffff00,
                      uVar15 & 0xffffffffffffff00);
        uStack_16c = *(undefined4 *)((longlong)puVar4 + 0xc);
        uStack_170 = *(undefined4 *)(puVar4 + 1);
        if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) == 0) {
          local_178 = *puVar4;
        }
        else {
          FUN_1400419b0(&local_178,puVar4);
        }
        FUN_1400460e0(&local_178,&local_a0);
        local_108 = (undefined4)local_178;
        uStack_104 = local_178._4_4_;
        uStack_100 = uStack_170;
        uStack_fc = uStack_16c;
        if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_158);
        }
        FUN_140041b80(&local_158,&local_108);
        if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_178);
        }
        local_e8 = &local_158;
        if (puVar9 != local_148) {
          local_108 = *puVar9;
          uStack_104 = puVar9[1];
          uStack_100 = puVar9[2];
          uStack_fc = puVar9[3];
          if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_148);
          }
          FUN_140041b80(local_148,&local_108);
        }
        local_e0 = local_148;
        FUN_140e609c0(param_1);
        puVar9 = (undefined4 *)FUN_140e79230(&local_188,2,&local_e8);
        if (puVar9 != puVar10) {
          local_108 = *puVar9;
          uStack_104 = puVar9[1];
          uStack_100 = puVar9[2];
          uStack_fc = puVar9[3];
          if ((1 << ((byte)puVar10[3] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar10);
          }
          FUN_140041b80(puVar10,&local_108);
        }
        FUN_140e60910(1);
        local_118 = 0xf0;
        uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
        if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_c0);
        }
        local_b4 = 0;
        local_c0 = 0;
        FUN_140e87930(uVar6,DAT_141a1f090,0x80000000,&local_c0);
        puVar4 = local_60;
      }
    }
    local_118 = 0xf2;
    if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    local_188 = 0;
    local_180 = 0;
    local_17c = 5;
    puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fd588);
    local_108 = _DAT_1419eb070;
    uStack_104 = uRam00000001419eb074;
    uStack_100 = uRam00000001419eb078;
    uStack_fc = uRam00000001419eb07c;
    if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    FUN_140041b80(&local_158,&local_108);
    local_e8 = &local_158;
    local_108 = _DAT_1419eb0f0;
    uStack_104 = uRam00000001419eb0f4;
    uStack_100 = uRam00000001419eb0f8;
    uStack_fc = uRam00000001419eb0fc;
    if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_148);
    }
    FUN_140041b80(local_148,&local_108);
    local_e0 = local_148;
    local_108 = _DAT_1419eb090;
    uStack_104 = uRam00000001419eb094;
    uStack_100 = uRam00000001419eb098;
    uStack_fc = uRam00000001419eb09c;
    if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_138);
    }
    FUN_140041b80(local_138,&local_108);
    local_d8 = local_138;
    uVar6 = 3;
    plVar8 = param_1;
  }
  FUN_140e63610(plVar8,param_2,&local_188,uVar6,puVar5,&local_e8);
  local_118 = 0xf5;
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  local_188 = 0;
  local_180 = 0;
  local_17c = 5;
  uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd398);
  FUN_140e63610(param_1,param_2,&local_188,0,uVar6,0);
  local_118 = 0xf6;
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  local_188 = 0;
  local_180 = 0;
  local_17c = 5;
  uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd4b8);
  FUN_140e63610(param_1,param_2,&local_188,0,uVar6,0);
  local_118 = 0xf7;
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  local_188 = 0;
  local_180 = 0;
  local_17c = 5;
  uVar11 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd418);
  uVar15 = 0;
  FUN_140e63610(param_1,param_2,&local_188,0,uVar11,0);
  local_118 = 0xf9;
  if (puVar4 != &local_d0) {
    local_108 = *(undefined4 *)puVar4;
    uStack_104 = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_100 = *(undefined4 *)(puVar4 + 1);
    uStack_fc = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d0);
    }
    FUN_140041b80(&local_d0,&local_108);
  }
  FUN_140e86fa0(param_1,DAT_141a0a818,0x80000000,&local_d0);
  local_118 = 0xfb;
  uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  FUN_140e87440(uVar6,DAT_141a0a848,0x80000000,&local_168,uVar11 & 0xffffffffffffff00,
                uVar15 & 0xffffffffffffff00);
  uVar2 = local_15c & 0xffffff;
  if (uVar2 != 0) {
    if (uVar2 == 1) {
      local_168 = (double)FUN_140e4b060(&local_168);
      local_15c = 0;
    }
    else {
      if (uVar2 == 7) {
        local_168 = (double)CONCAT44(local_168._4_4_,local_168._0_4_ + 1);
        goto LAB_140a7a86f;
      }
      if (uVar2 == 10) {
        local_168 = (double)((longlong)local_168 + 1);
        goto LAB_140a7a86f;
      }
      if (uVar2 != 0xd) {
        FUN_140042910(&DAT_14172c3d8,&local_168,&local_168);
        goto LAB_140a7a86f;
      }
      local_15c = 0;
    }
  }
  local_168 = local_168 + 1.0;
LAB_140a7a86f:
  FUN_140e87930(uVar6,DAT_141a0a848,0x80000000,&local_168);
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d0);
  }
  if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c0);
  }
  if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a0);
  }
  if ((1 << ((byte)local_84 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_90);
  }
  if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b0);
  }
  if ((1 << ((byte)local_74 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_80);
  }
  if ((1 << ((byte)local_64 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_70);
  }
  _eh_vector_destructor_iterator_(&local_158,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_128;
  return param_3;
}

