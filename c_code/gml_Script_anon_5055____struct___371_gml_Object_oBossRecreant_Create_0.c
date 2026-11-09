// gml_Script_anon_5055____struct___371_gml_Object_oBossRecreant_Create_0 @ 0x1407c0050

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_5055____struct___371_gml_Object_oBossRecreant_Create_0
          (longlong *param_1,ulonglong param_2,undefined8 *param_3)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  longlong **pplVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  ulonglong uVar11;
  byte bVar12;
  longlong **pplVar13;
  int iVar14;
  double dVar15;
  undefined4 uVar17;
  undefined8 uVar16;
  longlong ***ppplVar18;
  undefined *puVar19;
  ulonglong uVar20;
  undefined8 local_218;
  undefined4 local_210;
  undefined4 local_20c;
  longlong *local_208;
  undefined8 uStack_200;
  longlong *local_1f8;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  double local_1e8;
  uint local_1dc;
  longlong *local_1d8;
  longlong *plStack_1d0;
  undefined8 local_1c8;
  char *local_1c0;
  undefined4 local_1b8;
  longlong *local_1b0;
  uint uStack_1a4;
  undefined8 local_1a0;
  undefined4 local_198;
  undefined4 local_194;
  longlong *local_190;
  uint uStack_184;
  longlong *local_178;
  byte local_16c;
  longlong *local_168;
  byte local_15c;
  undefined1 local_158 [12];
  byte local_14c;
  longlong local_148;
  byte local_13c;
  uint local_138;
  undefined8 local_130;
  undefined4 local_124;
  undefined8 local_120;
  undefined4 local_114;
  longlong **local_110;
  longlong **local_108;
  undefined1 *local_100;
  longlong *local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  longlong *local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_5c;
  
  local_1c0 = "gml_Script_anon@4027@___struct___370@gml_Object_oBossRecreant_Create_0";
  local_1c8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_1c8;
  local_1b8 = 0xc1;
  uVar17 = 1;
  _eh_vector_constructor_iterator_(&local_178,0x10,4,FUN_1400424d0,FUN_140041b30);
  local_ac = 0xffffff;
  local_b8 = 0;
  uStack_1a4 = 0xffffff;
  local_1b0 = (longlong *)0x0;
  local_6c = 0xffffff;
  local_78 = 0;
  local_114 = 0xffffff;
  local_120 = 0;
  uStack_184 = 0xffffff;
  local_190 = (longlong *)0x0;
  local_1dc = 0xffffff;
  local_1e8 = 0.0;
  uStack_bc = 0xffffff;
  local_c8 = (longlong *)0x0;
  local_124 = 0xffffff;
  local_130 = 0;
  local_7c = 0xffffff;
  local_88 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  uVar5 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_194 = 0;
  local_1a0 = 0;
  local_20c = 0;
  local_218 = 0;
  local_5c = 0;
  local_68 = 0;
  local_d4 = 0;
  local_e0 = 0;
  local_e4 = 0;
  local_f0 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_1b8 = 0xc3;
  pplVar6 = (longlong **)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f440);
  if (pplVar6 != &local_178) {
    local_208 = *pplVar6;
    uStack_200 = pplVar6[1];
    if ((1 << ((byte)_local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    FUN_140041b80(&local_178,&local_208);
  }
  local_110 = &local_178;
  uVar16 = CONCAT44(uVar17,DAT_141a02ef8);
  uVar7 = FUN_140e634e0(param_1,param_2,&local_1a0,1,uVar16,&local_110);
  uVar17 = (undefined4)((ulonglong)uVar16 >> 0x20);
  cVar2 = FUN_140e491e0(uVar7);
  if (cVar2 == '\0') {
    local_1b8 = 0xc3;
    if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_218);
    }
    local_218 = 0;
    local_210 = 0;
    local_20c = 5;
    puVar8 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f440);
    FUN_140e609c0(param_1);
    uVar17 = 0;
    puVar9 = (undefined8 *)gml_Script_FracPos(param_1,param_2,&local_218,0,0);
    if (puVar9 != puVar8) {
      local_208 = (longlong *)*puVar9;
      uStack_200 = (longlong *)puVar9[1];
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar8);
      }
      FUN_140041b80(puVar8,&local_208);
    }
    FUN_140e60910(1);
  }
  local_1b8 = 0xc5;
  if ((1 << ((byte)local_194 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a0);
  }
  local_1a0 = 0;
  local_198 = 0;
  local_194 = 5;
  pplVar6 = (longlong **)(**(code **)(*param_1 + 8))(param_1,DAT_1419fdaa8);
  if (pplVar6 != &local_178) {
    local_208 = *pplVar6;
    uStack_200 = pplVar6[1];
    if ((1 << ((byte)_local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    FUN_140041b80(&local_178,&local_208);
  }
  local_110 = &local_178;
  ppplVar18 = &local_110;
  uVar11 = CONCAT44(uVar17,DAT_1419f58d8);
  uVar7 = FUN_140e634e0(param_1,param_2,&local_1a0,1,uVar11,ppplVar18);
  cVar2 = FUN_140e491e0(uVar7);
  local_138 = 2;
  if (cVar2 == '\0') {
    local_1b8 = 0xe2;
    if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_218);
    }
    local_218 = 0;
    local_210 = 0;
    local_20c = 5;
    uVar7 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
    uVar11 = uVar11 & 0xffffffffffffff00;
    FUN_140e87440(uVar7,DAT_141a0a848,0x80000000,&local_b8,uVar11,
                  (ulonglong)ppplVar18 & 0xffffffffffffff00);
    uVar17 = (undefined4)(uVar11 >> 0x20);
    local_1d8 = _DAT_141dc6a10;
    plStack_1d0 = plRam0000000141dc6a18;
    if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    FUN_140041b80(&local_178,&local_1d8);
    local_110 = &local_178;
    ppplVar18 = &local_110;
    uVar11 = CONCAT44(uVar17,DAT_141a0a0d8);
    puVar8 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_218,1,uVar11,ppplVar18);
    uStack_1ec = *(undefined4 *)((longlong)puVar8 + 0xc);
    uStack_1f0 = *(undefined4 *)(puVar8 + 1);
    if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) == 0) {
      local_1f8 = (longlong *)*puVar8;
    }
    else {
      FUN_1400419b0(&local_1f8,puVar8);
    }
    uStack_200 = (longlong *)((ulonglong)uStack_200 & 0xffffffff);
    local_208 = (longlong *)0x3fe999999999999a;
    FUN_140042560(&local_1f8,&local_208);
    if ((1 << ((byte)((ulonglong)uStack_200 >> 0x20) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_208);
    }
    uVar3 = FUN_140e851f0(&local_b8,&local_1f8,DAT_141955260,1);
    if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f8);
    }
    if (uVar3 < 0x80000000) {
      local_1b8 = 0xe4;
      if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e0);
      }
      local_e0 = 0;
      local_d8 = 0;
      local_d4 = 5;
      if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f0);
      }
      local_f0 = 0;
      local_e8 = 0;
      local_e4 = 5;
      pplVar6 = (longlong **)(**(code **)(*param_1 + 8))(param_1,DAT_1419fdaa8);
      uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5868);
      uVar11 = uVar11 & 0xffffffffffffff00;
      FUN_140e87440(uVar5,DAT_141a55540,0x80000000,&local_88,uVar11,
                    (ulonglong)ppplVar18 & 0xffffffffffffff00);
      uVar17 = (undefined4)(uVar11 >> 0x20);
      if (pplVar6 != &local_168) {
        local_1d8 = *pplVar6;
        plStack_1d0 = pplVar6[1];
        if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_168);
        }
        FUN_140041b80(&local_168,&local_1d8);
      }
      local_108 = &local_168;
      local_1d8 = _DAT_141dc6a10;
      plStack_1d0 = plRam0000000141dc6a18;
      if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_158);
      }
      FUN_140041b80(local_158,&local_1d8);
      local_100 = local_158;
      plVar10 = (longlong *)
                FUN_140e634e0(param_1,param_2,&local_f0,2,CONCAT44(uVar17,DAT_1419f5a78),&local_108)
      ;
      if (plVar10 != &local_148) {
        local_1d8 = (longlong *)*plVar10;
        plStack_1d0 = (longlong *)plVar10[1];
        if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_148);
        }
        FUN_140041b80(&local_148,&local_1d8);
      }
      local_f8 = &local_148;
      uVar5 = FUN_140069500(uVar5);
      puVar8 = &local_88;
      FUN_140e63610(uVar5,param_2,&local_e0,1,puVar8,&local_f8);
      uVar17 = (undefined4)((ulonglong)puVar8 >> 0x20);
      local_1b8 = 0xe6;
      if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_218);
      }
      local_218 = 0;
      local_210 = 0;
      local_20c = 5;
      pplVar6 = (longlong **)(**(code **)(*param_1 + 8))(param_1,DAT_1419fdaa8);
      if (pplVar6 != &local_178) {
        local_1d8 = *pplVar6;
        plStack_1d0 = pplVar6[1];
        if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_178);
        }
        FUN_140041b80(&local_178,&local_1d8);
      }
      local_110 = &local_178;
      local_1d8 = _DAT_141dc6a10;
      plStack_1d0 = plRam0000000141dc6a18;
      if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      FUN_140041b80(&local_168,&local_1d8);
      local_108 = &local_168;
      FUN_140e634e0(param_1,param_2,&local_218,2,CONCAT44(uVar17,DAT_1419f5938),&local_110);
      local_1b8 = 0xe7;
      goto LAB_1407c1486;
    }
  }
  else {
    local_1b8 = 199;
    if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_218);
    }
    local_218 = 0;
    local_210 = 0;
    local_20c = 5;
    uVar7 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
    uVar11 = uVar11 & 0xffffffffffffff00;
    FUN_140e87440(uVar7,DAT_141a0a848,0x80000000,&local_b8,uVar11,
                  (ulonglong)ppplVar18 & 0xffffffffffffff00);
    uVar17 = (undefined4)(uVar11 >> 0x20);
    local_208 = _DAT_141dc6a10;
    uStack_200 = plRam0000000141dc6a18;
    if ((1 << ((byte)_local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    FUN_140041b80(&local_168,&local_208);
    local_108 = &local_168;
    puVar8 = (undefined8 *)
             FUN_140e634e0(param_1,param_2,&local_218,1,CONCAT44(uVar17,DAT_141a0a0d8),&local_108);
    uStack_1ec = *(undefined4 *)((longlong)puVar8 + 0xc);
    uStack_1f0 = *(undefined4 *)(puVar8 + 1);
    if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) == 0) {
      local_1f8 = (longlong *)*puVar8;
    }
    else {
      FUN_1400419b0(&local_1f8,puVar8);
    }
    uStack_200 = (longlong *)CONCAT44(7,(undefined4)uStack_200);
    local_208 = (longlong *)CONCAT44(local_208._4_4_,2);
    FUN_140042560(&local_1f8,&local_208);
    if ((1 << ((byte)((ulonglong)uStack_200 >> 0x20) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_208);
    }
    uVar3 = FUN_140e851f0(&local_b8,&local_1f8,DAT_141955260,1);
    if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f8);
    }
    if (uVar3 < 0x80000000) {
      local_1b8 = 0xc9;
      puVar19 = &DAT_141dd6ab8;
      puVar8 = &DAT_141dd6aa8;
      pplVar6 = (longlong **)
                FUN_140e8da20(&local_68,param_1,3,&DAT_141dd6ad8,&DAT_141dd6aa8,&DAT_141dd6ab8);
      if (pplVar6 != &local_1b0) {
        local_208 = *pplVar6;
        uStack_200 = pplVar6[1];
        if ((1 << ((byte)uStack_1a4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1b0);
        }
        FUN_140041b80(&local_1b0,&local_208);
      }
      local_1b8 = 0xca;
      if ((1 << ((byte)local_194 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1a0);
      }
      local_1a0 = 0;
      local_198 = 0;
      local_194 = 5;
      uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5868);
      FUN_140e87440(uVar5,DAT_1419f5fd8,0x80000000,&local_78,(ulonglong)puVar8 & 0xffffffffffffff00,
                    (ulonglong)puVar19 & 0xffffffffffffff00);
      uVar5 = FUN_140069500(uVar5);
      puVar8 = &local_78;
      puVar9 = (undefined8 *)FUN_140e63610(uVar5,param_2,&local_1a0,0,puVar8,0);
      if (puVar9 != &local_120) {
        local_208 = (longlong *)*puVar9;
        uStack_200 = (longlong *)puVar9[1];
        if ((1 << ((byte)local_114 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_120);
        }
        FUN_140041b80(&local_120,&local_208);
      }
      iVar14 = 4;
      do {
        iVar14 = iVar14 + -1;
        local_1b8 = 0xce;
        pplVar6 = (longlong **)FUN_140e8da20(&local_1a0,param_1,0);
        if (pplVar6 != &local_190) {
          local_1d8 = *pplVar6;
          plStack_1d0 = pplVar6[1];
          if ((1 << ((byte)uStack_184 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_190);
          }
          FUN_140041b80(&local_190,&local_1d8);
        }
        local_1b8 = 0xcf;
        if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1e8);
        }
        local_1dc = 0;
        local_1e8 = 0.0;
        bVar1 = true;
LAB_1407c0710:
        iVar4 = 0;
        if (!bVar1) {
          local_1b8 = 0xcf;
          uVar3 = local_1dc & 0xffffff;
          if (uVar3 != 0) {
            if (uVar3 != 1) {
              if (uVar3 == 7) {
                local_1e8 = (double)CONCAT44(local_1e8._4_4_,local_1e8._0_4_ + 1);
              }
              else if (uVar3 == 10) {
                local_1e8 = (double)((longlong)local_1e8 + 1);
              }
              else {
                if (uVar3 == 0xd) {
                  local_1dc = 0;
                  goto LAB_1407c0765;
                }
                FUN_140042910(&DAT_14172c3d8,&local_1e8,&local_1e8);
              }
              goto LAB_1407c076f;
            }
            local_1e8 = (double)FUN_140e4b060(&local_1e8);
            local_1dc = 0;
          }
LAB_1407c0765:
          local_1e8 = local_1e8 + 1.0;
        }
LAB_1407c076f:
        bVar1 = false;
        if ((uStack_1a4 == 2) && (local_1b0 != (longlong *)0x0)) {
          iVar4 = *(int *)((longlong)local_1b0 + 0x24);
        }
        uStack_200 = (longlong *)((ulonglong)uStack_200 & 0xffffffff);
        local_208 = (longlong *)(double)iVar4;
        iVar4 = FUN_140e851f0(&local_1e8,&local_208,DAT_141955260,1);
        if ((1 << ((byte)((ulonglong)uStack_200 >> 0x20) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_208);
        }
        uVar17 = (undefined4)((ulonglong)puVar8 >> 0x20);
        if (iVar4 != -2 && iVar4 < 0) {
          local_1b8 = 0xd1;
          iVar4 = FUN_140e4a740(&local_1e8);
          pplVar6 = (longlong **)0x0;
          if (((uStack_1a4 & 0xffffff) == 2) && (local_1b0 != (longlong *)0x0)) {
            if ((iVar4 < 0) || (*(int *)((longlong)local_1b0 + 0x24) <= iVar4)) {
              FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar4,
                            *(undefined4 *)((longlong)local_1b0 + 0x24));
            }
            else {
              pplVar6 = (longlong **)((longlong)iVar4 * 0x10 + local_1b0[1]);
            }
          }
          else {
            FUN_140e632c0("trying to index variable that is not an array");
            pplVar6 = &local_1b0;
          }
          iVar4 = FUN_140e851f0(pplVar6,&local_120,DAT_141955260,0);
          uVar17 = (undefined4)((ulonglong)puVar8 >> 0x20);
          if (iVar4 == 0) {
            uStack_1ec = DAT_141dd6ab4;
            uStack_1f0 = DAT_141dd6ab0;
            if ((1 << ((byte)DAT_141dd6ab4 & 0x1f) & 0x46U) == 0) {
              local_1f8 = DAT_141dd6aa8;
            }
            else {
              FUN_1400419b0(&local_1f8,&DAT_141dd6aa8);
            }
            iVar4 = FUN_140e4a740(&local_1e8);
            pplVar6 = (longlong **)0x0;
            if (((uStack_1a4 & 0xffffff) == 2) && (local_1b0 != (longlong *)0x0)) {
              if ((iVar4 < 0) || (*(int *)((longlong)local_1b0 + 0x24) <= iVar4)) {
                FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar4,
                              *(undefined4 *)((longlong)local_1b0 + 0x24));
              }
              else {
                pplVar6 = (longlong **)((longlong)iVar4 * 0x10 + local_1b0[1]);
              }
            }
            else {
              FUN_140e632c0("trying to index variable that is not an array");
              pplVar6 = &local_1b0;
            }
            iVar4 = FUN_140e851f0(pplVar6,&local_1f8,DAT_141955260,0);
            if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1f8);
            }
            uVar17 = (undefined4)((ulonglong)puVar8 >> 0x20);
            if (iVar4 == 0) goto LAB_1407c0969;
            local_1b8 = 0xd1;
          }
          else {
LAB_1407c0969:
            local_1b8 = 0xd2;
            if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_218);
            }
            pplVar6 = (longlong **)0x0;
            local_218 = 0;
            local_210 = 0;
            local_20c = 5;
            local_110 = &local_190;
            iVar4 = FUN_140e4a740(&local_1e8);
            if (((uStack_1a4 & 0xffffff) == 2) && (local_1b0 != (longlong *)0x0)) {
              if ((iVar4 < 0) || (*(int *)((longlong)local_1b0 + 0x24) <= iVar4)) {
                FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar4,
                              *(undefined4 *)((longlong)local_1b0 + 0x24));
              }
              else {
                pplVar6 = (longlong **)((longlong)iVar4 * 0x10 + local_1b0[1]);
              }
              if (pplVar6 != &local_168) goto LAB_1407c0a0a;
            }
            else {
              FUN_140e632c0("trying to index variable that is not an array");
              pplVar6 = &local_1b0;
LAB_1407c0a0a:
              local_1d8 = *pplVar6;
              plStack_1d0 = pplVar6[1];
              if ((1 << ((byte)_local_15c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_168);
              }
              FUN_140041b80(&local_168,&local_1d8);
            }
            local_108 = &local_168;
            puVar8 = (undefined8 *)CONCAT44(uVar17,DAT_1419fe568);
            FUN_140e634e0(param_1,param_2,&local_218,2,puVar8,&local_110);
          }
          goto LAB_1407c0710;
        }
        local_1b8 = 0xd5;
        iVar4 = 0;
        if ((uStack_184 == 2) && (local_190 != (longlong *)0x0)) {
          iVar4 = *(int *)((longlong)local_190 + 0x24);
        }
        dVar15 = (double)FUN_140e78f00((longlong)(iVar4 + -1));
        iVar4 = (int)dVar15;
        pplVar6 = (longlong **)0x0;
        if (((uStack_184 & 0xffffff) == 2) && (local_190 != (longlong *)0x0)) {
          if ((iVar4 < 0) || (*(int *)((longlong)local_190 + 0x24) <= iVar4)) {
            FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar4,
                          *(undefined4 *)((longlong)local_190 + 0x24));
          }
          else {
            pplVar6 = (longlong **)((longlong)iVar4 * 0x10 + local_190[1]);
          }
          if (pplVar6 != &local_c8) goto LAB_1407c0af4;
        }
        else {
          FUN_140e632c0("trying to index variable that is not an array");
          pplVar6 = &local_190;
LAB_1407c0af4:
          local_1d8 = *pplVar6;
          plStack_1d0 = pplVar6[1];
          if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_c8);
          }
          FUN_140041b80(&local_c8,&local_1d8);
        }
        local_1b8 = 0xd6;
        if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_218);
        }
        local_218 = 0;
        local_210 = 0;
        local_20c = 5;
        pplVar6 = (longlong **)(**(code **)(*param_1 + 8))(param_1,DAT_1419fdaa8);
        if (pplVar6 != &local_178) {
          local_1d8 = *pplVar6;
          plStack_1d0 = pplVar6[1];
          if ((1 << ((byte)_local_16c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_178);
          }
          FUN_140041b80(&local_178,&local_1d8);
        }
        local_110 = &local_178;
        local_108 = &local_c8;
        puVar8 = (undefined8 *)CONCAT44(uVar17,DAT_141a57350);
        FUN_140e634e0(param_1,param_2,&local_218,2,puVar8,&local_110);
        local_1b8 = 0xd7;
        plStack_1d0 = (longlong *)CONCAT44(uStack_bc,uStack_c0);
        local_1d8 = local_c8;
        if ((1 << ((byte)local_114 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_120);
        }
        FUN_140041b80(&local_120,&local_1d8);
      } while (0 < iVar14);
      local_1b8 = 0xda;
      uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
      if ((1 << ((byte)local_124 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_130);
      }
      local_124 = 0;
      local_130 = 0;
      FUN_140e87930(uVar5,DAT_141a0a848,0x80000000,&local_130);
      local_1b8 = 0xdb;
      goto LAB_1407c1486;
    }
  }
  local_1b8 = 0xeb;
  pplVar6 = (longlong **)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f5ef8);
  uVar7 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f440);
  plVar10 = param_1;
  uVar11 = param_2;
  FUN_140e87170(uVar7,DAT_1419fe0e8,0x80000000,&local_98,param_1,param_2);
  uStack_200 = (longlong *)CONCAT44(6,(undefined4)uStack_200);
  local_208 = param_1;
  FUN_140e87440(&local_208,DAT_1419fe0e8,0x80000000,&local_a8,
                (ulonglong)plVar10 & 0xffffffffffffff00,uVar11 & 0xffffffffffffff00);
  if ((1 << ((byte)((ulonglong)uStack_200 >> 0x20) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  iVar14 = FUN_140e851f0(&local_98,&local_a8,DAT_141955260,1);
  if (iVar14 == -2 || -1 < iVar14) {
    bVar12 = 0;
    uStack_200 = (longlong *)((ulonglong)uStack_200 & 0xffffffff);
    local_208 = (longlong *)0x3ff0000000000000;
    pplVar13 = &local_208;
  }
  else {
    uStack_1ec = 0;
    local_1f8 = (longlong *)&DAT_bff0000000000000;
    pplVar13 = &local_1f8;
    local_138 = 1;
    bVar12 = uStack_200._4_1_;
  }
  uVar17 = uStack_1ec;
  FUN_140e609c0(param_1);
  if (pplVar13 != pplVar6) {
    local_1d8 = *pplVar13;
    plStack_1d0 = pplVar13[1];
    if ((1 << ((byte)*(undefined4 *)((longlong)pplVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(pplVar6);
    }
    FUN_140041b80(pplVar6,&local_1d8);
  }
  uVar3 = local_138;
  if (((local_138 & 2) != 0) &&
     (uVar3 = local_138 & 0xfffffffd, (1 << (bVar12 & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_208);
  }
  if (((uVar3 & 1) != 0) && ((1 << ((byte)uVar17 & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_1f8);
  }
  FUN_140e60910(1);
  local_1b8 = 0xed;
  puVar8 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f310);
  uVar7 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f500);
  uStack_1ec = *(undefined4 *)((longlong)puVar8 + 0xc);
  uStack_1f0 = *(undefined4 *)(puVar8 + 1);
  if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) == 0) {
    local_1f8 = (longlong *)*puVar8;
  }
  else {
    FUN_1400419b0(&local_1f8,puVar8);
  }
  FUN_140042560(&local_1f8,uVar5);
  FUN_1400460e0(uVar7,&local_1f8);
  if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  local_1b8 = 0xef;
  if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  local_218 = 0;
  local_210 = 0;
  local_20c = 5;
  uVar7 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd398);
  FUN_140e63610(param_1,param_2,&local_218,0,uVar7,0);
  local_1b8 = 0xf0;
  if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  local_218 = 0;
  local_210 = 0;
  local_20c = 5;
  uVar7 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd4b8);
  FUN_140e63610(param_1,param_2,&local_218,0,uVar7,0);
  local_1b8 = 0xf1;
  if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  local_218 = 0;
  local_210 = 0;
  local_20c = 5;
  uVar11 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd418);
  uVar20 = 0;
  FUN_140e63610(param_1,param_2,&local_218,0,uVar11,0);
  local_1b8 = 0xf2;
  uVar7 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  FUN_140e87440(uVar7,DAT_141a0a848,0x80000000,&local_130,uVar11 & 0xffffffffffffff00,
                uVar20 & 0xffffffffffffff00);
  FUN_1400460e0(&local_130,uVar5);
  FUN_140e87930(uVar7,DAT_141a0a848,0x80000000,&local_130);
LAB_1407c1486:
  if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f0);
  }
  if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e0);
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  if ((1 << ((byte)local_194 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a0);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_124 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_130);
  }
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  if ((1 << ((byte)uStack_184 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_190);
  }
  if ((1 << ((byte)local_114 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_120);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)uStack_1a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b0);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  _eh_vector_destructor_iterator_(&local_178,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_1c8;
  return param_3;
}

