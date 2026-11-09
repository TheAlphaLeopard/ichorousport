// gml_Script___scribble_class_font @ 0x140145e20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script___scribble_class_font(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  double *pdVar6;
  undefined8 *puVar7;
  uint uVar8;
  ulonglong uVar9;
  double dVar10;
  double dVar11;
  ulonglong uVar12;
  undefined8 **ppuVar13;
  undefined8 local_228;
  undefined4 local_220;
  undefined4 local_21c;
  double local_218;
  uint local_20c;
  double local_208;
  uint local_1fc;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  char *local_1e0;
  undefined4 local_1d8;
  double local_1c8;
  undefined4 uStack_1c0;
  uint uStack_1bc;
  undefined8 local_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  double local_1a8;
  undefined4 local_1a0;
  uint local_19c;
  undefined8 local_198;
  undefined4 local_190;
  undefined4 local_18c;
  undefined8 local_188;
  undefined8 uStack_180;
  double local_178;
  undefined4 local_16c;
  undefined8 local_168;
  undefined4 local_15c;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 local_14c;
  undefined8 local_148;
  undefined4 local_13c;
  undefined8 local_138;
  undefined4 local_12c;
  undefined8 local_128;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  double *local_e8;
  undefined1 *local_e0;
  undefined1 *local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  undefined1 *local_c0;
  undefined1 local_b8 [16];
  undefined1 local_a8 [12];
  byte local_9c;
  undefined1 local_98 [12];
  byte local_8c;
  undefined1 local_88 [12];
  byte local_7c;
  undefined1 local_78 [12];
  byte local_6c;
  undefined1 local_68 [12];
  byte local_5c;
  
  local_1e0 = "gml_Script___ensure_texel_data@anon@3911@__scribble_class_font@__scribble_class_font"
  ;
  local_1e8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_1e8;
  local_1d8 = 0x72;
  uVar2 = 1;
  _eh_vector_constructor_iterator_(local_b8,0x10,6,FUN_1400424d0,FUN_140041b30);
  local_1fc = 0xffffff;
  local_208 = 0.0;
  local_19c = 0xffffff;
  local_1a8 = 0.0;
  local_15c = 0xffffff;
  local_168 = 0;
  local_20c = 0xffffff;
  local_218 = 0.0;
  local_11c = 0xffffff;
  local_128 = 0;
  uStack_ec = 0xffffff;
  local_f8 = 0;
  local_16c = 0xffffff;
  local_178 = 0.0;
  local_12c = 0xffffff;
  local_138 = 0;
  local_13c = 0xffffff;
  local_148 = 0;
  local_21c = 0;
  local_228 = 0;
  local_14c = 0;
  local_158 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_1d8 = 0x74;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a06138);
  cVar1 = FUN_140e491e0(uVar5);
  if (cVar1 == '\0') {
    local_1d8 = 0x76;
    pdVar6 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a06328);
    if (pdVar6 != &local_208) {
      local_1f8 = *pdVar6;
      uStack_1f0 = pdVar6[1];
      if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_208);
      }
      FUN_140041b80(&local_208,&local_1f8);
    }
    local_1d8 = 0x77;
    if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_228);
    }
    local_228 = 0;
    local_220 = 0;
    local_21c = 5;
    local_e8 = &local_208;
    uVar5 = CONCAT44(uVar2,DAT_141a064d8);
    pdVar6 = (double *)FUN_140e634e0(param_1,param_2,&local_228,1,uVar5,&local_e8);
    uVar2 = (undefined4)((ulonglong)uVar5 >> 0x20);
    if (pdVar6 != &local_1a8) {
      local_1f8 = *pdVar6;
      uStack_1f0 = pdVar6[1];
      if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1a8);
      }
      FUN_140041b80(&local_1a8,&local_1f8);
    }
    local_1d8 = 0x79;
    if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_228);
    }
    local_228 = 0;
    local_220 = 0;
    local_21c = 5;
    local_e8 = &local_208;
    local_1f8 = (double)CONCAT44(uRam0000000141dc61b4,_DAT_141dc61b0);
    uStack_1f0 = (double)CONCAT44(uRam0000000141dc61bc,uRam0000000141dc61b8);
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_a8);
    }
    FUN_140041b80(local_a8,&local_1f8);
    local_e0 = local_a8;
    local_1f8 = (double)CONCAT44(uRam00000001419e1e04,_DAT_1419e1e00);
    uStack_1f0 = (double)CONCAT44(uRam00000001419e1e0c,uRam00000001419e1e08);
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_98);
    }
    FUN_140041b80(local_98,&local_1f8);
    local_d8 = local_98;
    uStack_1bc = local_19c;
    uStack_1c0 = local_1a0;
    if ((1 << ((byte)local_19c & 0x1f) & 0x46U) == 0) {
      local_1c8 = local_1a8;
    }
    else {
      FUN_1400419b0(&local_1c8,&local_1a8);
    }
    local_18c = 7;
    local_198 = CONCAT44(local_198._4_4_,1);
    FUN_1400462a0(&local_1c8,&local_198);
    if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    local_1f8 = local_1c8;
    uStack_1f0 = (double)CONCAT44(uStack_1bc,uStack_1c0);
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_88);
    }
    FUN_140041b80(local_88,&local_1f8);
    if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    local_d0 = local_88;
    local_1f8 = (double)CONCAT44(uRam00000001419e1e04,_DAT_1419e1e00);
    uStack_1f0 = (double)CONCAT44(uRam00000001419e1e0c,uRam00000001419e1e08);
    if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_78);
    }
    FUN_140041b80(local_78,&local_1f8);
    local_c8 = local_78;
    local_1f8 = (double)CONCAT44(uRam00000001419df7a4,_DAT_1419df7a0);
    uStack_1f0 = (double)CONCAT44(uRam00000001419df7ac,uRam00000001419df7a8);
    if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_68);
    }
    FUN_140041b80(local_68,&local_1f8);
    local_c0 = local_68;
    ppuVar13 = &local_e8;
    uVar12 = CONCAT44(uVar2,DAT_141a06158);
    uVar5 = FUN_140e634e0(param_1,param_2,&local_228,6,uVar12,ppuVar13);
    cVar1 = FUN_140e491e0(uVar5);
    if (cVar1 == '\0') {
      local_1d8 = 0x7c;
      puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a06138);
      uStack_1ac = 0xd;
      local_1b8 = 0x3ff0000000000000;
      if (&local_1b8 != puVar7) {
        local_1f8 = 1.0;
        uStack_1f0 = (double)CONCAT44(0xd,uStack_1b0);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar7);
        }
        FUN_140041b80(puVar7,&local_1f8);
      }
      local_1d8 = 0x7d;
    }
    else {
      local_1d8 = 0x82;
      local_1b8 = 0x3ff0000000000000;
      uStack_1ac = 0xd;
      local_1f8 = 1.0;
      uStack_1f0 = (double)CONCAT44(0xd,uStack_1b0);
      if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      FUN_140041b80(&local_168,&local_1f8);
      local_1d8 = 0x83;
      if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_218);
      }
      local_20c = 0;
      local_218 = 0.0;
      local_1d8 = 0x84;
      dVar10 = local_1a8;
      if ((local_19c & 0xffffff) != 0) {
        dVar10 = (double)FUN_140e4b060(&local_1a8);
      }
      uVar9 = (ulonglong)dVar10;
      uVar8 = (uint)uVar9;
      while (0 < (int)uVar8) {
        uVar8 = (int)uVar9 - 1;
        uVar9 = (ulonglong)uVar8;
        local_1d8 = 0x86;
        if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_228);
        }
        local_228 = 0;
        local_220 = 0;
        local_21c = 5;
        dVar10 = local_218;
        if ((local_20c & 0xffffff) != 0) {
          dVar10 = (double)FUN_140e4b060(&local_218);
        }
        uVar2 = FUN_140e4a740(&local_208);
        uVar5 = FUN_140ea8b20(&local_228,uVar2,(longlong)dVar10,0x10);
        cVar1 = FUN_140e491e0(uVar5);
        if (cVar1 == '\0') {
          local_1d8 = 0x88;
          if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_158);
          }
          local_158 = 0;
          local_150 = 0;
          local_14c = 5;
          dVar10 = local_218;
          if ((local_20c & 0xffffff) != 0) {
            dVar10 = (double)FUN_140e4b060(&local_218);
          }
          uVar2 = FUN_140e4a740(&local_208);
          puVar7 = (undefined8 *)FUN_140ea8b20(&local_158,uVar2,(longlong)dVar10,0xb);
          if (puVar7 != &local_128) {
            local_188 = *puVar7;
            uStack_180 = (double)puVar7[1];
            if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_128);
            }
            FUN_140041b80(&local_128,&local_188);
          }
          local_1d8 = 0x8a;
          ppuVar13 = (undefined8 **)((ulonglong)ppuVar13 & 0xffffffffffffff00);
          uVar12 = uVar12 & 0xffffffffffffff00;
          FUN_140e87440(&local_128,DAT_141a06448,0x80000000,&local_f8,uVar12,ppuVar13);
          local_188 = local_f8;
          uStack_180 = (double)CONCAT44(uStack_ec,uStack_f0);
          if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_178);
          }
          FUN_140041b80(&local_178,&local_188);
          local_1d8 = 0x8b;
          iVar3 = FUN_140e851f0(&local_178,&DAT_1419df7b0,DAT_141955260,0);
          if (iVar3 != 0) {
            if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_228);
            }
            local_228 = 0;
            local_220 = 0;
            local_21c = 5;
            local_e8 = &local_178;
            ppuVar13 = &local_e8;
            uVar12 = CONCAT44((int)(uVar12 >> 0x20),DAT_141a06498);
            uVar5 = FUN_140e634e0(param_1,param_2,&local_228,1,uVar12,ppuVar13);
            cVar1 = FUN_140e491e0(uVar5);
            if (cVar1 != '\0') {
              local_1d8 = 0x8d;
              uStack_1ac = 0xd;
              local_1b8 = 0x3ff0000000000000;
              dVar10 = local_218;
              if ((local_20c & 0xffffff) != 0) {
                dVar10 = (double)FUN_140e4b060(&local_218);
              }
              uVar2 = (undefined4)(uVar12 >> 0x20);
              dVar11 = local_208;
              if ((local_1fc & 0xffffff) != 0) {
                dVar11 = (double)FUN_140e4b060(&local_208);
              }
              FUN_140ea8d00((longlong)dVar11,(longlong)dVar10,0x10,&local_1b8);
              if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_1b8);
              }
              local_1d8 = 0x8f;
              if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_228);
              }
              local_228 = 0;
              local_220 = 0;
              local_21c = 5;
              local_e8 = &local_178;
              uVar5 = CONCAT44(uVar2,DAT_141a04658);
              puVar7 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_228,1,uVar5,&local_e8);
              uVar2 = (undefined4)((ulonglong)uVar5 >> 0x20);
              if (puVar7 != &local_138) {
                local_188 = *puVar7;
                uStack_180 = (double)puVar7[1];
                if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_138);
                }
                FUN_140041b80(&local_138,&local_188);
              }
              local_1d8 = 0x90;
              if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_228);
              }
              local_228 = 0;
              local_220 = 0;
              local_21c = 5;
              local_e8 = &local_178;
              ppuVar13 = &local_e8;
              uVar12 = CONCAT44(uVar2,DAT_141a04668);
              puVar7 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_228,1,uVar12,ppuVar13);
              if (puVar7 != &local_148) {
                local_188 = *puVar7;
                uStack_180 = (double)puVar7[1];
                if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_148);
                }
                FUN_140041b80(&local_148,&local_188);
              }
              local_1d8 = 0x92;
              if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_228);
              }
              local_228 = 0;
              local_220 = 0;
              local_21c = 5;
              dVar10 = local_218;
              if ((local_20c & 0xffffff) != 0) {
                dVar10 = (double)FUN_140e4b060(&local_218);
              }
              uVar2 = FUN_140e4a740(&local_208);
              pdVar6 = (double *)FUN_140ea8b20(&local_228,uVar2,(longlong)dVar10,0xc);
              uStack_1bc = *(uint *)((longlong)pdVar6 + 0xc);
              uStack_1c0 = *(undefined4 *)(pdVar6 + 1);
              if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) == 0) {
                local_1c8 = *pdVar6;
              }
              else {
                FUN_1400419b0(&local_1c8,pdVar6);
              }
              FUN_140042560(&local_1c8,&local_138);
              dVar10 = local_218;
              if ((local_20c & 0xffffff) != 0) {
                dVar10 = (double)FUN_140e4b060(&local_218);
              }
              dVar11 = local_208;
              if ((local_1fc & 0xffffff) != 0) {
                dVar11 = (double)FUN_140e4b060(&local_208);
              }
              FUN_140ea8d00((longlong)dVar11,(longlong)dVar10,0xc,&local_1c8);
              if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_1c8);
              }
              local_1d8 = 0x93;
              if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_228);
              }
              local_228 = 0;
              local_220 = 0;
              local_21c = 5;
              dVar10 = local_218;
              if ((local_20c & 0xffffff) != 0) {
                dVar10 = (double)FUN_140e4b060(&local_218);
              }
              uVar2 = FUN_140e4a740(&local_208);
              puVar7 = (undefined8 *)FUN_140ea8b20(&local_228,uVar2,(longlong)dVar10,0xe);
              local_10c = *(undefined4 *)((longlong)puVar7 + 0xc);
              local_110 = *(undefined4 *)(puVar7 + 1);
              if ((1 << ((byte)local_10c & 0x1f) & 0x46U) == 0) {
                local_118 = *puVar7;
              }
              else {
                FUN_1400419b0(&local_118,puVar7);
              }
              FUN_140042560(&local_118,&local_148);
              dVar10 = local_218;
              if ((local_20c & 0xffffff) != 0) {
                dVar10 = (double)FUN_140e4b060(&local_218);
              }
              dVar11 = local_208;
              if ((local_1fc & 0xffffff) != 0) {
                dVar11 = (double)FUN_140e4b060(&local_208);
              }
              FUN_140ea8d00((longlong)dVar11,(longlong)dVar10,0xe,&local_118);
              if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_118);
              }
              local_1d8 = 0x94;
              if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_228);
              }
              local_228 = 0;
              local_220 = 0;
              local_21c = 5;
              dVar10 = local_218;
              if ((local_20c & 0xffffff) != 0) {
                dVar10 = (double)FUN_140e4b060(&local_218);
              }
              uVar2 = FUN_140e4a740(&local_208);
              puVar7 = (undefined8 *)FUN_140ea8b20(&local_228,uVar2,(longlong)dVar10,0xd);
              local_fc = *(undefined4 *)((longlong)puVar7 + 0xc);
              local_100 = *(undefined4 *)(puVar7 + 1);
              if ((1 << ((byte)local_fc & 0x1f) & 0x46U) == 0) {
                local_108 = *puVar7;
              }
              else {
                FUN_1400419b0(&local_108,puVar7);
              }
              FUN_140042560(&local_108,&local_138);
              dVar10 = local_218;
              if ((local_20c & 0xffffff) != 0) {
                dVar10 = (double)FUN_140e4b060(&local_218);
              }
              dVar11 = local_208;
              if ((local_1fc & 0xffffff) != 0) {
                dVar11 = (double)FUN_140e4b060(&local_208);
              }
              FUN_140ea8d00((longlong)dVar11,(longlong)dVar10,0xd,&local_108);
              if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_108);
              }
              local_1d8 = 0x95;
              if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_228);
              }
              local_228 = 0;
              local_220 = 0;
              local_21c = 5;
              dVar10 = local_218;
              if ((local_20c & 0xffffff) != 0) {
                dVar10 = (double)FUN_140e4b060(&local_218);
              }
              uVar2 = FUN_140e4a740(&local_208);
              puVar7 = (undefined8 *)FUN_140ea8b20(&local_228,uVar2,(longlong)dVar10,0xf);
              local_18c = *(undefined4 *)((longlong)puVar7 + 0xc);
              local_190 = *(undefined4 *)(puVar7 + 1);
              if ((1 << ((byte)local_18c & 0x1f) & 0x46U) == 0) {
                local_198 = *puVar7;
              }
              else {
                FUN_1400419b0(&local_198,puVar7);
              }
              FUN_140042560(&local_198,&local_148);
              dVar10 = local_218;
              if ((local_20c & 0xffffff) != 0) {
                dVar10 = (double)FUN_140e4b060(&local_218);
              }
              dVar11 = local_208;
              if ((local_1fc & 0xffffff) != 0) {
                dVar11 = (double)FUN_140e4b060(&local_208);
              }
              FUN_140ea8d00((longlong)dVar11,(longlong)dVar10,0xf,&local_198);
              if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_198);
              }
              goto LAB_140146c7e;
            }
          }
          local_1d8 = 0x99;
          uStack_1f0 = (double)CONCAT44(0xd,(undefined4)uStack_1f0);
          local_1f8 = 0.0;
          local_188 = 0;
          uStack_180 = uStack_1f0;
          if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_168);
          }
          FUN_140041b80(&local_168,&local_188);
        }
LAB_140146c7e:
        local_1d8 = 0x9d;
        uVar4 = local_20c & 0xffffff;
        if (uVar4 == 0) {
LAB_140146cd3:
          local_218 = local_218 + 1.0;
        }
        else {
          if (uVar4 == 1) {
            local_218 = (double)FUN_140e4b060(&local_218);
            local_20c = 0;
            goto LAB_140146cd3;
          }
          if (uVar4 == 7) {
            local_218 = (double)CONCAT44(local_218._4_4_,local_218._0_4_ + 1);
          }
          else if (uVar4 == 10) {
            local_218 = (double)((longlong)local_218 + 1);
          }
          else {
            if (uVar4 == 0xd) {
              local_20c = 0;
              goto LAB_140146cd3;
            }
            FUN_140042910(&DAT_14172c3d8,&local_218,&local_218);
          }
        }
      }
      local_1d8 = 0xa0;
      cVar1 = FUN_140e491e0(&local_168);
      if (cVar1 != '\0') {
        local_1d8 = 0xa2;
        puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a06138);
        uStack_1ac = 0xd;
        local_1b8 = 0x3ff0000000000000;
        if (&local_1b8 != puVar7) {
          local_188 = 0x3ff0000000000000;
          uStack_180 = (double)CONCAT44(0xd,uStack_1b0);
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar7);
          }
          FUN_140041b80(puVar7,&local_188);
        }
      }
    }
  }
  else {
    local_1d8 = 0x74;
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  _eh_vector_destructor_iterator_(local_b8,0x10,6,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_1e8;
  return param_3;
}

