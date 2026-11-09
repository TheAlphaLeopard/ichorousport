// gml_Script_anon_19208_SnowState_SnowState @ 0x140505a80

undefined8 *
gml_Script_anon_19208_SnowState_SnowState(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  uint uVar2;
  undefined4 *puVar3;
  longlong *plVar4;
  double *pdVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  int iVar10;
  double dVar11;
  int iVar12;
  uint local_res8;
  undefined4 uVar14;
  ulonglong uVar13;
  undefined4 **ppuVar15;
  ulonglong uVar16;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined4 local_19c;
  double local_198;
  uint local_18c;
  double local_188;
  uint local_17c;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  char *local_160;
  undefined4 local_158;
  double local_150;
  undefined4 local_144;
  longlong local_140;
  int local_134;
  undefined8 local_130;
  undefined4 local_124;
  longlong local_120;
  undefined4 local_114;
  longlong local_108;
  undefined4 local_fc;
  double local_f8;
  undefined4 local_ec;
  undefined4 local_e8 [3];
  undefined4 local_dc;
  undefined4 local_d8 [3];
  undefined4 local_cc;
  undefined4 local_c8 [3];
  undefined4 local_bc;
  longlong *local_b8;
  double *local_b0;
  undefined4 *local_a8;
  double *local_a0;
  undefined4 *local_98;
  int local_90;
  double local_88;
  uint uStack_7c;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  
  local_160 = "gml_Script_anon@17774@SnowState@SnowState";
  local_168 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_168;
  local_158 = 0x234;
  uVar14 = 1;
  _eh_vector_constructor_iterator_(&local_108,0x10,5,FUN_1400424d0,FUN_140041b30);
  local_134 = 0xffffff;
  iVar10 = 0;
  local_140 = 0;
  local_res8 = 0xffffff;
  uStack_7c = 0xffffff;
  local_88 = 0.0;
  local_17c = 0xffffff;
  local_188 = 0.0;
  local_114 = 0xffffff;
  local_120 = 0;
  local_18c = 0xffffff;
  local_198 = 0.0;
  local_144 = 0xffffff;
  local_150 = 0.0;
  local_124 = 0xffffff;
  local_130 = 0;
  puVar3 = (undefined4 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419fcd28);
  uStack_5c = 0xffffff;
  local_68 = 0;
  uStack_6c = 0xffffff;
  local_78 = 0;
  local_19c = 0;
  local_1a8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_158 = 0x236;
  local_1c8 = 0;
  local_1c0 = 0;
  local_1bc = 5;
  plVar4 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fce18);
  if (plVar4 != &local_108) {
    local_178 = (undefined4)*plVar4;
    uStack_174 = *(undefined4 *)((longlong)plVar4 + 4);
    uStack_170 = (undefined4)plVar4[1];
    uStack_16c = *(undefined4 *)((longlong)plVar4 + 0xc);
    if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_178);
  }
  local_b8 = &local_108;
  uVar9 = CONCAT44(uVar14,DAT_141a063c8);
  plVar4 = (longlong *)FUN_140e634e0(param_1,param_2,&local_1c8,1,uVar9,&local_b8);
  uVar14 = (undefined4)((ulonglong)uVar9 >> 0x20);
  if (plVar4 != &local_140) {
    local_178 = (undefined4)*plVar4;
    uStack_174 = *(undefined4 *)((longlong)plVar4 + 4);
    uStack_170 = (undefined4)plVar4[1];
    uStack_16c = *(undefined4 *)((longlong)plVar4 + 0xc);
    if ((1 << ((byte)local_134 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_140);
    }
    FUN_140041b80(&local_140,&local_178);
  }
  local_158 = 0x237;
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  local_1c8 = 0;
  local_1c0 = 0;
  local_1bc = 5;
  plVar4 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fcf28);
  if (plVar4 != &local_108) {
    local_178 = (undefined4)*plVar4;
    uStack_174 = *(undefined4 *)((longlong)plVar4 + 4);
    uStack_170 = (undefined4)plVar4[1];
    uStack_16c = *(undefined4 *)((longlong)plVar4 + 0xc);
    if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_178);
  }
  local_b8 = &local_108;
  uVar9 = CONCAT44(uVar14,DAT_141a063c8);
  pdVar5 = (double *)FUN_140e634e0(param_1,param_2,&local_1c8,1,uVar9,&local_b8);
  dVar11 = 0.0;
  if (pdVar5 != &local_88) {
    local_178 = *(undefined4 *)pdVar5;
    uStack_174 = *(undefined4 *)((longlong)pdVar5 + 4);
    uStack_170 = *(undefined4 *)(pdVar5 + 1);
    uStack_16c = *(undefined4 *)((longlong)pdVar5 + 0xc);
    FUN_140041b80(&local_88,&local_178);
    local_res8 = uStack_7c;
    dVar11 = local_88;
  }
  local_158 = 0x239;
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  local_17c = 0;
  local_188 = 0.0;
  if ((local_134 == 2) && (local_140 != 0)) {
    iVar10 = *(int *)(local_140 + 0x24);
  }
joined_r0x000140505d76:
  do {
    if (iVar10 < 1) {
      local_158 = 0x249;
      if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(param_3);
      }
      *(undefined4 *)((longlong)param_3 + 0xc) = 6;
      *param_3 = param_1;
      uVar9 = FUN_140e5c910();
      FUN_140e42c10(uVar9,param_1);
      if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1a8);
      }
      if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1c8);
      }
      if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_78);
      }
      if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_68);
      }
      if ((1 << ((byte)local_124 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_130);
      }
      if ((1 << ((byte)local_144 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_150);
      }
      if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_198);
      }
      if ((1 << ((byte)local_114 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_120);
      }
      if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      if ((1 << ((byte)local_res8 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_88);
      }
      if ((1 << ((byte)local_134 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_140);
      }
      _eh_vector_destructor_iterator_(&local_108,0x10,5,FUN_140041b30);
      DAT_141dc7a50 = (undefined8 *)local_168;
      return param_3;
    }
    uVar14 = (undefined4)((ulonglong)uVar9 >> 0x20);
    iVar10 = iVar10 + -1;
    local_158 = 0x23a;
    local_90 = iVar10;
    if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    iVar12 = 0;
    local_1c8 = 0;
    local_1c0 = 0;
    local_1bc = 5;
    if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    local_1a8 = 0;
    local_1a0 = 0;
    local_19c = 5;
    puVar6 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fce18);
    local_b8 = &local_140;
    local_b0 = &local_188;
    if (puVar6 != local_e8) {
      local_1b8 = *puVar6;
      uStack_1b4 = puVar6[1];
      uStack_1b0 = puVar6[2];
      uStack_1ac = puVar6[3];
      if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_e8);
      }
      FUN_140041b80(local_e8,&local_1b8);
    }
    local_a8 = local_e8;
    uVar9 = CONCAT44(uVar14,DAT_141a03ca8);
    puVar6 = (undefined4 *)FUN_140e634e0(param_1,param_2,&local_1a8,2,uVar9,&local_b8);
    uVar14 = (undefined4)((ulonglong)uVar9 >> 0x20);
    if (puVar6 != local_d8) {
      local_1b8 = *puVar6;
      uStack_1b4 = puVar6[1];
      uStack_1b0 = puVar6[2];
      uStack_1ac = puVar6[3];
      if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_d8);
      }
      FUN_140041b80(local_d8,&local_1b8);
    }
    local_a0 = (double *)local_d8;
    uVar9 = CONCAT44(uVar14,DAT_141a01138);
    plVar4 = (longlong *)FUN_140e634e0(param_1,param_2,&local_1c8,2,uVar9,&local_a8);
    if (plVar4 != &local_120) {
      local_1b8 = (undefined4)*plVar4;
      uStack_1b4 = *(undefined4 *)((longlong)plVar4 + 4);
      uStack_1b0 = (undefined4)plVar4[1];
      uStack_1ac = *(undefined4 *)((longlong)plVar4 + 0xc);
      if ((1 << ((byte)local_114 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_120);
      }
      FUN_140041b80(&local_120,&local_1b8);
    }
    local_158 = 0x23b;
    if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    local_18c = 0;
    local_198 = 0.0;
    if ((local_res8 == 2) && (dVar11 != 0.0)) {
      iVar12 = *(int *)((longlong)dVar11 + 0x24);
    }
    if (0 < iVar12) {
      do {
        uVar14 = (undefined4)((ulonglong)uVar9 >> 0x20);
        iVar12 = iVar12 + -1;
        local_158 = 0x23c;
        iVar10 = FUN_140e4a740(&local_198);
        pdVar5 = (double *)0x0;
        if (((local_res8 & 0xffffff) == 2) && (dVar11 != 0.0)) {
          if ((iVar10 < 0) || (*(int *)((longlong)dVar11 + 0x24) <= iVar10)) {
            FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar10,
                          *(undefined4 *)((longlong)dVar11 + 0x24));
          }
          else {
            pdVar5 = (double *)((longlong)iVar10 * 0x10 + *(longlong *)((longlong)dVar11 + 8));
          }
          if (pdVar5 != &local_150) goto LAB_140505fd5;
        }
        else {
          FUN_140e632c0("trying to index variable that is not an array");
          pdVar5 = &local_88;
LAB_140505fd5:
          local_1b8 = *(undefined4 *)pdVar5;
          uStack_1b4 = *(undefined4 *)((longlong)pdVar5 + 4);
          uStack_1b0 = *(undefined4 *)(pdVar5 + 1);
          uStack_1ac = *(undefined4 *)((longlong)pdVar5 + 0xc);
          if ((1 << ((byte)local_144 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_150);
          }
          FUN_140041b80(&local_150,&local_1b8);
        }
        local_158 = 0x23d;
        if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1c8);
        }
        local_1c8 = 0;
        local_1c0 = 0;
        local_1bc = 5;
        local_b8 = &local_120;
        local_b0 = &local_150;
        uVar9 = CONCAT44(uVar14,DAT_1419fcba8);
        uVar7 = FUN_140e634e0(param_1,param_2,&local_1c8,2,uVar9,&local_b8);
        cVar1 = FUN_140e491e0(uVar7);
        uVar14 = (undefined4)((ulonglong)uVar9 >> 0x20);
        if (cVar1 == '\0') {
          local_158 = 0x23e;
          if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1a8);
          }
          local_1a8 = 0;
          local_1a0 = 0;
          local_19c = 5;
          puVar6 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fcf28);
          if (puVar6 != local_e8) {
            local_1b8 = *puVar6;
            uStack_1b4 = puVar6[1];
            uStack_1b0 = puVar6[2];
            uStack_1ac = puVar6[3];
            if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_e8);
            }
            FUN_140041b80(local_e8,&local_1b8);
          }
          local_a8 = local_e8;
          local_a0 = &local_150;
          ppuVar15 = &local_a8;
          uVar13 = CONCAT44(uVar14,DAT_141a01138);
          puVar8 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_1a8,2,uVar13,ppuVar15);
          if (puVar8 != &local_130) {
            local_1b8 = *(undefined4 *)puVar8;
            uStack_1b4 = *(undefined4 *)((longlong)puVar8 + 4);
            uStack_1b0 = *(undefined4 *)(puVar8 + 1);
            uStack_1ac = *(undefined4 *)((longlong)puVar8 + 0xc);
            if ((1 << ((byte)local_124 & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_130);
            }
            FUN_140041b80(&local_130,&local_1b8);
          }
          local_158 = 0x23f;
          if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1c8);
          }
          local_1c8 = 0;
          local_1c0 = 0;
          local_1bc = 5;
          if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1a8);
          }
          local_1a8 = 0;
          local_1a0 = 0;
          local_19c = 5;
          plVar4 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fcda8);
          uVar16 = (ulonglong)ppuVar15 & 0xffffffffffffff00;
          uVar13 = uVar13 & 0xffffffffffffff00;
          FUN_140e87440(&local_130,DAT_1419fca58,0x80000000,&local_68,uVar13,uVar16);
          uVar13 = uVar13 & 0xffffffffffffff00;
          FUN_140e87440(&local_130,DAT_141a467b8,0x80000000,&local_78,uVar13,
                        uVar16 & 0xffffffffffffff00);
          uVar14 = (undefined4)(uVar13 >> 0x20);
          if (plVar4 != &local_108) {
            local_1b8 = (undefined4)*plVar4;
            uStack_1b4 = *(undefined4 *)((longlong)plVar4 + 4);
            uStack_1b0 = (undefined4)plVar4[1];
            uStack_1ac = *(undefined4 *)((longlong)plVar4 + 0xc);
            if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_108);
            }
            FUN_140041b80(&local_108,&local_1b8);
          }
          local_b8 = &local_108;
          local_1b8 = (undefined4)local_78;
          uStack_1b4 = local_78._4_4_;
          uStack_1b0 = uStack_70;
          uStack_1ac = uStack_6c;
          if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_f8);
          }
          FUN_140041b80(&local_f8,&local_1b8);
          local_b0 = &local_f8;
          FUN_140e609c0(DAT_141a729d8);
          FUN_140e645a0(&local_178,gml_Script_anon_18543_SnowState_SnowState,0);
          if (&local_178 != puVar3) {
            local_1b8 = local_178;
            uStack_1b4 = uStack_174;
            uStack_1b0 = uStack_170;
            uStack_1ac = uStack_16c;
            if ((1 << ((byte)puVar3[3] & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(puVar3);
            }
            FUN_140041b80(puVar3,&local_1b8);
          }
          FUN_140e60910(1);
          if (puVar3 != local_e8) {
            local_1b8 = *puVar3;
            uStack_1b4 = puVar3[1];
            uStack_1b0 = puVar3[2];
            uStack_1ac = puVar3[3];
            if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_e8);
            }
            FUN_140041b80(local_e8,&local_1b8);
          }
          if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_178);
          }
          local_a8 = local_e8;
          local_1b8 = (undefined4)local_68;
          uStack_1b4 = local_68._4_4_;
          uStack_1b0 = uStack_60;
          uStack_1ac = uStack_5c;
          if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_d8);
          }
          FUN_140041b80(local_d8,&local_1b8);
          local_a0 = (double *)local_d8;
          uVar9 = CONCAT44(uVar14,DAT_1419fed78);
          puVar6 = (undefined4 *)FUN_140e634e0(param_1,param_2,&local_1a8,2,uVar9,&local_b8);
          uVar14 = (undefined4)((ulonglong)uVar9 >> 0x20);
          if (puVar6 != local_c8) {
            local_1b8 = *puVar6;
            uStack_1b4 = puVar6[1];
            uStack_1b0 = puVar6[2];
            uStack_1ac = puVar6[3];
            if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_c8);
            }
            FUN_140041b80(local_c8,&local_1b8);
          }
          local_98 = local_c8;
          uVar9 = FUN_140e634e0(param_1,param_2,&local_1c8,3,CONCAT44(uVar14,DAT_1419fd6d8),
                                &local_a8);
          FUN_140e98ef0(param_1,param_2,&local_120,&local_150,uVar9);
        }
        local_158 = 0x244;
        uVar2 = local_18c & 0xffffff;
        if (uVar2 == 0) {
LAB_140506496:
          local_198 = local_198 + 1.0;
        }
        else {
          if (uVar2 == 1) {
            local_198 = (double)FUN_140e4b060(&local_198);
            local_18c = 0;
            goto LAB_140506496;
          }
          if (uVar2 == 7) {
            local_198 = (double)CONCAT44(local_198._4_4_,local_198._0_4_ + 1);
          }
          else if (uVar2 == 10) {
            local_198 = (double)((longlong)local_198 + 1);
          }
          else {
            if (uVar2 == 0xd) {
              local_18c = 0;
              goto LAB_140506496;
            }
            FUN_140042910(&DAT_14172c3d8,&local_198,&local_198);
          }
        }
      } while (0 < iVar12);
      iVar10 = local_90;
    }
    local_158 = 0x246;
    uVar2 = local_17c & 0xffffff;
    if (uVar2 != 0) {
      if (uVar2 == 1) {
        local_188 = (double)FUN_140e4b060(&local_188);
        local_17c = 0;
        goto LAB_140506529;
      }
      if (uVar2 == 7) {
        local_188 = (double)CONCAT44(local_188._4_4_,local_188._0_4_ + 1);
      }
      else if (uVar2 == 10) {
        local_188 = (double)((longlong)local_188 + 1);
      }
      else {
        if (uVar2 == 0xd) {
          local_17c = 0;
          goto LAB_140506529;
        }
        FUN_140042910(&DAT_14172c3d8,&local_188,&local_188);
      }
      goto joined_r0x000140505d76;
    }
LAB_140506529:
    local_188 = local_188 + 1.0;
  } while( true );
}

