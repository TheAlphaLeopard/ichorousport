// gml_Object_oEffectSpurt_Step_0 @ 0x140924d30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oEffectSpurt_Step_0(longlong *param_1,ulonglong param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  double *pdVar6;
  undefined8 *puVar7;
  float fVar8;
  undefined1 *puVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined4 uVar16;
  longlong *plVar13;
  undefined8 **ppuVar14;
  ulonglong uVar15;
  undefined8 **ppuVar17;
  undefined8 local_198;
  undefined4 uStack_190;
  uint uStack_18c;
  undefined8 local_188;
  undefined4 local_180;
  undefined4 local_17c;
  undefined8 local_178;
  byte local_16c;
  undefined8 local_168;
  byte local_15c;
  undefined8 local_158;
  byte local_14c;
  double local_148;
  undefined4 local_13c;
  undefined8 local_138;
  char *local_130;
  undefined4 local_128;
  undefined8 *local_120;
  undefined8 *local_118;
  undefined8 *local_110;
  undefined1 *local_108;
  undefined4 uStack_100;
  uint uStack_fc;
  double local_f8;
  undefined4 uStack_f0;
  uint uStack_ec;
  undefined8 local_e8;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  double local_b8;
  uint local_ac;
  double local_a8;
  uint local_9c;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  
  local_130 = "gml_Object_oEffectSlash_Step_0";
  local_128 = 0;
  local_138 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_138;
  uVar16 = 1;
  _eh_vector_constructor_iterator_(&local_178,0x10,3,FUN_1400424d0,FUN_140041b30);
  uVar3 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419ef678);
  uStack_ec = 0xffffff;
  local_f8 = 0.0;
  local_6c = 0xffffff;
  local_78 = 0;
  uStack_fc = 0xffffff;
  local_108 = (undefined1 *)0x0;
  local_7c = 0xffffff;
  local_88 = 0;
  uStack_8c = 0xffffff;
  local_98 = 0;
  local_9c = 0xffffff;
  local_a8 = 0.0;
  local_ac = 0xffffff;
  local_b8 = 0.0;
  local_13c = 0xffffff;
  local_148 = 0.0;
  uStack_5c = 0xffffff;
  local_68 = 0;
  local_cc = 0xffffff;
  local_d8 = 0;
  uStack_bc = 0xffffff;
  local_c8 = 0;
  local_dc = 0xffffff;
  local_e8 = 0;
  local_17c = 0xffffff;
  local_188 = 0;
  local_128 = 2;
  cVar1 = FUN_140e491e0(uVar3);
  if (cVar1 == '\0') {
    local_128 = 5;
    if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    local_188 = 0;
    local_180 = 0;
    local_17c = 5;
    puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f440);
    if (puVar4 != &local_178) {
      local_198 = (longlong *)*puVar4;
      uStack_190 = *(undefined4 *)(puVar4 + 1);
      uStack_18c = *(uint *)((longlong)puVar4 + 0xc);
      if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      FUN_140041b80(&local_178,&local_198);
    }
    local_120 = &local_178;
    ppuVar17 = &local_120;
    ppuVar14 = (undefined8 **)CONCAT44(uVar16,DAT_141a02ef8);
    uVar3 = FUN_140e634e0(param_1,param_2,&local_188,1,ppuVar14,ppuVar17);
    cVar1 = FUN_140e491e0(uVar3);
    if (cVar1 != '\0') {
      local_128 = 7;
      uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f440);
      FUN_140e87170(uVar3,DAT_1419fe0e8,0x80000000,&local_f8,param_1,param_2);
      local_198 = (longlong *)local_f8;
      uStack_190 = uStack_f0;
      uStack_18c = uStack_ec;
      if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_78);
      }
      FUN_140041b80(&local_78,&local_198);
      FUN_140e86fa0(param_1,DAT_1419fe0e8,0x80000000,&local_78);
      local_128 = 8;
      uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f440);
      plVar13 = param_1;
      FUN_140e87170(uVar3,DAT_1419fe158,0x80000000,&local_108,param_1,param_2);
      uVar16 = (undefined4)((ulonglong)plVar13 >> 0x20);
      local_198 = (longlong *)local_108;
      uStack_190 = uStack_100;
      uStack_18c = uStack_fc;
      if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_88);
      }
      FUN_140041b80(&local_88,&local_198);
      FUN_140e86fa0(param_1,DAT_1419fe158,0x80000000,&local_88);
      local_128 = 10;
      if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      local_188 = 0;
      local_180 = 0;
      local_17c = 5;
      puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f0d0);
      if (puVar4 != &local_178) {
        local_198 = (longlong *)*puVar4;
        uStack_190 = *(undefined4 *)(puVar4 + 1);
        uStack_18c = *(uint *)((longlong)puVar4 + 0xc);
        if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_178);
        }
        FUN_140041b80(&local_178,&local_198);
      }
      local_120 = &local_178;
      ppuVar17 = &local_120;
      ppuVar14 = (undefined8 **)CONCAT44(uVar16,DAT_141a02ef8);
      uVar3 = FUN_140e634e0(param_1,param_2,&local_188,1,ppuVar14,ppuVar17);
      cVar1 = FUN_140e491e0(uVar3);
      if (cVar1 != '\0') {
        uStack_18c = 6;
        ppuVar17 = (undefined8 **)((ulonglong)ppuVar17 & 0xffffffffffffff00);
        ppuVar14 = (undefined8 **)((ulonglong)ppuVar14 & 0xffffffffffffff00);
        local_198 = param_1;
        FUN_140e87440(&local_198,DAT_141a0a778,0x80000000,&local_98,ppuVar14,ppuVar17);
        if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_198);
        }
        uStack_18c = 0;
        local_198 = (longlong *)&DAT_bff0000000000000;
        iVar2 = FUN_140e851f0(&local_98,&local_198,DAT_141955260,0);
        if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_198);
        }
        if (iVar2 == 0) {
          local_128 = 0xc;
          uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f0d0);
          uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f440);
          FUN_140e87170(uVar3,DAT_1419fe0e8,0x80000000,&local_a8,param_1,param_2);
          FUN_140e87170(uVar3,DAT_1419fe158,0x80000000,&local_b8,param_1,param_2);
          FUN_140e87170(uVar5,DAT_1419fe0e8,0x80000000,&local_f8,param_1,param_2);
          plVar13 = param_1;
          uVar15 = param_2;
          FUN_140e87170(uVar5,DAT_1419fe158,0x80000000,&local_108,param_1,param_2);
          puVar9 = local_108;
          if ((uStack_fc & 0xffffff) != 0) {
            puVar9 = (undefined1 *)FUN_140e4b060(&local_108);
          }
          dVar10 = local_f8;
          if ((uStack_ec & 0xffffff) != 0) {
            dVar10 = (double)FUN_140e4b060(&local_f8);
          }
          dVar11 = local_b8;
          if ((local_ac & 0xffffff) != 0) {
            dVar11 = (double)FUN_140e4b060(&local_b8);
          }
          dVar12 = local_a8;
          if ((local_9c & 0xffffff) != 0) {
            dVar12 = (double)FUN_140e4b060(&local_a8);
          }
          fVar8 = (float)FUN_140e793d0((float)dVar12,(float)dVar11,(float)dVar10,
                                       (float)(double)puVar9);
          if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_148);
          }
          local_13c = 0;
          local_148 = (double)fVar8;
          FUN_140e86fa0(param_1,DAT_141a0a778,0x80000000,&local_148);
          local_128 = 0xd;
          if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_188);
          }
          local_188 = 0;
          local_180 = 0;
          local_17c = 5;
          uStack_18c = 6;
          ppuVar17 = (undefined8 **)(uVar15 & 0xffffffffffffff00);
          local_198 = param_1;
          FUN_140e87440(&local_198,DAT_141a0a778,0x80000000,&local_98,
                        (ulonglong)plVar13 & 0xffffffffffffff00,ppuVar17);
          if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_198);
          }
          local_198 = (longlong *)local_98;
          uStack_190 = uStack_90;
          uStack_18c = uStack_8c;
          if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_178);
          }
          FUN_140041b80(&local_178,&local_198);
          local_120 = &local_178;
          local_198 = (longlong *)CONCAT44(uRam00000001419ea244,_DAT_1419ea240);
          uStack_190 = uRam00000001419ea248;
          uStack_18c = uRam00000001419ea24c;
          if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_168);
          }
          FUN_140041b80(&local_168,&local_198);
          local_118 = &local_168;
          local_198 = (longlong *)CONCAT44(uRam00000001419ea254,_DAT_1419ea250);
          uStack_190 = uRam00000001419ea258;
          uStack_18c = uRam00000001419ea25c;
          if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_158);
          }
          FUN_140041b80(&local_158,&local_198);
          local_110 = &local_158;
          ppuVar14 = &local_120;
          pdVar6 = (double *)gml_Script_animation_end(param_1,param_2,&local_188,3,ppuVar14);
          if (pdVar6 != &local_148) {
            local_198 = (longlong *)*pdVar6;
            uStack_190 = *(undefined4 *)(pdVar6 + 1);
            uStack_18c = *(uint *)((longlong)pdVar6 + 0xc);
            if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_148);
            }
            FUN_140041b80(&local_148,&local_198);
          }
          FUN_140e86fa0(param_1,DAT_141a0a778,0x80000000,&local_148);
        }
      }
    }
    local_128 = 0x12;
    if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    local_188 = 0;
    local_180 = 0;
    local_17c = 5;
    puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419efc88);
    puVar7 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419efc98);
    uStack_18c = 6;
    uVar15 = (ulonglong)ppuVar14 & 0xffffffffffffff00;
    local_198 = param_1;
    FUN_140e87440(&local_198,DAT_141a0f938,0x80000000,&local_68,uVar15,
                  (ulonglong)ppuVar17 & 0xffffffffffffff00);
    uVar16 = (undefined4)(uVar15 >> 0x20);
    if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    local_198 = (longlong *)local_68;
    uStack_190 = uStack_60;
    uStack_18c = uStack_5c;
    if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    FUN_140041b80(&local_178,&local_198);
    local_120 = &local_178;
    if (puVar4 != &local_168) {
      local_198 = (longlong *)*puVar4;
      uStack_190 = *(undefined4 *)(puVar4 + 1);
      uStack_18c = *(undefined4 *)((longlong)puVar4 + 0xc);
      if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      FUN_140041b80(&local_168,&local_198);
    }
    local_118 = &local_168;
    if (puVar7 != &local_158) {
      local_198 = (longlong *)*puVar7;
      uStack_190 = *(undefined4 *)(puVar7 + 1);
      uStack_18c = *(undefined4 *)((longlong)puVar7 + 0xc);
      if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      FUN_140041b80(&local_158,&local_198);
    }
    local_110 = &local_158;
    ppuVar17 = &local_120;
    uVar15 = CONCAT44(uVar16,DAT_141a00c58);
    puVar4 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_188,3,uVar15,ppuVar17);
    if (puVar4 != &local_d8) {
      local_198 = (longlong *)*puVar4;
      uStack_190 = *(undefined4 *)(puVar4 + 1);
      uStack_18c = *(undefined4 *)((longlong)puVar4 + 0xc);
      if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_d8);
      }
      FUN_140041b80(&local_d8,&local_198);
    }
    FUN_140e86fa0(param_1,DAT_141a0f938,0x80000000,&local_d8);
    local_128 = 0x13;
    if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    local_188 = 0;
    local_180 = 0;
    local_17c = 5;
    puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419efca8);
    uStack_18c = 6;
    uVar15 = uVar15 & 0xffffffffffffff00;
    local_198 = param_1;
    FUN_140e87440(&local_198,DAT_141a0f7f8,0x80000000,&local_c8,uVar15,
                  (ulonglong)ppuVar17 & 0xffffffffffffff00);
    uVar16 = (undefined4)(uVar15 >> 0x20);
    if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    local_198 = (longlong *)local_c8;
    uStack_190 = uStack_c0;
    uStack_18c = uStack_bc;
    if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    FUN_140041b80(&local_178,&local_198);
    local_120 = &local_178;
    local_198 = (longlong *)CONCAT44(uRam0000000141dc6e14,_DAT_141dc6e10);
    uStack_190 = uRam0000000141dc6e18;
    uStack_18c = uRam0000000141dc6e1c;
    if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    FUN_140041b80(&local_168,&local_198);
    local_118 = &local_168;
    if (puVar4 != &local_158) {
      local_198 = (longlong *)*puVar4;
      uStack_190 = *(undefined4 *)(puVar4 + 1);
      uStack_18c = *(undefined4 *)((longlong)puVar4 + 0xc);
      if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      FUN_140041b80(&local_158,&local_198);
    }
    local_110 = &local_158;
    ppuVar17 = &local_120;
    uVar15 = CONCAT44(uVar16,DAT_141a00c58);
    puVar4 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_188,3,uVar15,ppuVar17);
    if (puVar4 != &local_e8) {
      local_198 = (longlong *)*puVar4;
      uStack_190 = *(undefined4 *)(puVar4 + 1);
      uStack_18c = *(undefined4 *)((longlong)puVar4 + 0xc);
      if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e8);
      }
      FUN_140041b80(&local_e8,&local_198);
    }
    FUN_140e86fa0(param_1,DAT_141a0f7f8,0x80000000,&local_e8);
    local_128 = 0x15;
    uStack_18c = 6;
    local_198 = param_1;
    FUN_140e87440(&local_198,DAT_141a0f7f8,0x80000000,&local_c8,uVar15 & 0xffffffffffffff00,
                  (ulonglong)ppuVar17 & 0xffffffffffffff00);
    if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    uStack_18c = 0;
    local_198 = (longlong *)0x3fa999999999999a;
    iVar2 = FUN_140e851f0(&local_c8,&local_198,DAT_141955260,1);
    if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    if (iVar2 != -2 && iVar2 < 0) {
      local_128 = 0x16;
      FUN_140edd0e0(param_1,param_2,0,0);
    }
  }
  else {
    local_128 = 3;
  }
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  _eh_vector_destructor_iterator_(&local_178,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_138;
  return;
}

