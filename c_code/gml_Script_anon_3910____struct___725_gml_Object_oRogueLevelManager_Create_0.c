// gml_Script_anon_3910____struct___725_gml_Object_oRogueLevelManager_Create_0 @ 0x140cb7e70

undefined8 *
gml_Script_anon_3910____struct___725_gml_Object_oRogueLevelManager_Create_0
          (longlong *param_1,ulonglong param_2,undefined8 *param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  double dVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong **pplVar15;
  longlong local_1f8;
  undefined4 local_1ec;
  double local_1e8;
  uint local_1dc;
  double local_1d8;
  uint local_1cc;
  undefined4 local_1c8;
  longlong local_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 local_1a8;
  char *local_1a0;
  undefined4 local_198;
  undefined8 local_190;
  undefined4 local_184;
  undefined8 local_178;
  undefined8 uStack_170;
  longlong local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 local_14c;
  longlong local_148 [2];
  undefined8 local_138;
  undefined4 local_12c;
  longlong local_128;
  longlong lStack_120;
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  longlong *local_108;
  longlong local_100;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined8 local_f0;
  undefined4 local_e4;
  undefined8 local_e0;
  undefined4 local_d4;
  undefined8 local_d0;
  uint local_c4;
  undefined8 local_b8;
  ulonglong uStack_b0;
  undefined8 local_a8;
  undefined4 local_9c;
  double local_98;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  
  local_1c8 = 0;
  local_1a0 = "gml_Script_anon@3222@___struct___725@gml_Object_oRogueLevelManager_Create_0";
  local_1a8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_1a8;
  local_198 = 0x88;
  uVar5 = 1;
  _eh_vector_constructor_iterator_(local_148,0x10,1,FUN_1400424d0,FUN_140041b30);
  uStack_10c = 0xffffff;
  local_118 = 0;
  local_1cc = 0xffffff;
  local_1d8 = 0.0;
  local_1ec = 0xffffff;
  local_1f8 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  uStack_15c = 0xffffff;
  local_168 = 0;
  local_12c = 0xffffff;
  local_138 = 0;
  local_184 = 0xffffff;
  local_190 = 0;
  local_1dc = 0xffffff;
  local_1e8 = 0.0;
  local_c4 = 0xffffff;
  local_d0 = 0;
  local_d4 = 0xffffff;
  local_e0 = 0;
  local_e4 = 0xffffff;
  local_f0 = 0;
  local_14c = 0;
  local_158 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_198 = 0x89;
  uStack_170 = CONCAT44(0xf,(undefined4)uStack_170);
  local_178 = 0x1000000000000ee;
  local_b8 = 0x1000000000000ee;
  uStack_b0 = uStack_170;
  if ((1 << ((byte)local_148[1]._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_148);
  }
  FUN_140041b80(local_148,&local_b8);
  local_108 = local_148;
  uVar6 = FUN_140e634e0(param_1,param_2,&local_158,1,CONCAT44(uVar5,DAT_141a02ef8),&local_108);
  cVar2 = FUN_140e491e0(uVar6);
  if (cVar2 == '\0') {
    local_198 = 0x89;
  }
  else {
    local_198 = 0x8b;
    uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f9e18);
    uStack_1ac = 0xf;
    local_1b8 = 0x1000000000000ee;
    plVar11 = param_1;
    uVar13 = param_2;
    FUN_140e87170(&local_1b8,DAT_141a0a828,0x80000000,&local_118,param_1,param_2);
    if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    iVar3 = FUN_140e851f0(&local_118,uVar6,DAT_141955260,0);
    if (iVar3 != 0) {
      local_198 = 0x8d;
      puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f9e18);
      uStack_1ac = 0xf;
      local_1b8 = 0x1000000000000ee;
      plVar11 = param_1;
      uVar13 = param_2;
      FUN_140e87170(&local_1b8,DAT_141a0a828,0x80000000,&local_118,param_1,param_2);
      if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1b8);
      }
      FUN_140e609c0(param_1);
      if (&local_118 != puVar7) {
        uStack_170 = CONCAT44(uStack_10c,uStack_110);
        local_178 = local_118;
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar7);
        }
        FUN_140041b80(puVar7,&local_178);
      }
      FUN_140e60910(1);
      local_198 = 0x8e;
      puVar7 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fa0c8);
      puVar8 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f9a68);
      FUN_140e609c0(param_1);
      if (puVar7 != puVar8) {
        local_178 = *puVar7;
        uStack_170 = puVar7[1];
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar8);
        }
        FUN_140041b80(puVar8,&local_178);
      }
      FUN_140e60910(1);
    }
    local_198 = 0x91;
    if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    local_1cc = 0;
    local_1d8 = 0.0;
    bVar1 = true;
LAB_140cb8244:
    iVar3 = 0;
    if (!bVar1) {
      local_198 = 0x91;
      uVar4 = local_1cc & 0xffffff;
      if (uVar4 != 0) {
        if (uVar4 != 1) {
          if (uVar4 == 7) {
            local_1d8 = (double)CONCAT44(local_1d8._4_4_,local_1d8._0_4_ + 1);
          }
          else if (uVar4 == 10) {
            local_1d8 = (double)((longlong)local_1d8 + 1);
          }
          else {
            if (uVar4 == 0xd) {
              local_1cc = 0;
              goto LAB_140cb829d;
            }
            FUN_140042910(&DAT_14172c3d8,&local_1d8,&local_1d8);
          }
          goto LAB_140cb82a7;
        }
        local_1d8 = (double)FUN_140e4b060(&local_1d8);
        local_1cc = 0;
      }
LAB_140cb829d:
      local_1d8 = local_1d8 + 1.0;
    }
LAB_140cb82a7:
    bVar1 = false;
    plVar9 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f9fd8);
    if ((*(int *)((longlong)plVar9 + 0xc) == 2) && (*plVar9 != 0)) {
      iVar3 = *(int *)(*plVar9 + 0x24);
    }
    local_8c = 0;
    local_98 = (double)iVar3;
    iVar3 = FUN_140e851f0(&local_1d8,&local_98,DAT_141955260,1);
    if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    if (iVar3 != -2 && iVar3 < 0) {
      local_198 = 0x93;
      plVar9 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f9fd8);
      iVar3 = FUN_140e4a740(&local_1d8);
      if (((*(uint *)((longlong)plVar9 + 0xc) & 0xffffff) == 2) && (lVar10 = *plVar9, lVar10 != 0))
      {
        if ((iVar3 < 0) || (*(int *)(lVar10 + 0x24) <= iVar3)) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar3,
                        *(undefined4 *)(lVar10 + 0x24));
          plVar9 = (longlong *)0x0;
        }
        else {
          plVar9 = (longlong *)((longlong)iVar3 * 0x10 + *(longlong *)(lVar10 + 8));
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
      }
      if (plVar9 != &local_1f8) {
        local_128 = *plVar9;
        lStack_120 = plVar9[1];
        if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1f8);
        }
        FUN_140041b80(&local_1f8,&local_128);
      }
      local_198 = 0x94;
      if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      local_158 = 0;
      local_150 = 0;
      local_14c = 5;
      plVar9 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f9e18);
      FUN_140e87440(&local_1f8,DAT_1419f9cb8,0x80000000,&local_a8,
                    (ulonglong)plVar11 & 0xffffffffffffff00,uVar13 & 0xffffffffffffff00);
      if (plVar9 != local_148) {
        local_128 = *plVar9;
        lStack_120 = plVar9[1];
        if ((1 << ((byte)local_148[1]._4_4_ & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_148);
        }
        FUN_140041b80(local_148,&local_128);
      }
      local_108 = local_148;
      switch(local_1ec) {
      default:
switchD_140cb84c1_caseD_1:
        lVar10 = 0;
        break;
      case 6:
        lVar10 = local_1f8;
        break;
      case 0xf:
        iVar3 = (int)((ulonglong)local_1f8 >> 0x20);
        if ((iVar3 != 0x1000000) && (iVar3 != 0x4000001)) goto switchD_140cb84c1_caseD_1;
      case 0:
      case 7:
      case 10:
      case 0xd:
        uVar5 = FUN_140e4a8b0(&local_1f8);
        lVar10 = FUN_140e87250(uVar5);
      }
      pplVar15 = &local_108;
      puVar7 = &local_a8;
      plVar11 = (longlong *)FUN_140e63610(lVar10,param_2,&local_158,1,puVar7,pplVar15);
      if (plVar11 != &local_168) {
        local_128 = *plVar11;
        lStack_120 = plVar11[1];
        if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_168);
        }
        FUN_140041b80(&local_168,&local_128);
      }
      local_198 = 0x96;
      uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f9a68);
      local_7c = 0;
      local_88 = 0;
      iVar3 = FUN_140e851f0(uVar6,&local_88,DAT_141955260,1);
      if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_88);
      }
      if (iVar3 != -2 && iVar3 < 1) {
        pplVar15 = (longlong **)((ulonglong)pplVar15 & 0xffffffffffffff00);
        puVar7 = (undefined8 *)((ulonglong)puVar7 & 0xffffffffffffff00);
        FUN_140e87440(&local_1f8,DAT_1419ffc28,0x80000000,&local_138,puVar7,pplVar15);
        iVar3 = FUN_140e851f0(&local_138,&DAT_1419df7b0,DAT_141955260,0);
        if ((iVar3 != 0) &&
           (iVar3 = FUN_140e851f0(&local_168,&DAT_1419df7b0,DAT_141955260,0), iVar3 != 0)) {
          pplVar15 = (longlong **)((ulonglong)pplVar15 & 0xffffffffffffff00);
          puVar7 = (undefined8 *)((ulonglong)puVar7 & 0xffffffffffffff00);
          FUN_140e87440(&local_1f8,DAT_1419ffc28,0x80000000,&local_138,puVar7,pplVar15);
          iVar3 = FUN_140e851f0(&local_168,&local_138,DAT_141955260,0);
          if (iVar3 != 0) {
            local_198 = 0x98;
            uVar14 = (ulonglong)pplVar15 & 0xffffffffffffff00;
            uVar13 = (ulonglong)puVar7 & 0xffffffffffffff00;
            FUN_140e87440(&local_1f8,DAT_1419f9c58,0x80000000,&local_190,uVar13,uVar14);
            uVar14 = uVar14 & 0xffffffffffffff00;
            uVar13 = uVar13 & 0xffffffffffffff00;
            FUN_140e87440(&local_1f8,DAT_1419ffc28,0x80000000,&local_138,uVar13,uVar14);
            local_f4 = uStack_15c;
            local_f8 = uStack_160;
            if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) == 0) {
              local_100 = local_168;
            }
            else {
              FUN_1400419b0(&local_100,&local_168);
            }
            local_1c8 = 1;
            FUN_1400462a0(&local_100,&local_138);
            FUN_1400460e0(&local_190,&local_100);
            local_1c8 = 0;
            if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_100);
            }
            FUN_140e87930(&local_1f8,DAT_1419f9c58,0x80000000,&local_190);
            local_198 = 0x99;
            plVar11 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f9a48);
            uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f98d8);
            uStack_1ac = *(undefined4 *)((longlong)plVar11 + 0xc);
            uStack_1b0 = (undefined4)plVar11[1];
            if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) == 0) {
              local_1b8 = *plVar11;
            }
            else {
              FUN_1400419b0(&local_1b8,plVar11);
            }
            local_1c8 = 2;
            FUN_1400460e0(&local_1b8,uVar6);
            lStack_120 = CONCAT44(uStack_1ac,uStack_1b0);
            local_128 = local_1b8;
            if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1e8);
            }
            FUN_140041b80(&local_1e8,&local_128);
            local_1c8 = 0;
            if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1b8);
            }
            FUN_140e87930(&local_1f8,DAT_141a58080,0x80000000,&local_1e8);
            local_198 = 0x9a;
            pplVar15 = (longlong **)(uVar14 & 0xffffffffffffff00);
            puVar7 = (undefined8 *)(uVar13 & 0xffffffffffffff00);
            FUN_140e87440(&local_1f8,DAT_1419f9c58,0x80000000,&local_d0,puVar7,pplVar15);
            if ((local_c4 & 0xffffff) != 0) {
              FUN_140e4b060(&local_d0);
            }
            dVar12 = (double)FUN_140e78d00();
            if (dVar12 - 0.001 < -DAT_141955260) {
              local_198 = 0x9c;
              if ((1 << ((byte)local_184 & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_190);
              }
              local_184 = 0;
              local_190 = 0;
              FUN_140e87930(&local_1f8,DAT_1419f9c58,0x80000000,&local_190);
              local_198 = 0x9d;
              if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_1e8);
              }
              local_1dc = 0;
              local_1e8 = 0.0;
              FUN_140e87930(&local_1f8,DAT_141a58080,0x80000000,&local_1e8);
            }
          }
        }
      }
      local_198 = 0xa0;
      lStack_120 = CONCAT44(uStack_15c,uStack_160);
      local_128 = local_168;
      if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e0);
      }
      FUN_140041b80(&local_e0,&local_128);
      FUN_140e87930(&local_1f8,DAT_1419ffc28,0x80000000,&local_e0);
      local_198 = 0xa2;
      uVar13 = (ulonglong)pplVar15 & 0xffffffffffffff00;
      plVar11 = (longlong *)((ulonglong)puVar7 & 0xffffffffffffff00);
      FUN_140e87440(&local_1f8,DAT_141a58080,0x80000000,&local_f0,plVar11,uVar13);
      uStack_b0 = uStack_b0 & 0xffffffff;
      local_b8 = 0;
      iVar3 = FUN_140e851f0(&local_f0,&local_b8,DAT_141955260,1);
      if ((1 << ((byte)(uStack_b0 >> 0x20) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_b8);
      }
      if (0 < iVar3) {
        local_198 = 0xa4;
        uVar13 = uVar13 & 0xffffffffffffff00;
        uVar14 = (ulonglong)plVar11 & 0xffffffffffffff00;
        FUN_140e87440(&local_1f8,DAT_141a58080,0x80000000,&local_1e8,uVar14,uVar13);
        uVar4 = local_1dc & 0xffffff;
        if (uVar4 == 0) {
LAB_140cb8a7d:
          local_1e8 = local_1e8 + -1.0;
        }
        else if (uVar4 == 1) {
          local_1e8 = (double)FUN_140e4b060(&local_1e8);
          local_1e8 = local_1e8 - 1.0;
          local_1dc = 0;
        }
        else if (uVar4 == 7) {
          local_1e8 = (double)CONCAT44(local_1e8._4_4_,local_1e8._0_4_ + -1);
        }
        else if (uVar4 == 10) {
          local_1e8 = (double)((longlong)local_1e8 + -1);
        }
        else {
          if (uVar4 == 0xd) {
            local_1dc = 0;
            goto LAB_140cb8a7d;
          }
          FUN_140042910(&DAT_14172c450,&local_1e8,&local_1e8);
        }
        FUN_140e87930(&local_1f8,DAT_141a58080,0x80000000,&local_1e8);
        local_198 = 0xa5;
        uVar13 = uVar13 & 0xffffffffffffff00;
        plVar11 = (longlong *)(uVar14 & 0xffffffffffffff00);
        FUN_140e87440(&local_1f8,DAT_141a58080,0x80000000,&local_f0,plVar11,uVar13);
        uStack_170 = uStack_170 & 0xffffffff;
        local_178 = 0;
        iVar3 = FUN_140e851f0(&local_f0,&local_178,DAT_141955260,1);
        if ((1 << ((byte)(uStack_170 >> 0x20) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_178);
        }
        if (iVar3 != -2 && iVar3 < 1) {
          local_198 = 0xa5;
          if ((1 << ((byte)local_184 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_190);
          }
          local_184 = 0;
          local_190 = 0;
          FUN_140e87930(&local_1f8,DAT_1419f9c58,0x80000000,&local_190);
        }
      }
      goto LAB_140cb8244;
    }
    local_198 = 0xa9;
    uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f9a68);
    uStack_170 = uStack_170 & 0xffffffff;
    local_178 = 0;
    iVar3 = FUN_140e851f0(uVar6,&local_178,DAT_141955260,1);
    if ((1 << ((byte)(uStack_170 >> 0x20) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    if (0 < iVar3) {
      local_198 = 0xa9;
      uVar6 = (**(code **)(*param_1 + 0x10))(param_1,DAT_1419f9a68);
      FUN_1400bdd80(uVar6);
    }
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f0);
  }
  if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e0);
  }
  if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d0);
  }
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  if ((1 << ((byte)local_184 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_190);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  _eh_vector_destructor_iterator_(local_148,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_1a8;
  return param_3;
}

