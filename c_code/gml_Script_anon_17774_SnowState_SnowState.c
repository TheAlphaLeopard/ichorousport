// gml_Script_anon_17774_SnowState_SnowState @ 0x140504c90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_17774_SnowState_SnowState
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined8 uVar8;
  uint uVar9;
  longlong lVar10;
  int iVar11;
  uint local_res20;
  undefined4 uVar13;
  ulonglong uVar12;
  undefined8 **ppuVar14;
  ulonglong uVar15;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined8 local_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  double local_1a8;
  uint local_19c;
  undefined8 local_198;
  undefined4 local_18c;
  undefined8 local_188;
  char *local_180;
  undefined4 local_178;
  undefined8 local_168 [2];
  undefined8 local_158;
  byte local_14c;
  undefined8 local_148 [2];
  undefined4 local_138 [3];
  byte local_12c;
  undefined8 local_128;
  undefined4 local_11c;
  longlong local_118;
  undefined4 local_10c;
  longlong local_108;
  uint uStack_fc;
  undefined8 local_f8;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined8 *local_b8;
  longlong *local_b0;
  undefined8 *local_a8;
  undefined4 *local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_68;
  
  local_180 = "gml_Script_anon@16884@SnowState@SnowState";
  local_188 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_188;
  local_178 = 0x215;
  uVar13 = 1;
  _eh_vector_constructor_iterator_(local_168,0x10,4,FUN_1400424d0,FUN_140041b30);
  local_ec = 0xffffff;
  local_f8 = 0;
  local_bc = 0xffffff;
  local_c8 = 0;
  local_res20 = 0xffffff;
  uStack_fc = 0xffffff;
  local_108 = 0;
  local_19c = 0xffffff;
  local_1a8 = 0.0;
  local_10c = 0xffffff;
  local_118 = 0;
  local_11c = 0xffffff;
  local_128 = 0;
  local_18c = 0xffffff;
  local_198 = 0;
  local_cc = 0xffffff;
  local_d8 = 0;
  puVar2 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419fcc38);
  uStack_6c = 0xffffff;
  local_78 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_178 = 0x218;
  local_1c8 = 0;
  local_1c0 = 0;
  local_1bc = 5;
  local_88 = 0;
  local_80 = 0;
  local_7c = 5;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fce18);
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a54fa0);
  if (puVar4 != local_168) {
    local_1b8._0_4_ = *(undefined4 *)puVar4;
    local_1b8._4_4_ = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_1b0 = *(undefined4 *)(puVar4 + 1);
    uStack_1ac = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)local_168[1]._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_168);
    }
    FUN_140041b80(local_168,&local_1b8);
  }
  local_b8 = local_168;
  puVar4 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)*param_5;
    if (puVar6 == &local_158) goto LAB_140504e73;
  }
  local_1b8._0_4_ = *(undefined4 *)puVar6;
  local_1b8._4_4_ = *(undefined4 *)((longlong)puVar6 + 4);
  uStack_1b0 = *(undefined4 *)(puVar6 + 1);
  uStack_1ac = *(undefined4 *)((longlong)puVar6 + 0xc);
  if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  FUN_140041b80(&local_158,&local_1b8);
LAB_140504e73:
  local_b0 = &local_158;
  if (puVar3 != local_148) {
    local_1b8._0_4_ = *(undefined4 *)puVar3;
    local_1b8._4_4_ = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_1b0 = *(undefined4 *)(puVar3 + 1);
    uStack_1ac = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)local_148[1]._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_148);
    }
    FUN_140041b80(local_148,&local_1b8);
  }
  local_a8 = local_148;
  uVar8 = CONCAT44(uVar13,DAT_141a01138);
  puVar5 = (undefined4 *)FUN_140e634e0(param_1,param_2,&local_88,2,uVar8,&local_b8);
  uVar13 = (undefined4)((ulonglong)uVar8 >> 0x20);
  if (puVar5 != local_138) {
    local_1b8._0_4_ = *puVar5;
    local_1b8._4_4_ = puVar5[1];
    uStack_1b0 = puVar5[2];
    uStack_1ac = puVar5[3];
    if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_138);
    }
    FUN_140041b80(local_138,&local_1b8);
  }
  local_a0 = local_138;
  uVar8 = CONCAT44(uVar13,DAT_141a01138);
  puVar6 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_1c8,2,uVar8,&local_a8);
  uVar13 = (undefined4)((ulonglong)uVar8 >> 0x20);
  if (puVar6 != &local_f8) {
    local_1b8._0_4_ = *(undefined4 *)puVar6;
    local_1b8._4_4_ = *(undefined4 *)((longlong)puVar6 + 4);
    uStack_1b0 = *(undefined4 *)(puVar6 + 1);
    uStack_1ac = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_1b8);
  }
  local_178 = 0x219;
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  local_1c8 = 0;
  local_1c0 = 0;
  local_1bc = 5;
  if (puVar3 != local_168) {
    local_1b8._0_4_ = *(undefined4 *)puVar3;
    local_1b8._4_4_ = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_1b0 = *(undefined4 *)(puVar3 + 1);
    uStack_1ac = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)local_168[1]._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_168);
    }
    FUN_140041b80(local_168,&local_1b8);
  }
  local_b8 = local_168;
  if ((param_4 < 1) || (puVar4 = (undefined8 *)*param_5, puVar4 != &local_158)) {
    local_1b8._0_4_ = *(undefined4 *)puVar4;
    local_1b8._4_4_ = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_1b0 = *(undefined4 *)(puVar4 + 1);
    uStack_1ac = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    FUN_140041b80(&local_158,&local_1b8);
  }
  local_b0 = &local_158;
  uVar8 = CONCAT44(uVar13,DAT_141a01138);
  puVar3 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_1c8,2,uVar8,&local_b8);
  uVar13 = (undefined4)((ulonglong)uVar8 >> 0x20);
  if (puVar3 != &local_c8) {
    local_1b8._0_4_ = *(undefined4 *)puVar3;
    local_1b8._4_4_ = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_1b0 = *(undefined4 *)(puVar3 + 1);
    uStack_1ac = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140041b80(&local_c8,&local_1b8);
  }
  local_178 = 0x21b;
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  local_1c8 = 0;
  local_1c0 = 0;
  local_1bc = 5;
  uVar8 = CONCAT44(uVar13,DAT_141a063c8);
  local_b8 = &local_f8;
  plVar7 = (longlong *)FUN_140e634e0(param_1,param_2,&local_1c8,1,uVar8,&local_b8);
  if (plVar7 != &local_108) {
    local_1b8._0_4_ = (undefined4)*plVar7;
    local_1b8._4_4_ = *(undefined4 *)((longlong)plVar7 + 4);
    uStack_1b0 = (undefined4)plVar7[1];
    uStack_1ac = *(undefined4 *)((longlong)plVar7 + 0xc);
    FUN_140041b80(&local_108,&local_1b8);
    local_res20 = uStack_fc;
  }
  local_178 = 0x21c;
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  local_19c = 0;
  local_1a8 = 0.0;
  iVar11 = 0;
  if ((local_res20 == 2) && (local_108 != 0)) {
    iVar11 = *(int *)(local_108 + 0x24);
  }
  if (0 < iVar11) {
    local_68 = *(longlong *)ThreadLocalStoragePointer;
    do {
      lVar10 = local_108;
      uVar13 = (undefined4)((ulonglong)uVar8 >> 0x20);
      plVar7 = (longlong *)0x0;
      iVar11 = iVar11 + -1;
      local_178 = 0x21d;
      (**(code **)(*param_1 + 8))(param_1,DAT_1419fce18);
      iVar1 = FUN_140e4a740(&local_1a8);
      if (((local_res20 & 0xffffff) == 2) && (lVar10 != 0)) {
        if ((iVar1 < 0) || (*(int *)(lVar10 + 0x24) <= iVar1)) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar1,
                        *(undefined4 *)(lVar10 + 0x24));
        }
        else {
          plVar7 = (longlong *)((longlong)iVar1 * 0x10 + *(longlong *)(lVar10 + 8));
        }
        if (plVar7 != &local_118) goto LAB_140505225;
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
        plVar7 = &local_108;
LAB_140505225:
        local_e8 = (undefined4)*plVar7;
        uStack_e4 = *(undefined4 *)((longlong)plVar7 + 4);
        uStack_e0 = (undefined4)plVar7[1];
        uStack_dc = *(undefined4 *)((longlong)plVar7 + 0xc);
        if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_118);
        }
        FUN_140041b80(&local_118,&local_e8);
      }
      local_178 = 0x21e;
      if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1c8);
      }
      lVar10 = 0;
      local_1c8 = 0;
      local_1c0 = 0;
      local_1bc = 5;
      local_b0 = &local_118;
      ppuVar14 = &local_b8;
      uVar12 = CONCAT44(uVar13,DAT_141a01138);
      local_b8 = &local_f8;
      puVar3 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_1c8,2,uVar12,ppuVar14);
      if (puVar3 != &local_128) {
        local_e8 = *(undefined4 *)puVar3;
        uStack_e4 = *(undefined4 *)((longlong)puVar3 + 4);
        uStack_e0 = *(undefined4 *)(puVar3 + 1);
        uStack_dc = *(undefined4 *)((longlong)puVar3 + 0xc);
        if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_128);
        }
        FUN_140041b80(&local_128,&local_e8);
      }
      local_178 = 0x220;
      if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_198);
      }
      local_18c = 10;
      local_198 = 0;
      local_178 = 0x221;
      uVar15 = (ulonglong)ppuVar14 & 0xffffffffffffff00;
      uVar12 = uVar12 & 0xffffffffffffff00;
      FUN_140e87440(&local_128,DAT_1419fca58,0x80000000,&local_d8,uVar12,uVar15);
      local_8c = local_cc;
      local_90 = local_d0;
      if ((1 << ((byte)local_cc & 0x1f) & 0x46U) == 0) {
        local_98 = local_d8;
      }
      else {
        FUN_1400419b0(&local_98,&local_d8);
      }
      if ((*(int *)(local_68 + 0x18) < DAT_141ddf1e8) &&
         (_Init_thread_header(&DAT_141ddf1e8), DAT_141ddf1e8 == -1)) {
        _DAT_141ddf244 = 10;
        _DAT_141ddf238 = 1;
        _DAT_141ddf258 = 10;
        _DAT_141ddf24c = 2;
        _DAT_141ddf25c = 1;
        _DAT_141ddf26c = 10;
        _DAT_141ddf260 = 4;
        _DAT_141ddf270 = 2;
        atexit((_func_5014 *)&LAB_141481350);
        _Init_thread_footer(&DAT_141ddf1e8);
      }
      uVar9 = 0;
      do {
        iVar1 = FUN_140e851f0(&DAT_141ddf238 + (longlong)(int)uVar9 * 0x14,&local_98,DAT_141955260,0
                             );
        if (iVar1 == 0) {
          iVar1 = (&DAT_141ddf248)[lVar10 * 5];
          if (iVar1 == 0) {
            local_178 = 0x222;
LAB_1405054a1:
            if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_198);
            }
            local_198 = 2;
          }
          else {
            if (iVar1 == 1) {
              local_178 = 0x223;
              goto LAB_1405054a1;
            }
            if (iVar1 != 2) break;
            local_178 = 0x224;
            if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_198);
            }
            local_198 = 4;
          }
          local_18c = 10;
          break;
        }
        uVar9 = uVar9 + 1;
        lVar10 = lVar10 + 1;
      } while (uVar9 < 3);
      local_178 = 0x228;
      if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1c8);
      }
      local_1c8 = 0;
      local_1c0 = 0;
      local_1bc = 5;
      uVar12 = uVar12 & 0xffffffffffffff00;
      FUN_140e87440(&local_128,DAT_141a467b8,0x80000000,&local_78,uVar12,uVar15 & 0xffffffffffffff00
                   );
      uVar13 = (undefined4)(uVar12 >> 0x20);
      FUN_140e609c0(DAT_141a729d8);
      FUN_140e645a0(&local_1b8,gml_Script____struct___246_anon_17774_SnowState_SnowState,0);
      if (&local_1b8 != puVar2) {
        local_e8 = (undefined4)local_1b8;
        uStack_e4 = local_1b8._4_4_;
        uStack_e0 = uStack_1b0;
        uStack_dc = uStack_1ac;
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar2);
        }
        FUN_140041b80(puVar2,&local_e8);
      }
      FUN_140e60910(1);
      if (puVar2 != local_168) {
        local_e8 = *(undefined4 *)puVar2;
        uStack_e4 = *(undefined4 *)((longlong)puVar2 + 4);
        uStack_e0 = *(undefined4 *)(puVar2 + 1);
        uStack_dc = *(undefined4 *)((longlong)puVar2 + 0xc);
        if ((1 << ((byte)local_168[1]._4_4_ & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_168);
        }
        FUN_140041b80(local_168,&local_e8);
      }
      if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1b8);
      }
      local_b8 = local_168;
      local_b0 = &local_198;
      local_e8 = (undefined4)local_78;
      uStack_e4 = local_78._4_4_;
      uStack_e0 = uStack_70;
      uStack_dc = uStack_6c;
      if ((1 << ((byte)local_148[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_148);
      }
      FUN_140041b80(local_148,&local_e8);
      local_a8 = local_148;
      uVar8 = FUN_140e634e0(param_1,param_2,&local_1c8,3,CONCAT44(uVar13,DAT_1419fd6d8),&local_b8);
      FUN_140e98ef0(param_1,param_2,&local_c8,&local_118,uVar8);
      local_178 = 0x22c;
      uVar9 = local_19c & 0xffffff;
      if (uVar9 == 0) {
LAB_1405056b0:
        local_1a8 = local_1a8 + 1.0;
      }
      else {
        if (uVar9 == 1) {
          local_1a8 = (double)FUN_140e4b060(&local_1a8);
          local_19c = 0;
          goto LAB_1405056b0;
        }
        if (uVar9 == 7) {
          local_1a8 = (double)CONCAT44(local_1a8._4_4_,local_1a8._0_4_ + 1);
        }
        else if (uVar9 == 10) {
          local_1a8 = (double)((longlong)local_1a8 + 1);
        }
        else {
          if (uVar9 == 0xd) {
            local_19c = 0;
            goto LAB_1405056b0;
          }
          FUN_140042910(&DAT_14172c3d8,&local_1a8,&local_1a8);
        }
      }
      if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_98);
      }
    } while (0 < iVar11);
  }
  local_178 = 0x22f;
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 6;
  *param_3 = param_1;
  uVar8 = FUN_140e5c910();
  FUN_140e42c10(uVar8,param_1);
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)local_res20 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  _eh_vector_destructor_iterator_(local_168,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_188;
  return param_3;
}

