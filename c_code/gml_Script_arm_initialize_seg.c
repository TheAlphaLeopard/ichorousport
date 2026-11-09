// gml_Script_arm_initialize_seg @ 0x140221cb0

undefined8 *
gml_Script_arm_initialize_seg
          (code *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  undefined8 **ppuVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  code *pcVar15;
  undefined8 *local_268;
  uint local_25c;
  undefined8 local_258;
  undefined4 uStack_250;
  uint uStack_24c;
  undefined4 local_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  uint uStack_23c;
  double local_238;
  uint local_22c;
  undefined8 local_228;
  undefined4 uStack_220;
  uint uStack_21c;
  longlong local_218;
  undefined4 local_210;
  uint local_20c;
  longlong local_208;
  undefined4 local_200;
  uint local_1fc;
  undefined8 local_1f8;
  uint local_1ec;
  undefined8 local_1e8;
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined8 local_1d8;
  char *local_1d0;
  undefined4 local_1c8;
  undefined8 local_1c0;
  undefined4 local_1b4;
  undefined8 local_1a8;
  undefined4 uStack_1a0;
  uint uStack_19c;
  undefined8 local_198;
  undefined4 uStack_190;
  uint uStack_18c;
  undefined8 local_188;
  undefined4 uStack_180;
  uint uStack_17c;
  undefined8 local_178;
  undefined4 uStack_170;
  uint uStack_16c;
  undefined8 local_168;
  undefined4 local_15c;
  undefined8 local_158;
  undefined4 local_14c;
  undefined8 local_148;
  undefined4 local_13c;
  undefined8 local_138;
  undefined4 local_12c;
  longlong *local_128;
  longlong *local_120;
  undefined8 *local_118;
  undefined8 local_110;
  undefined4 local_104;
  undefined8 local_100;
  undefined4 local_f4;
  undefined1 local_f0 [32];
  undefined8 local_d0 [18];
  
  local_1d0 = "gml_Script_arm_fix";
  local_1d8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_1d8;
  local_1c8 = 4;
  pcVar15 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_f0,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_1fc = 0xffffff;
  local_208 = 0;
  local_20c = 0xffffff;
  local_218 = 0;
  local_1b4 = 0xffffff;
  local_1c0 = 0;
  local_25c = 0xffffff;
  local_268 = (undefined8 *)0x0;
  local_1ec = 0xffffff;
  local_1f8 = 0;
  local_12c = 0xffffff;
  local_138 = 0;
  local_13c = 0xffffff;
  local_148 = 0;
  local_14c = 0xffffff;
  local_158 = 0;
  local_15c = 0xffffff;
  local_168 = 0;
  uStack_24c = 0xffffff;
  local_258 = 0.0;
  local_1dc = 0;
  local_1e8 = 0;
  local_f4 = 0;
  local_100 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  uStack_21c = 0;
  local_228 = 0.0;
  local_1c8 = 0xb;
  local_22c = 0;
  local_238 = 0.0;
  bVar4 = true;
  do {
    do {
      uVar13 = (undefined4)((ulonglong)pcVar15 >> 0x20);
      if (!bVar4) {
        local_1c8 = 0xb;
        uVar7 = local_22c & 0xffffff;
        if (uVar7 != 0) {
          if (uVar7 != 1) {
            if (uVar7 == 7) {
              local_238 = (double)CONCAT44(local_238._4_4_,local_238._0_4_ + 1);
            }
            else if (uVar7 == 10) {
              local_238 = (double)((longlong)local_238 + 1);
            }
            else {
              if (uVar7 == 0xd) {
                local_22c = 0;
                goto LAB_140221eab;
              }
              FUN_140042910(&DAT_14172c3d8,&local_238,&local_238);
            }
            goto LAB_140221eb6;
          }
          local_238 = (double)FUN_140e4b060(&local_238);
          local_22c = 0;
        }
LAB_140221eab:
        local_238 = local_238 + 1.0;
      }
LAB_140221eb6:
      bVar4 = false;
      uVar9 = (**(code **)(*(longlong *)param_1 + 8))(param_1,DAT_141a0f148);
      iVar8 = FUN_140e851f0(&local_238,uVar9,DAT_141955260,1);
      if ((iVar8 == -2) || (0 < iVar8)) {
        local_1c8 = 0x25;
        if (&local_228 != param_3) {
          local_248 = (int)local_228;
          uStack_244 = local_228._4_4_;
          uStack_240 = uStack_220;
          uStack_23c = uStack_21c;
          if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(param_3);
          }
          FUN_140041b80(param_3,&local_248);
        }
        if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_100);
        }
        if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1e8);
        }
        if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_258);
        }
        if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_168);
        }
        if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_158);
        }
        if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_148);
        }
        if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_138);
        }
        if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1f8);
        }
        if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_268);
        }
        if ((1 << ((byte)local_1b4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1c0);
        }
        if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_218);
        }
        if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_208);
        }
        if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_238);
        }
        if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_228);
        }
        _eh_vector_destructor_iterator_(local_f0,0x10,3,FUN_140041b30);
        DAT_141dc7a50 = (undefined8 *)local_1d8;
        return param_3;
      }
      local_1c8 = 0xd;
      plVar10 = (longlong *)(**(code **)(*(longlong *)param_1 + 8))(param_1,DAT_141a0fa78);
      iVar8 = FUN_140e4a740(&local_238);
      if (((*(uint *)((longlong)plVar10 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar10, lVar1 != 0))
      {
        if ((iVar8 < 0) || (*(int *)(lVar1 + 0x24) <= iVar8)) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar8,
                        *(undefined4 *)(lVar1 + 0x24));
          plVar10 = (longlong *)0x0;
        }
        else {
          plVar10 = (longlong *)((longlong)iVar8 * 0x10 + *(longlong *)(lVar1 + 8));
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
      }
      if (plVar10 != &local_208) {
        local_248 = (undefined4)*plVar10;
        uStack_244 = *(undefined4 *)((longlong)plVar10 + 4);
        uStack_240 = (undefined4)plVar10[1];
        uStack_23c = *(uint *)((longlong)plVar10 + 0xc);
        if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_208);
        }
        FUN_140041b80(&local_208,&local_248);
      }
      plVar10 = (longlong *)(**(code **)(*(longlong *)param_1 + 8))(param_1,DAT_141a0fa28);
      iVar8 = FUN_140e4a740(&local_238);
      if (((*(uint *)((longlong)plVar10 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar10, lVar1 != 0))
      {
        if ((iVar8 < 0) || (*(int *)(lVar1 + 0x24) <= iVar8)) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar8,
                        *(undefined4 *)(lVar1 + 0x24));
          plVar10 = (longlong *)0x0;
        }
        else {
          plVar10 = (longlong *)((longlong)iVar8 * 0x10 + *(longlong *)(lVar1 + 8));
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
      }
      if (plVar10 != &local_218) {
        local_248 = (undefined4)*plVar10;
        uStack_244 = *(undefined4 *)((longlong)plVar10 + 4);
        uStack_240 = (undefined4)plVar10[1];
        uStack_23c = *(uint *)((longlong)plVar10 + 0xc);
        if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_218);
        }
        FUN_140041b80(&local_218,&local_248);
      }
      local_1c8 = 0x10;
      if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1e8);
      }
      local_1e8 = 0;
      local_1e0 = 0;
      local_1dc = 5;
      local_128 = &local_208;
      local_120 = &local_218;
      if (param_4 < 1) {
        puVar11 = &DAT_1419df7b0;
LAB_1402220d1:
        local_248 = *(undefined4 *)puVar11;
        uStack_244 = *(undefined4 *)((longlong)puVar11 + 4);
        uStack_240 = *(undefined4 *)(puVar11 + 1);
        uStack_23c = *(uint *)((longlong)puVar11 + 0xc);
        if ((1 << ((byte)local_d0[1]._4_4_ & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_d0);
        }
        FUN_140041b80(local_d0,&local_248);
      }
      else {
        puVar11 = (undefined8 *)*param_5;
        if (puVar11 != local_d0) goto LAB_1402220d1;
      }
      local_118 = local_d0;
      pcVar15 = (code *)CONCAT44(uVar13,DAT_141a10408);
      uVar9 = FUN_140e634e0(param_1,param_2,&local_1e8,3,pcVar15,&local_128);
      cVar6 = FUN_140e491e0(uVar9);
      uVar13 = (undefined4)((ulonglong)pcVar15 >> 0x20);
    } while (cVar6 == '\0');
    local_1c8 = 0x12;
    uVar7 = uStack_21c & 0xffffff;
    if (uVar7 == 0) {
LAB_1402221a6:
      local_228 = local_228 + 1.0;
    }
    else {
      if (uVar7 == 1) {
        local_228 = (double)FUN_140e4b060(&local_228);
        uStack_21c = 0;
        goto LAB_1402221a6;
      }
      if (uVar7 == 7) {
        local_228 = (double)CONCAT44(local_228._4_4_,(int)local_228 + 1);
      }
      else if (uVar7 == 10) {
        local_228 = (double)((longlong)local_228 + 1);
      }
      else {
        if (uVar7 == 0xd) {
          uStack_21c = 0;
          goto LAB_1402221a6;
        }
        FUN_140042910(&DAT_14172c3d8,&local_228,&local_228);
      }
    }
    local_1c8 = 0x14;
    if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    local_1e8 = 0;
    local_1e0 = 0;
    local_1dc = 5;
    local_128 = &local_208;
    local_120 = &local_218;
    if (param_4 < 1) {
      puVar11 = &DAT_1419df7b0;
LAB_14022222d:
      local_248 = *(undefined4 *)puVar11;
      uStack_244 = *(undefined4 *)((longlong)puVar11 + 4);
      uStack_240 = *(undefined4 *)(puVar11 + 1);
      uStack_23c = *(uint *)((longlong)puVar11 + 0xc);
      if ((1 << ((byte)local_d0[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_d0);
      }
      FUN_140041b80(local_d0,&local_248);
    }
    else {
      puVar11 = (undefined8 *)*param_5;
      if (puVar11 != local_d0) goto LAB_14022222d;
    }
    local_118 = local_d0;
    puVar11 = (undefined8 *)
              FUN_140e634e0(param_1,param_2,&local_1e8,3,CONCAT44(uVar13,DAT_141a10448),&local_128);
    if (puVar11 != &local_1c0) {
      local_248 = *(undefined4 *)puVar11;
      uStack_244 = *(undefined4 *)((longlong)puVar11 + 4);
      uStack_240 = *(undefined4 *)(puVar11 + 1);
      uStack_23c = *(uint *)((longlong)puVar11 + 0xc);
      if ((1 << ((byte)local_1b4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1c0);
      }
      FUN_140041b80(&local_1c0,&local_248);
    }
    ppuVar12 = (undefined8 **)FUN_140e8da20(&local_100,param_1,0);
    if (ppuVar12 != &local_268) {
      local_248 = *(undefined4 *)ppuVar12;
      uStack_244 = *(undefined4 *)((longlong)ppuVar12 + 4);
      uStack_240 = *(undefined4 *)(ppuVar12 + 1);
      uStack_23c = *(uint *)((longlong)ppuVar12 + 0xc);
      if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_268);
      }
      FUN_140041b80(&local_268,&local_248);
    }
    if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f8);
    }
    local_1ec = 0;
    local_1f8 = 0;
    local_1c8 = 0x18;
    FUN_140e87170(&local_1c0,DAT_141a0a798,0x80000000,&local_138,param_1,param_2);
    uStack_19c = local_1fc;
    uStack_1a0 = local_200;
    if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) == 0) {
      local_1a8 = local_208;
    }
    else {
      FUN_1400419b0(&local_1a8,&local_208);
    }
    FUN_1400462a0(&local_1a8,&local_138);
    puVar11 = (undefined8 *)FUN_140e48e40(&local_268,3);
    FUN_140e609c0(*local_268);
    if (&local_1a8 != puVar11) {
      local_248 = (undefined4)local_1a8;
      uStack_244 = local_1a8._4_4_;
      uStack_240 = uStack_1a0;
      uStack_23c = uStack_19c;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar11 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar11);
      }
      FUN_140041b80(puVar11,&local_248);
    }
    if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    FUN_140e60910(1);
    local_1c8 = 0x19;
    FUN_140e87170(&local_1c0,DAT_141a101f8,0x80000000,&local_148,param_1,param_2);
    uStack_18c = local_20c;
    uStack_190 = local_210;
    if ((1 << ((byte)local_20c & 0x1f) & 0x46U) == 0) {
      local_198 = local_218;
    }
    else {
      FUN_1400419b0(&local_198,&local_218);
    }
    FUN_1400462a0(&local_198,&local_148);
    puVar11 = (undefined8 *)FUN_140e48e40(&local_268,2);
    FUN_140e609c0(*local_268);
    if (&local_198 != puVar11) {
      local_248 = (undefined4)local_198;
      uStack_244 = local_198._4_4_;
      uStack_240 = uStack_190;
      uStack_23c = uStack_18c;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar11 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar11);
      }
      FUN_140041b80(puVar11,&local_248);
    }
    if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    FUN_140e60910(1);
    local_1c8 = 0x1a;
    FUN_140e87170(&local_1c0,DAT_141a0a808,0x80000000,&local_158,param_1,param_2);
    uStack_17c = local_1fc;
    uStack_180 = local_200;
    if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) == 0) {
      local_188 = local_208;
    }
    else {
      FUN_1400419b0(&local_188,&local_208);
    }
    FUN_1400462a0(&local_188,&local_158);
    puVar11 = (undefined8 *)FUN_140e48e40(&local_268,1);
    FUN_140e609c0(*local_268);
    if (&local_188 != puVar11) {
      local_248 = (undefined4)local_188;
      uStack_244 = local_188._4_4_;
      uStack_240 = uStack_180;
      uStack_23c = uStack_17c;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar11 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar11);
      }
      FUN_140041b80(puVar11,&local_248);
    }
    if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    FUN_140e60910(1);
    local_1c8 = 0x1b;
    pcVar15 = param_1;
    FUN_140e87170(&local_1c0,DAT_141a0a788,0x80000000,&local_168,param_1,param_2);
    uStack_16c = local_20c;
    uStack_170 = local_210;
    if ((1 << ((byte)local_20c & 0x1f) & 0x46U) == 0) {
      local_178 = local_218;
    }
    else {
      FUN_1400419b0(&local_178,&local_218);
    }
    FUN_1400462a0(&local_178,&local_168);
    puVar11 = (undefined8 *)FUN_140e48e40(&local_268,0);
    FUN_140e609c0(*local_268);
    if (&local_178 != puVar11) {
      local_248 = (undefined4)local_178;
      uStack_244 = local_178._4_4_;
      uStack_240 = uStack_170;
      uStack_23c = uStack_16c;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar11 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar11);
      }
      FUN_140041b80(puVar11,&local_248);
    }
    if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    FUN_140e60910(1);
    local_1c8 = 0x1d;
    if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_258);
    }
    uStack_24c = 0;
    local_258 = 1.0;
    bVar5 = true;
LAB_140222743:
    if (!bVar5) {
      local_1c8 = 0x1d;
      uVar7 = uStack_24c & 0xffffff;
      if (uVar7 != 0) {
        if (uVar7 != 1) {
          if (uVar7 == 7) {
            local_258 = (double)CONCAT44(local_258._4_4_,(int)local_258 + 1);
          }
          else if (uVar7 == 10) {
            local_258 = (double)((longlong)local_258 + 1);
          }
          else {
            if (uVar7 == 0xd) {
              uStack_24c = 0;
              goto LAB_140222794;
            }
            FUN_140042910(&DAT_14172c3d8,&local_258,&local_258);
          }
          goto LAB_14022279f;
        }
        local_258 = (double)FUN_140e4b060(&local_258);
        uStack_24c = 0;
      }
LAB_140222794:
      local_258 = local_258 + 1.0;
    }
LAB_14022279f:
    bVar5 = false;
    local_104 = 0;
    local_110 = 0x4010000000000000;
    iVar8 = FUN_140e851f0(&local_258,&local_110,DAT_141955260,1);
    if ((1 << ((byte)local_104 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_110);
    }
    if (iVar8 != -2 && iVar8 < 0) {
      local_1c8 = 0x1e;
      iVar8 = FUN_140e4a740(&local_258);
      ppuVar12 = (undefined8 **)0x0;
      if (((local_25c & 0xffffff) == 2) && (local_268 != (undefined8 *)0x0)) {
        if ((iVar8 < 0) || (*(int *)((longlong)local_268 + 0x24) <= iVar8)) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar8,
                        *(undefined4 *)((longlong)local_268 + 0x24));
        }
        else {
          ppuVar12 = (undefined8 **)((longlong)iVar8 * 0x10 + local_268[1]);
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
        ppuVar12 = &local_268;
      }
      if ((*(uint *)((longlong)ppuVar12 + 0xc) & 0xffffff) == 0) {
        uVar13 = SUB84(*ppuVar12,0);
      }
      else {
        uVar13 = FUN_140e4b060(ppuVar12);
      }
      iVar8 = FUN_140e4a740(&local_1f8);
      ppuVar12 = (undefined8 **)0x0;
      if (((local_25c & 0xffffff) == 2) && (local_268 != (undefined8 *)0x0)) {
        if ((iVar8 < 0) || (*(int *)((longlong)local_268 + 0x24) <= iVar8)) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar8,
                        *(undefined4 *)((longlong)local_268 + 0x24));
        }
        else {
          ppuVar12 = (undefined8 **)((longlong)iVar8 * 0x10 + local_268[1]);
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
        ppuVar12 = &local_268;
      }
      if ((*(uint *)((longlong)ppuVar12 + 0xc) & 0xffffff) == 0) {
        uVar14 = SUB84(*ppuVar12,0);
      }
      else {
        uVar14 = FUN_140e4b060(ppuVar12);
      }
      dVar3 = (double)FUN_140e78d00(uVar13);
      dVar2 = (double)FUN_140e78d00(uVar14);
      if (dVar3 - dVar2 < -DAT_141955260) {
        local_1c8 = 0x1e;
        local_248 = (int)local_258;
        uStack_244 = local_258._4_4_;
        uStack_240 = uStack_250;
        uStack_23c = uStack_24c;
        if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1f8);
        }
        FUN_140041b80(&local_1f8,&local_248);
      }
      goto LAB_140222743;
    }
    local_1c8 = 0x20;
    if ((local_1ec & 0xffffff) == 0) {
      uVar13 = (undefined4)local_1f8;
    }
    else {
      uVar13 = FUN_140e4b060(&local_1f8);
    }
    dVar2 = (double)FUN_1412a79b0(uVar13,0x4000000000000000);
    if (dVar2 == 0.0) {
      local_1c8 = 0x21;
      uVar13 = DAT_141a0fa28;
    }
    else {
      local_1c8 = 0x22;
      uVar13 = DAT_141a0fa78;
    }
    puVar11 = (undefined8 *)(**(code **)(*(longlong *)param_1 + 0x10))(param_1,uVar13);
    FUN_140e609c0(param_1);
    iVar8 = FUN_140e4a740(&local_1f8);
    ppuVar12 = (undefined8 **)0x0;
    if (((local_25c & 0xffffff) == 2) && (local_268 != (undefined8 *)0x0)) {
      if ((iVar8 < 0) || (*(int *)((longlong)local_268 + 0x24) <= iVar8)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar8,
                      *(undefined4 *)((longlong)local_268 + 0x24));
      }
      else {
        ppuVar12 = (undefined8 **)((longlong)iVar8 * 0x10 + local_268[1]);
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
      ppuVar12 = &local_268;
    }
    uVar13 = FUN_140e4a740(&local_238);
    uVar9 = FUN_140e48e40(puVar11,uVar13);
    FUN_140e609c0(*(undefined8 *)*puVar11);
    FUN_1400462a0(uVar9,ppuVar12);
    FUN_140e60910(2);
  } while( true );
}

