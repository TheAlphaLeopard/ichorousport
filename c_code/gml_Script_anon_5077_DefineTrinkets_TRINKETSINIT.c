// gml_Script_anon_5077_DefineTrinkets_TRINKETSINIT @ 0x1405e2790

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong *
gml_Script_anon_5077_DefineTrinkets_TRINKETSINIT
          (undefined8 param_1,undefined8 param_2,longlong *param_3,undefined4 param_4,
          undefined8 param_5)

{
  undefined8 *puVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong *plVar12;
  double dVar13;
  uint local_res20;
  undefined4 uVar16;
  longlong **pplVar14;
  ulonglong uVar15;
  longlong **pplVar17;
  ulonglong uVar18;
  undefined8 local_208;
  undefined4 local_200;
  undefined4 local_1fc;
  longlong local_1f8;
  undefined8 uStack_1f0;
  longlong local_1e8;
  ulonglong uStack_1e0;
  longlong local_1d8;
  byte local_1cc;
  longlong local_1c8;
  byte local_1bc;
  undefined1 local_1b8 [12];
  byte local_1ac;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined4 local_19c;
  double local_198;
  uint local_18c;
  undefined8 local_188;
  char *local_180;
  undefined4 local_178;
  longlong *local_170;
  longlong *local_168;
  undefined1 *local_160;
  double local_158;
  uint local_14c;
  longlong local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  longlong local_138;
  uint uStack_12c;
  longlong local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  longlong local_118;
  undefined4 local_10c;
  longlong local_108;
  undefined4 local_fc;
  longlong local_f8;
  undefined4 local_ec;
  undefined4 local_e8;
  longlong *local_e0;
  longlong local_d8;
  uint uStack_cc;
  longlong local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  longlong local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  double local_88;
  undefined4 local_7c;
  uint local_78 [2];
  undefined8 *local_70;
  
  local_e8 = 0;
  local_180 = "gml_Script_pick_trinket";
  local_188 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_188;
  local_178 = 0x88;
  FUN_140041df0(local_78,param_4,2,param_5);
  _eh_vector_constructor_iterator_(&local_1d8,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_e0 = (longlong *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a57320);
  local_res20 = 0xffffff;
  uStack_cc = 0xffffff;
  local_d8 = 0;
  uStack_12c = 0xffffff;
  local_138 = 0;
  local_18c = 0xffffff;
  local_198 = 0.0;
  local_fc = 0xffffff;
  local_108 = 0;
  local_10c = 0xffffff;
  local_118 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  uStack_11c = 0xffffff;
  local_128 = 0;
  local_14c = 0xffffff;
  local_158 = 0.0;
  uStack_ac = 0xffffff;
  local_b8 = 0;
  local_ec = 0xffffff;
  local_f8 = 0;
  uStack_bc = 0xffffff;
  local_c8 = 0;
  local_19c = 0;
  local_1a8 = 0;
  local_1fc = 0;
  local_208 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_178 = 0x88;
  plVar12 = &DAT_1419df7b0;
  uVar11 = (ulonglong)local_78[0];
  if ((int)local_78[0] < 2) {
    puVar9 = &DAT_1419df7b0;
  }
  else {
    puVar9 = (undefined8 *)local_70[1];
  }
  iVar4 = FUN_140e851f0(puVar9,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar4 == 0) {
    local_178 = 0x88;
    if ((int)local_78[0] < 1) {
      plVar7 = &DAT_1419df7b0;
    }
    else {
      plVar7 = (longlong *)*local_70;
    }
    if ((int)local_78[0] < 2) {
      plVar6 = &DAT_1419df7b0;
    }
    else {
      plVar6 = (longlong *)local_70[1];
    }
    if (plVar7 != plVar6) {
      local_1f8 = *plVar7;
      uStack_1f0 = plVar7[1];
      if ((1 << ((byte)*(undefined4 *)((longlong)plVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(plVar6);
      }
      FUN_140041b80(plVar6,&local_1f8);
    }
  }
  local_178 = 0x8a;
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  local_1a8 = 0;
  local_1a0 = 0;
  local_19c = 5;
  if ((int)local_78[0] < 1) {
    plVar7 = &DAT_1419df7b0;
LAB_1405e29c0:
    local_1f8 = *plVar7;
    uStack_1f0 = plVar7[1];
    if ((1 << ((byte)_local_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    FUN_140041b80(&local_1d8,&local_1f8);
  }
  else {
    plVar7 = (longlong *)*local_70;
    if (plVar7 != &local_1d8) goto LAB_1405e29c0;
  }
  local_170 = &local_1d8;
  local_1f8 = _DAT_141dc6760;
  uStack_1f0 = uRam0000000141dc6768;
  if ((1 << ((byte)_local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  FUN_140041b80(&local_1c8,&local_1f8);
  local_168 = &local_1c8;
  local_1f8 = _DAT_1419e6a50;
  uStack_1f0 = uRam00000001419e6a58;
  if ((1 << ((byte)_local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1b8);
  }
  FUN_140041b80(local_1b8,&local_1f8);
  local_160 = local_1b8;
  if ((int)local_78[0] < 1) {
    plVar7 = &DAT_1419df7b0;
  }
  else {
    plVar7 = (longlong *)*local_70;
  }
  plVar6 = (longlong *)gml_RoomCC_rmGravePit01_0_Create(param_1,param_2,&local_1a8,3,&local_170);
  if (plVar6 != plVar7) {
    local_1f8 = *plVar6;
    uStack_1f0 = plVar6[1];
    if ((1 << ((byte)*(undefined4 *)((longlong)plVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(plVar7);
    }
    FUN_140041b80(plVar7,&local_1f8);
  }
  local_178 = 0x8b;
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  local_1a8 = 0;
  local_1a0 = 0;
  local_19c = 5;
  if ((int)local_78[0] < 2) {
    plVar7 = &DAT_1419df7b0;
LAB_1405e2b2a:
    local_1f8 = *plVar7;
    uStack_1f0 = plVar7[1];
    if ((1 << ((byte)_local_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    FUN_140041b80(&local_1d8,&local_1f8);
  }
  else {
    plVar7 = (longlong *)local_70[1];
    if (plVar7 != &local_1d8) goto LAB_1405e2b2a;
  }
  local_170 = &local_1d8;
  local_1f8 = _DAT_141dc6760;
  uStack_1f0 = uRam0000000141dc6768;
  if ((1 << ((byte)_local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  FUN_140041b80(&local_1c8,&local_1f8);
  local_168 = &local_1c8;
  local_1f8 = _DAT_1419e6a50;
  uStack_1f0 = uRam00000001419e6a58;
  if ((1 << ((byte)_local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1b8);
  }
  FUN_140041b80(local_1b8,&local_1f8);
  local_160 = local_1b8;
  if ((int)local_78[0] < 2) {
    plVar7 = &DAT_1419df7b0;
  }
  else {
    plVar7 = (longlong *)local_70[1];
  }
  pplVar14 = &local_170;
  plVar6 = (longlong *)gml_RoomCC_rmGravePit01_0_Create(param_1,param_2,&local_1a8,3,pplVar14);
  uVar16 = (undefined4)((ulonglong)pplVar14 >> 0x20);
  if (plVar6 != plVar7) {
    local_1f8 = *plVar6;
    uStack_1f0 = plVar6[1];
    if ((1 << ((byte)*(undefined4 *)((longlong)plVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(plVar7);
    }
    FUN_140041b80(plVar7,&local_1f8);
  }
  local_178 = 0x8d;
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  local_1a8 = 0;
  local_1a0 = 0;
  local_19c = 5;
  if (local_e0 != &local_1d8) {
    local_1f8 = *local_e0;
    uStack_1f0 = local_e0[1];
    if ((1 << ((byte)_local_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    FUN_140041b80(&local_1d8,&local_1f8);
  }
  local_170 = &local_1d8;
  pplVar17 = &local_170;
  pplVar14 = (longlong **)CONCAT44(uVar16,DAT_141a0aa48);
  plVar7 = (longlong *)FUN_140e634e0(param_1,param_2,&local_1a8,1,pplVar14,pplVar17);
  lVar10 = 0;
  if (plVar7 != &local_d8) {
    local_1f8 = *plVar7;
    uStack_1f0 = plVar7[1];
    FUN_140041b80(&local_d8,&local_1f8);
    local_res20 = uStack_cc;
    lVar10 = local_d8;
  }
  local_178 = 0x8e;
  plVar7 = (longlong *)FUN_140e8da20(&local_1a8,param_1,0);
  if (plVar7 != &local_138) {
    local_1f8 = *plVar7;
    uStack_1f0 = plVar7[1];
    if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    FUN_140041b80(&local_138,&local_1f8);
  }
  local_178 = 0x90;
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  local_18c = 0;
  local_198 = 0.0;
  bVar2 = true;
LAB_1405e2db0:
  if (!bVar2) {
    local_178 = 0x90;
    uVar5 = local_18c & 0xffffff;
    if (uVar5 != 0) {
      if (uVar5 != 1) {
        if (uVar5 == 7) {
          local_198 = (double)CONCAT44(local_198._4_4_,local_198._0_4_ + 1);
        }
        else if (uVar5 == 10) {
          local_198 = (double)((longlong)local_198 + 1);
        }
        else {
          if (uVar5 == 0xd) {
            local_18c = 0;
            goto LAB_1405e2e08;
          }
          FUN_140042910(&DAT_14172c3d8,&local_198,&local_198);
        }
        goto LAB_1405e2e11;
      }
      local_198 = (double)FUN_140e4b060(&local_198);
      local_18c = 0;
    }
LAB_1405e2e08:
    local_198 = local_198 + 1.0;
  }
LAB_1405e2e11:
  bVar2 = false;
  iVar4 = 0;
  if ((local_res20 == 2) && (lVar10 != 0)) {
    iVar4 = *(int *)(lVar10 + 0x24);
  }
  local_7c = 0;
  local_88 = (double)iVar4;
  iVar4 = FUN_140e851f0(&local_198,&local_88,DAT_141955260,1);
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if (iVar4 != -2 && iVar4 < 0) {
    local_178 = 0x92;
    iVar4 = FUN_140e4a740(&local_198);
    uVar16 = (undefined4)((ulonglong)pplVar14 >> 0x20);
    plVar7 = (longlong *)0x0;
    if (((local_res20 & 0xffffff) == 2) && (lVar10 != 0)) {
      if ((iVar4 < 0) || (*(int *)(lVar10 + 0x24) <= iVar4)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar4,
                      *(undefined4 *)(lVar10 + 0x24));
      }
      else {
        plVar7 = (longlong *)((longlong)iVar4 * 0x10 + *(longlong *)(lVar10 + 8));
      }
      if (plVar7 != &local_108) goto LAB_1405e2f1b;
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
      plVar7 = &local_d8;
LAB_1405e2f1b:
      local_1e8 = *plVar7;
      uStack_1e0 = plVar7[1];
      if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      FUN_140041b80(&local_108,&local_1e8);
    }
    local_178 = 0x93;
    if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_208);
    }
    local_208 = 0;
    local_200 = 0;
    local_1fc = 5;
    if (local_e0 != &local_1d8) {
      local_1e8 = *local_e0;
      uStack_1e0 = local_e0[1];
      if ((1 << ((byte)_local_1cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1d8);
      }
      FUN_140041b80(&local_1d8,&local_1e8);
    }
    local_170 = &local_1d8;
    local_168 = &local_108;
    pplVar17 = &local_170;
    uVar15 = CONCAT44(uVar16,DAT_141a01138);
    plVar7 = (longlong *)FUN_140e634e0(param_1,param_2,&local_208,2,uVar15,pplVar17);
    if (plVar7 != &local_118) {
      local_1e8 = *plVar7;
      uStack_1e0 = plVar7[1];
      if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      FUN_140041b80(&local_118,&local_1e8);
    }
    local_178 = 0x95;
    pplVar17 = (longlong **)((ulonglong)pplVar17 & 0xffffffffffffff00);
    pplVar14 = (longlong **)(uVar15 & 0xffffffffffffff00);
    FUN_140e87440(&local_118,DAT_141a0ab58,0x80000000,&local_98,pplVar14,pplVar17);
    uStack_1f0 = uStack_1f0 & 0xffffffff;
    local_1f8 = 0;
    iVar4 = FUN_140e851f0(&local_98,&local_1f8,DAT_141955260,0);
    if ((1 << ((byte)(uStack_1f0 >> 0x20) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f8);
    }
    if (iVar4 == 0) {
      local_178 = 0x95;
    }
    else {
      local_178 = 0x96;
      pplVar17 = (longlong **)((ulonglong)pplVar17 & 0xffffffffffffff00);
      pplVar14 = (longlong **)((ulonglong)pplVar14 & 0xffffffffffffff00);
      FUN_140e87440(&local_118,DAT_141a0a918,0x80000000,&local_a8,pplVar14,pplVar17);
      if ((int)local_78[0] < 1) {
        puVar9 = &DAT_1419df7b0;
      }
      else {
        puVar9 = (undefined8 *)*local_70;
      }
      iVar4 = FUN_140e851f0(&local_a8,puVar9,DAT_141955260,0);
      if (iVar4 == 0) {
        local_178 = 0x97;
        uStack_13c = DAT_141dd4d94;
        uStack_140 = DAT_141dd4d90;
        if ((1 << ((byte)DAT_141dd4d94 & 0x1f) & 0x46U) == 0) {
          local_148 = DAT_141dd4d88;
        }
        else {
          FUN_1400419b0(&local_148,&DAT_141dd4d88);
        }
        iVar4 = FUN_140e851f0(&local_108,&local_148,DAT_141955260,0);
        if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_148);
        }
        if (iVar4 == 0) {
          local_178 = 0x97;
        }
        else {
          local_178 = 0x98;
          if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_208);
          }
          local_208 = 0;
          local_200 = 0;
          local_1fc = 5;
          local_1e8 = _DAT_141dd48f8;
          uStack_1e0 = lRam0000000141dd4900;
          if ((1 << ((byte)_local_1cc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1d8);
          }
          FUN_140041b80(&local_1d8,&local_1e8);
          local_170 = &local_1d8;
          local_168 = &local_108;
          pplVar14 = &local_170;
          uVar8 = gml_Script_rolled_list_clear(param_1,param_2,&local_208,2,pplVar14);
          cVar3 = FUN_140e491e0(uVar8);
          if (cVar3 == '\0') {
            local_178 = 0x9a;
            if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_208);
            }
            local_208 = 0;
            local_200 = 0;
            local_1fc = 5;
            local_168 = &local_118;
            pplVar17 = &local_170;
            pplVar14 = (longlong **)CONCAT44((int)((ulonglong)pplVar14 >> 0x20),DAT_1419fe568);
            local_170 = &local_138;
            FUN_140e634e0(param_1,param_2,&local_208,2,pplVar14,pplVar17);
          }
          else {
            local_178 = 0x98;
          }
        }
      }
      else {
        local_178 = 0x96;
      }
    }
    goto LAB_1405e2db0;
  }
  if (((uStack_12c != 2) || (local_138 == 0)) || (*(int *)(local_138 + 0x24) < 1)) {
    local_178 = 0xa5;
    if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_208);
    }
    local_208 = 0;
    local_200 = 0;
    local_1fc = 5;
    if ((int)local_78[0] < 1) {
      plVar7 = &DAT_1419df7b0;
    }
    else {
      plVar7 = (longlong *)*local_70;
    }
    uStack_13c = *(undefined4 *)((longlong)plVar7 + 0xc);
    uStack_140 = (undefined4)plVar7[1];
    if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) == 0) {
      local_148 = *plVar7;
    }
    else {
      FUN_1400419b0(&local_148);
    }
    local_e8 = 1;
    uStack_1f0 = CONCAT44(7,(undefined4)uStack_1f0);
    local_1f8 = CONCAT44(local_1f8._4_4_,1);
    FUN_1400462a0(&local_148,&local_1f8);
    if ((1 << ((byte)(uStack_1f0 >> 0x20) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f8);
    }
    uStack_1e0 = CONCAT44(uStack_13c,uStack_140);
    local_1e8 = local_148;
    if ((1 << (local_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    FUN_140041b80(&local_1d8,&local_1e8);
    if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    local_170 = &local_1d8;
    local_1e8 = _DAT_141dc6760;
    uStack_1e0 = uRam0000000141dc6768;
    if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    FUN_140041b80(&local_1c8,&local_1e8);
    local_168 = &local_1c8;
    local_1e8 = _DAT_1419e6a50;
    uStack_1e0 = uRam00000001419e6a58;
    if ((1 << (local_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1b8);
    }
    FUN_140041b80(local_1b8,&local_1e8);
    local_160 = local_1b8;
    pplVar14 = &local_170;
    plVar7 = (longlong *)gml_RoomCC_rmGravePit01_0_Create(param_1,param_2,&local_208,3,pplVar14);
    if (plVar7 != &local_f8) {
      local_1e8 = *plVar7;
      uStack_1e0 = plVar7[1];
      if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f8);
      }
      FUN_140041b80(&local_f8,&local_1e8);
    }
    local_178 = 0xa7;
    if ((int)local_78[0] < 2) {
      puVar9 = &DAT_1419df7b0;
    }
    else {
      puVar9 = (undefined8 *)local_70[1];
    }
    iVar4 = FUN_140e851f0(&local_f8,puVar9,DAT_141955260,0);
    if (iVar4 == 0) {
      local_178 = 0xa8;
      if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_208);
      }
      local_208 = 0;
      local_200 = 0;
      local_1fc = 5;
      uVar15 = (ulonglong)pplVar14 & 0xffffffffffffff00;
      FUN_140e87440(local_e0,DAT_1419ffc58,0x80000000,&local_c8,uVar15,
                    (ulonglong)pplVar17 & 0xffffffffffffff00);
      uVar16 = (undefined4)(uVar15 >> 0x20);
      uStack_1e0 = CONCAT44(uStack_bc,uStack_c0);
      local_1e8 = local_c8;
      if ((1 << (local_1cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1d8);
      }
      FUN_140041b80(&local_1d8,&local_1e8);
      local_170 = &local_1d8;
      plVar12 = (longlong *)
                FUN_140e634e0(param_1,param_2,&local_208,1,CONCAT44(uVar16,DAT_1419fd0c8),&local_170
                             );
      if (plVar12 != param_3) {
        local_1e8 = *plVar12;
        uStack_1e0 = plVar12[1];
        if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(param_3);
        }
        FUN_140041b80(param_3,&local_1e8);
      }
    }
    else {
      local_178 = 0xaa;
      if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_208);
      }
      local_208 = 0;
      local_200 = 0;
      local_1fc = 5;
      local_170 = &local_f8;
      if (((int)local_78[0] < 2) || (plVar12 = (longlong *)local_70[1], plVar12 != &local_1c8)) {
        local_1e8 = *plVar12;
        uStack_1e0 = plVar12[1];
        if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1c8);
        }
        FUN_140041b80(&local_1c8,&local_1e8);
      }
      local_168 = &local_1c8;
      plVar12 = (longlong *)
                gml_Script_anon_5077_DefineTrinkets_TRINKETSINIT
                          (param_1,param_2,&local_208,2,&local_170);
      if (plVar12 != param_3) {
        local_1e8 = *plVar12;
        uStack_1e0 = plVar12[1];
        if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(param_3);
        }
        FUN_140041b80(param_3,&local_1e8);
      }
    }
    goto LAB_1405e39b6;
  }
  local_178 = 0x9f;
  dVar13 = (double)FUN_140e78f00((longlong)(*(int *)(local_138 + 0x24) + -1));
  iVar4 = (int)dVar13;
  plVar12 = (longlong *)0x0;
  if (((uStack_12c & 0xffffff) == 2) && (local_138 != 0)) {
    if ((iVar4 < 0) || (*(int *)(local_138 + 0x24) <= iVar4)) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar4,
                    *(undefined4 *)(local_138 + 0x24));
    }
    else {
      plVar12 = (longlong *)((longlong)iVar4 * 0x10 + *(longlong *)(local_138 + 8));
    }
    if (plVar12 != &local_128) goto LAB_1405e3380;
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
    plVar12 = &local_138;
LAB_1405e3380:
    local_1e8 = *plVar12;
    uStack_1e0 = plVar12[1];
    if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_1e8);
  }
  local_178 = 0xa0;
  uVar18 = (ulonglong)pplVar17 & 0xffffffffffffff00;
  uVar15 = (ulonglong)pplVar14 & 0xffffffffffffff00;
  FUN_140e87440(&local_128,DAT_141a0ab58,0x80000000,&local_158,uVar15,uVar18);
  uVar5 = local_14c & 0xffffff;
  if (uVar5 == 0) {
LAB_1405e341e:
    local_158 = local_158 + -1.0;
  }
  else if (uVar5 == 1) {
    local_158 = (double)FUN_140e4b060(&local_158);
    local_158 = local_158 - 1.0;
    local_14c = 0;
  }
  else if (uVar5 == 7) {
    local_158 = (double)CONCAT44(local_158._4_4_,local_158._0_4_ + -1);
  }
  else if (uVar5 == 10) {
    local_158 = (double)((longlong)local_158 + -1);
  }
  else {
    if (uVar5 == 0xd) {
      local_14c = 0;
      goto LAB_1405e341e;
    }
    FUN_140042910(&DAT_14172c450,&local_158,&local_158);
  }
  FUN_140e87930(&local_128,DAT_141a0ab58,0x80000000,&local_158);
  local_178 = 0xa1;
  if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  local_208 = 0;
  local_200 = 0;
  local_1fc = 5;
  FUN_140e87440(&local_128,DAT_141a0a8a8,0x80000000,&local_b8,uVar15 & 0xffffffffffffff00,
                uVar18 & 0xffffffffffffff00);
  local_1e8 = _DAT_141dd48f8;
  uStack_1e0 = lRam0000000141dd4900;
  if ((1 << (local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  FUN_140041b80(&local_1d8,&local_1e8);
  local_170 = &local_1d8;
  uStack_1e0 = CONCAT44(uStack_ac,uStack_b0);
  local_1e8 = local_b8;
  if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  FUN_140041b80(&local_1c8,&local_1e8);
  local_168 = &local_1c8;
  gml_Script_rolled_list_new_run(param_1,param_2,&local_208,2,&local_170);
  local_178 = 0xa2;
  if (&local_128 != param_3) {
    uStack_1e0 = CONCAT44(uStack_11c,uStack_120);
    local_1e8 = local_128;
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_1e8);
  }
LAB_1405e39b6:
  if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_res20 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  _eh_vector_destructor_iterator_(&local_1d8,0x10,3,FUN_140041b30);
  if (0 < (int)local_78[0]) {
    puVar9 = local_70;
    do {
      puVar1 = (undefined8 *)*puVar9;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      *puVar1 = 0;
      *(undefined4 *)(puVar1 + 1) = 0;
      *(undefined4 *)((longlong)puVar1 + 0xc) = 5;
      puVar9 = puVar9 + 1;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  FUN_140e4cd60(local_70);
  DAT_141dc7a50 = (undefined8 *)local_188;
  return param_3;
}

