// gml_Object_oSpikePile_CleanUp_0 @ 0x140d9c730

void gml_Object_oSpikePile_CleanUp_0(longlong *param_1,undefined8 param_2)

{
  bool bVar1;
  double dVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  double dVar8;
  ulonglong uVar9;
  undefined8 **ppuVar10;
  ulonglong uVar11;
  double local_1b8;
  uint local_1ac;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined8 local_198;
  undefined4 local_18c;
  undefined8 local_188;
  undefined4 local_17c;
  undefined8 local_178;
  undefined4 local_16c;
  undefined8 local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  uint uStack_14c;
  undefined8 local_148;
  undefined4 uStack_140;
  uint uStack_13c;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined4 local_120;
  uint local_11c;
  undefined8 local_118;
  char *local_110;
  undefined4 local_108;
  undefined8 local_100;
  undefined4 local_f4;
  double local_f0;
  uint local_e4;
  double local_e0;
  uint local_d4;
  undefined8 local_d0 [2];
  undefined1 local_c0 [32];
  undefined8 *local_a0;
  double *local_98;
  undefined8 *local_90;
  undefined8 local_88;
  undefined4 local_7c;
  
  local_110 = "gml_Object_oSpikePile_Step_0";
  local_108 = 0;
  local_118 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_118;
  uVar7 = 1;
  _eh_vector_constructor_iterator_(local_d0,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_f4 = 0xffffff;
  local_100 = 0;
  local_1ac = 0xffffff;
  local_1b8 = 0.0;
  local_18c = 0xffffff;
  local_198 = 0;
  uStack_13c = 0xffffff;
  local_148 = 0;
  uStack_15c = 0xffffff;
  local_168 = 0;
  local_16c = 0xffffff;
  local_178 = 0;
  local_17c = 0xffffff;
  local_188 = 0;
  local_7c = 0;
  local_88 = 0x3fb47ae147ae147b;
  local_e4 = 0;
  local_f0 = 1.0;
  local_108 = 4;
  local_1a8 = 0;
  local_1a0 = 0;
  local_19c = 5;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a011f8);
  if (puVar5 != local_d0) {
    local_138 = *puVar5;
    uStack_130 = *(undefined4 *)(puVar5 + 1);
    uStack_12c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << ((byte)local_d0[1]._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_d0);
    }
    FUN_140041b80(local_d0,&local_138);
  }
  local_a0 = local_d0;
  uVar9 = CONCAT44(uVar7,DAT_1419f5e98);
  puVar5 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_1a8,1,uVar9,&local_a0);
  if (puVar5 != &local_100) {
    local_138 = *puVar5;
    uStack_130 = *(undefined4 *)(puVar5 + 1);
    uStack_12c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_100);
    }
    FUN_140041b80(&local_100,&local_138);
  }
  local_108 = 6;
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  local_1ac = 0;
  local_1b8 = 0.0;
  bVar1 = true;
  do {
    uVar7 = (undefined4)(uVar9 >> 0x20);
    if (!bVar1) {
      local_108 = 6;
      uVar3 = local_1ac & 0xffffff;
      if (uVar3 != 0) {
        if (uVar3 != 1) {
          if (uVar3 == 7) {
            local_1b8 = (double)CONCAT44(local_1b8._4_4_,local_1b8._0_4_ + 1);
          }
          else if (uVar3 == 10) {
            local_1b8 = (double)((longlong)local_1b8 + 1);
          }
          else {
            if (uVar3 == 0xd) {
              local_1ac = 0;
              goto LAB_140d9c9aa;
            }
            FUN_140042910(&DAT_14172c3d8,&local_1b8,&local_1b8);
          }
          goto LAB_140d9c9b4;
        }
        local_1b8 = (double)FUN_140e4b060(&local_1b8);
        local_1ac = 0;
      }
LAB_140d9c9aa:
      local_1b8 = local_1b8 + 1.0;
    }
LAB_140d9c9b4:
    bVar1 = false;
    iVar4 = FUN_140e851f0(&local_1b8,&local_100,DAT_141955260,1);
    if ((iVar4 == -2) || (-1 < iVar4)) {
      if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1a8);
      }
      if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_198);
      }
      if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1b8);
      }
      if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_100);
      }
      if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f0);
      }
      if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_88);
      }
      _eh_vector_destructor_iterator_(local_d0,0x10,3,FUN_140041b30);
      DAT_141dc7a50 = (undefined8 *)local_118;
      return;
    }
    local_108 = 7;
    if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    local_1a8 = 0;
    local_1a0 = 0;
    local_19c = 5;
    puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a011f8);
    if (puVar5 != local_d0) {
      local_158 = *(undefined4 *)puVar5;
      uStack_154 = *(undefined4 *)((longlong)puVar5 + 4);
      uStack_150 = *(undefined4 *)(puVar5 + 1);
      uStack_14c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << ((byte)local_d0[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_d0);
      }
      FUN_140041b80(local_d0,&local_158);
    }
    local_a0 = local_d0;
    local_98 = &local_1b8;
    ppuVar10 = &local_a0;
    uVar9 = CONCAT44(uVar7,DAT_1419f5a78);
    puVar5 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_1a8,2,uVar9,ppuVar10);
    if (puVar5 != &local_198) {
      local_158 = *(undefined4 *)puVar5;
      uStack_154 = *(undefined4 *)((longlong)puVar5 + 4);
      uStack_150 = *(undefined4 *)(puVar5 + 1);
      uStack_14c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_198);
      }
      FUN_140041b80(&local_198,&local_158);
    }
    local_108 = 9;
    if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    local_1a8 = 0;
    local_1a0 = 0;
    local_19c = 5;
    uVar11 = (ulonglong)ppuVar10 & 0xffffffffffffff00;
    uVar9 = uVar9 & 0xffffffffffffff00;
    FUN_140e87440(&local_198,DAT_1419f2078,0x80000000,&local_148,uVar9,uVar11);
    uVar9 = uVar9 & 0xffffffffffffff00;
    FUN_140e87440(&local_198,DAT_141a011e8,0x80000000,&local_168,uVar9,uVar11 & 0xffffffffffffff00);
    uVar7 = (undefined4)(uVar9 >> 0x20);
    local_158 = (undefined4)local_148;
    uStack_154 = local_148._4_4_;
    uStack_150 = uStack_140;
    uStack_14c = uStack_13c;
    if ((1 << ((byte)local_d0[1]._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_d0);
    }
    FUN_140041b80(local_d0,&local_158);
    local_a0 = local_d0;
    local_158 = (undefined4)local_168;
    uStack_154 = local_168._4_4_;
    uStack_150 = uStack_160;
    uStack_14c = uStack_15c;
    if ((1 << (local_c0[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_c0);
    }
    FUN_140041b80(local_c0,&local_158);
    local_98 = (double *)local_c0;
    local_90 = &local_88;
    ppuVar10 = &local_a0;
    uVar9 = CONCAT44(uVar7,DAT_141a00c58);
    puVar5 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_1a8,3,uVar9,ppuVar10);
    if (puVar5 != &local_178) {
      local_158 = *(undefined4 *)puVar5;
      uStack_154 = *(undefined4 *)((longlong)puVar5 + 4);
      uStack_150 = *(undefined4 *)(puVar5 + 1);
      uStack_14c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      FUN_140041b80(&local_178,&local_158);
    }
    FUN_140e87930(&local_198,DAT_1419f2078,0x80000000,&local_178);
    local_108 = 0xb;
    uVar11 = (ulonglong)ppuVar10 & 0xffffffffffffff00;
    uVar9 = uVar9 & 0xffffffffffffff00;
    FUN_140e87440(&local_198,DAT_1419f2078,0x80000000,&local_148,uVar9,uVar11);
    uVar11 = uVar11 & 0xffffffffffffff00;
    uVar9 = uVar9 & 0xffffffffffffff00;
    FUN_140e87440(&local_198,DAT_141a011e8,0x80000000,&local_168,uVar9,uVar11);
    local_11c = uStack_13c;
    local_120 = uStack_140;
    if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) == 0) {
      local_128 = local_148;
    }
    else {
      FUN_1400419b0(&local_128,&local_148);
    }
    FUN_1400462a0(&local_128,&local_168);
    if ((local_11c & 0xffffff) == 0) {
      uVar7 = (undefined4)local_128;
    }
    else {
      uVar7 = FUN_140e4b060(&local_128);
    }
    dVar8 = (double)FUN_140e78d00(uVar7);
    dVar2 = DAT_141955260;
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    if (dVar8 - 0.01 <= dVar2) {
      local_108 = 0xe;
      uVar9 = uVar9 & 0xffffffffffffff00;
      FUN_140e87440(&local_198,DAT_141a011e8,0x80000000,&local_168,uVar9,uVar11 & 0xffffffffffffff00
                   );
      uStack_12c = uStack_15c;
      uStack_130 = uStack_160;
      if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) == 0) {
        local_138 = local_168;
      }
      else {
        FUN_1400419b0(&local_138,&local_168);
      }
      uVar7 = uStack_12c;
      local_158 = (undefined4)local_138;
      uStack_154 = local_138._4_4_;
      uStack_150 = uStack_130;
      uStack_14c = uStack_12c;
      if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      FUN_140041b80(&local_178,&local_158);
      if ((1 << ((byte)uVar7 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      FUN_140e87930(&local_198,DAT_1419f2078,0x80000000,&local_178);
      local_108 = 0xf;
      if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      local_17c = 0;
      local_188 = 0;
      FUN_140e87930(&local_198,DAT_1419fd428,0x80000000,&local_188);
    }
    else {
      local_108 = 0xc;
      dVar8 = local_f0;
      if ((local_e4 & 0xffffff) != 0) {
        dVar8 = (double)FUN_140e4b060(&local_f0);
      }
      local_d4 = 0;
      local_e0 = -dVar8;
      uVar6 = FUN_140e4a8b0(&local_f0);
      dVar8 = local_e0;
      if ((local_d4 & 0xffffff) != 0) {
        dVar8 = (double)FUN_140e4b060(&local_e0);
      }
      uVar6 = FUN_140e78f40((longlong)dVar8,uVar6);
      if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      local_17c = 0;
      local_188 = uVar6;
      if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e0);
      }
      FUN_140e87930(&local_198,DAT_1419fd428,0x80000000,&local_188);
    }
  } while( true );
}

