// gml_Object_oParPickup_Create_0 @ 0x140bb5000

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oParPickup_Create_0(longlong *param_1,ulonglong param_2)

{
  double dVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulonglong *puVar8;
  undefined8 *puVar9;
  uint uVar10;
  undefined4 uVar11;
  ulonglong uVar12;
  uint uVar13;
  longlong *plVar14;
  ulonglong uVar15;
  undefined8 **ppuVar16;
  undefined8 local_228;
  undefined4 uStack_220;
  uint uStack_21c;
  undefined8 local_218;
  undefined4 local_210;
  undefined4 local_20c;
  undefined8 local_208;
  char *local_200;
  undefined4 local_1f8;
  undefined8 local_1f0;
  undefined4 local_1e4;
  undefined8 local_1e0;
  undefined4 local_1d4;
  longlong *local_1d0;
  undefined4 local_1c8;
  uint local_1c4;
  longlong *local_1b8;
  undefined4 uStack_1b0;
  uint uStack_1ac;
  undefined8 local_1a8;
  undefined4 local_19c;
  undefined8 local_198;
  undefined4 local_18c;
  undefined8 local_188;
  undefined4 local_17c;
  undefined8 local_178;
  undefined4 local_16c;
  undefined8 local_168;
  undefined4 local_15c;
  double local_158;
  undefined4 local_14c;
  undefined8 local_148;
  undefined4 local_13c;
  undefined8 local_138;
  undefined4 local_12c;
  undefined8 local_128;
  byte local_11c;
  double local_118;
  byte local_10c;
  undefined8 local_108;
  byte local_fc;
  undefined1 local_f8 [12];
  byte local_ec;
  undefined8 local_e8;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined8 *local_c8;
  double *local_c0;
  undefined8 *local_b8;
  undefined1 *local_b0;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  
  local_200 = "gml_Object_oParisiteLegs_Step_0";
  local_1f8 = 0;
  local_208 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_208;
  uVar11 = 1;
  _eh_vector_constructor_iterator_(&local_128,0x10,4,FUN_1400424d0,FUN_140041b30);
  local_1d4 = 0xffffff;
  local_1e0 = 0;
  uStack_5c = 0xffffff;
  local_68 = 0;
  uStack_6c = 0xffffff;
  local_78 = 0;
  local_19c = 0xffffff;
  local_1a8 = 0;
  local_cc = 0xffffff;
  local_d8 = 0;
  local_dc = 0xffffff;
  local_e8 = 0;
  uVar4 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  uStack_1ac = 0xffffff;
  local_1b8 = (longlong *)0x0;
  local_7c = 0xffffff;
  local_88 = 0;
  local_14c = 0xffffff;
  local_158 = 0.0;
  local_15c = 0xffffff;
  local_168 = 0;
  uStack_8c = 0xffffff;
  local_98 = 0;
  local_16c = 0xffffff;
  local_178 = 0;
  local_12c = 0xffffff;
  local_138 = 0;
  uStack_9c = 0xffffff;
  local_a8 = 0;
  local_13c = 0xffffff;
  local_148 = 0;
  local_17c = 0xffffff;
  local_188 = 0;
  local_18c = 0xffffff;
  local_198 = 0;
  local_1e4 = 0xffffff;
  local_1f0 = 0;
  local_20c = 0xffffff;
  local_218 = 0;
  local_1f8 = 3;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f0d0);
  if (puVar5 != &local_128) {
    local_228 = (longlong *)*puVar5;
    uStack_220 = *(undefined4 *)(puVar5 + 1);
    uStack_21c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_228);
  }
  local_c8 = &local_128;
  ppuVar16 = &local_c8;
  uVar15 = CONCAT44(uVar11,DAT_141a02ef8);
  uVar6 = FUN_140e634e0(param_1,param_2,&local_218,1,uVar15,ppuVar16);
  cVar2 = FUN_140e491e0(uVar6);
  if (cVar2 == '\0') {
    local_1f8 = 5;
    FUN_140edd0e0(param_1,param_2,0,0);
    local_1f8 = 6;
  }
  else {
    local_1f8 = 9;
    puVar7 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f230);
    puVar8 = (ulonglong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419ff178);
    puVar9 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f230);
    uVar10 = *(uint *)((longlong)puVar8 + 0xc);
    if ((uVar10 & 0xffffff) == 0) {
      uVar12 = *puVar8;
    }
    else {
      uVar12 = FUN_140e4b060(puVar8);
      uVar10 = *(uint *)((longlong)puVar8 + 0xc);
    }
    uVar11 = (undefined4)uVar12;
    uStack_21c = 0;
    uVar13 = (uint)(uVar12 >> 0x20) ^ 0x80000000;
    local_228 = (longlong *)(uVar12 ^ 0x8000000000000000);
    if ((uVar10 & 0xffffff) == 0) {
      uVar12 = *puVar8;
    }
    else {
      uVar12 = FUN_140e4b060(puVar8);
      uVar11 = SUB84(local_228,0);
      uVar13 = (uint)((ulonglong)local_228 >> 0x20);
    }
    uVar6 = CONCAT44(uVar13,uVar11);
    if ((uStack_21c & 0xffffff) != 0) {
      uVar6 = FUN_140e4b060(&local_228);
    }
    if ((*(uint *)((longlong)puVar7 + 0xc) & 0xffffff) == 0) {
      uVar11 = (undefined4)*puVar7;
    }
    else {
      uVar11 = FUN_140e4b060(puVar7);
    }
    uVar6 = FUN_140e78ec0(uVar11,uVar6,uVar12);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar9);
    }
    *(undefined4 *)((longlong)puVar9 + 0xc) = 0;
    *puVar9 = uVar6;
    if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_228);
    }
    local_1f8 = 10;
    if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_218);
    }
    local_218 = 0;
    local_210 = 0;
    local_20c = 5;
    uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57560);
    FUN_140e87440(uVar6,DAT_1419ff808,0x80000000,&local_1e0,uVar15 & 0xffffffffffffff00,
                  (ulonglong)ppuVar16 & 0xffffffffffffff00);
    plVar14 = param_1;
    uVar15 = param_2;
    FUN_140e87170(&local_1e0,DAT_1419fe0e8,0x80000000,&local_68,param_1,param_2);
    FUN_140e87440(uVar6,DAT_1419ff808,0x80000000,&local_1e0,(ulonglong)plVar14 & 0xffffffffffffff00,
                  uVar15 & 0xffffffffffffff00);
    plVar14 = param_1;
    FUN_140e87170(&local_1e0,DAT_1419fe158,0x80000000,&local_78,param_1,param_2);
    uVar11 = (undefined4)((ulonglong)plVar14 >> 0x20);
    local_228 = (longlong *)CONCAT44(uRam0000000141dc7394,_DAT_141dc7390);
    uStack_220 = uRam0000000141dc7398;
    uStack_21c = uRam0000000141dc739c;
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_228);
    local_c8 = &local_128;
    local_228 = (longlong *)CONCAT44(uRam0000000141dc7394,_DAT_141dc7390);
    uStack_220 = uRam0000000141dc7398;
    uStack_21c = uRam0000000141dc739c;
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_228);
    local_c0 = &local_118;
    local_228 = (longlong *)local_68;
    uStack_220 = uStack_60;
    uStack_21c = uStack_5c;
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_228);
    local_b8 = &local_108;
    local_228 = (longlong *)local_78;
    uStack_220 = uStack_70;
    uStack_21c = uStack_6c;
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_f8);
    }
    FUN_140041b80(local_f8,&local_228);
    local_b0 = local_f8;
    ppuVar16 = &local_c8;
    plVar14 = (longlong *)CONCAT44(uVar11,DAT_1419fd548);
    puVar7 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_218,4,plVar14,ppuVar16);
    if (puVar7 != &local_1a8) {
      local_228 = (longlong *)*puVar7;
      uStack_220 = *(undefined4 *)(puVar7 + 1);
      uStack_21c = *(undefined4 *)((longlong)puVar7 + 0xc);
      if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1a8);
      }
      FUN_140041b80(&local_1a8,&local_228);
    }
    local_1f8 = 0xb;
    uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f6468);
    iVar3 = FUN_140e851f0(&local_1a8,uVar6,DAT_141955260,1);
    if (0 < iVar3) {
      local_1f8 = 0xd;
      uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57560);
      puVar7 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f6468);
      FUN_140e87440(uVar6,DAT_1419ff808,0x80000000,&local_1e0,
                    (ulonglong)plVar14 & 0xffffffffffffff00,(ulonglong)ppuVar16 & 0xffffffffffffff00
                   );
      plVar14 = param_1;
      uVar15 = param_2;
      FUN_140e87170(&local_1e0,DAT_1419fe0e8,0x80000000,&local_d8,param_1,param_2);
      uStack_21c = *(undefined4 *)((longlong)puVar7 + 0xc);
      uStack_220 = *(undefined4 *)(puVar7 + 1);
      if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) == 0) {
        local_228 = (longlong *)*puVar7;
      }
      else {
        FUN_1400419b0(&local_228,puVar7);
      }
      FUN_140046500(&local_228,&local_1a8);
      FUN_140042560(&local_d8,&local_228);
      if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_228);
      }
      FUN_140e86c30(&local_1e0,DAT_1419fe0e8,0x80000000,&local_d8);
      local_1f8 = 0xe;
      uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57560);
      puVar7 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f6468);
      FUN_140e87440(uVar6,DAT_1419ff808,0x80000000,&local_1e0,
                    (ulonglong)plVar14 & 0xffffffffffffff00,uVar15 & 0xffffffffffffff00);
      plVar14 = param_1;
      FUN_140e87170(&local_1e0,DAT_1419fe158,0x80000000,&local_e8,param_1,param_2);
      uStack_21c = *(undefined4 *)((longlong)puVar7 + 0xc);
      uStack_220 = *(undefined4 *)(puVar7 + 1);
      if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) == 0) {
        local_228 = (longlong *)*puVar7;
      }
      else {
        FUN_1400419b0(&local_228,puVar7);
      }
      FUN_140046500(&local_228,&local_1a8);
      FUN_140042560(&local_e8,&local_228);
      if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_228);
      }
      FUN_140e86c30(&local_1e0,DAT_1419fe158,0x80000000,&local_e8);
    }
    uVar11 = (undefined4)((ulonglong)plVar14 >> 0x20);
    local_1f8 = 0x11;
    FUN_140e98b30(param_1,param_2);
    local_1f8 = 0x13;
    uVar6 = (**(code **)(*param_1 + 0x10))(param_1,DAT_1419f6498);
    FUN_140e609c0(param_1);
    FUN_1400460e0(uVar6,uVar4);
    FUN_140e60910(1);
    local_1f8 = 0x15;
    if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_218);
    }
    local_218 = 0;
    local_210 = 0;
    local_20c = 5;
    if (puVar5 != &local_128) {
      local_228 = (longlong *)*puVar5;
      uStack_220 = *(undefined4 *)(puVar5 + 1);
      uStack_21c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      FUN_140041b80(&local_128,&local_228);
    }
    local_c8 = &local_128;
    ppuVar16 = &local_c8;
    uVar15 = CONCAT44(uVar11,DAT_141a02ef8);
    uVar4 = FUN_140e634e0(param_1,param_2,&local_218,1,uVar15,ppuVar16);
    cVar2 = FUN_140e491e0(uVar4);
    if (cVar2 != '\0') {
      (**(code **)(*param_1 + 8))(param_1,DAT_141a1f0d0);
      uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f090);
      uStack_21c = 0;
      local_228 = (longlong *)0x0;
      iVar3 = FUN_140e851f0(uVar4,&local_228,DAT_141955260,1);
      if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_228);
      }
      if (iVar3 == -2 || -1 < iVar3) {
        local_1f8 = 0x17;
        uStack_21c = 6;
        uVar12 = (ulonglong)ppuVar16 & 0xffffffffffffff00;
        uVar15 = uVar15 & 0xffffffffffffff00;
        local_228 = param_1;
        FUN_140e87440(&local_228,DAT_1419fe0e8,0x80000000,&local_1b8,uVar15,uVar12);
        if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_228);
        }
        uStack_21c = 6;
        uVar12 = uVar12 & 0xffffffffffffff00;
        uVar15 = uVar15 & 0xffffffffffffff00;
        local_228 = param_1;
        FUN_140e87440(&local_228,DAT_1419fded8,0x80000000,&local_88,uVar15,uVar12);
        if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_228);
        }
        local_1c4 = uStack_1ac;
        local_1c8 = uStack_1b0;
        if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) == 0) {
          local_1d0 = local_1b8;
        }
        else {
          FUN_1400419b0(&local_1d0,&local_1b8);
        }
        FUN_1400462a0(&local_1d0,&local_88);
        uStack_21c = local_1c4;
        uStack_220 = local_1c8;
        if ((1 << ((byte)local_1c4 & 0x1f) & 0x46U) == 0) {
          local_228 = local_1d0;
        }
        else {
          FUN_1400419b0(&local_228,&local_1d0);
        }
        FUN_140046500(&local_228,puVar8);
        if ((uStack_21c & 0xffffff) == 0) {
          uVar11 = SUB84(local_228,0);
        }
        else {
          uVar11 = FUN_140e4b060(&local_228);
        }
        dVar1 = (double)FUN_140e78ec0(uVar11,&DAT_bff0000000000000,0x3ff0000000000000);
        if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_158);
        }
        local_14c = 0;
        local_158 = dVar1 * 25.0;
        if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_228);
        }
        if ((1 << ((byte)local_1c4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1d0);
        }
        local_1f8 = 0x18;
        if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_168);
        }
        local_15c = 0;
        local_168 = 0x4000000000000000;
        local_1f8 = 0x1a;
        if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_218);
        }
        local_218 = 0;
        local_210 = 0;
        local_20c = 5;
        uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f0d0);
        (**(code **)(*param_1 + 8))(param_1,DAT_1419ff178);
        uVar12 = uVar12 & 0xffffffffffffff00;
        FUN_140e87440(uVar4,DAT_141a0a7f8,0x80000000,&local_98,uVar15 & 0xffffffffffffff00,uVar12);
        local_228 = (longlong *)local_98;
        uStack_220 = uStack_90;
        uStack_21c = uStack_8c;
        if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_128);
        }
        FUN_140041b80(&local_128,&local_228);
        local_c8 = &local_128;
        local_b8 = &local_168;
        ppuVar16 = &local_c8;
        local_c0 = &local_158;
        puVar5 = (undefined8 *)
                 gml_Script_AngleRotateTowardsLerp(param_1,param_2,&local_218,3,ppuVar16);
        if (puVar5 != &local_178) {
          local_228 = (longlong *)*puVar5;
          uStack_220 = *(undefined4 *)(puVar5 + 1);
          uStack_21c = *(undefined4 *)((longlong)puVar5 + 0xc);
          if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_178);
          }
          FUN_140041b80(&local_178,&local_228);
        }
        FUN_140e87930(uVar4,DAT_141a0a7f8,0x80000000,&local_178);
        local_1f8 = 0x1c;
        uStack_21c = 6;
        uVar12 = uVar12 & 0xffffffffffffff00;
        uVar15 = (ulonglong)ppuVar16 & 0xffffffffffffff00;
        local_228 = param_1;
        FUN_140e87440(&local_228,DAT_1419fe0e8,0x80000000,&local_1b8,uVar15,uVar12);
        if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_228);
        }
        local_228 = local_1b8;
        uStack_220 = uStack_1b0;
        uStack_21c = uStack_1ac;
        if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_138);
        }
        FUN_140041b80(&local_138,&local_228);
        uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f0d0);
        FUN_140e86c30(uVar4,DAT_1419fe0e8,0x80000000,&local_138);
        local_1f8 = 0x1d;
        uStack_21c = 6;
        local_228 = param_1;
        FUN_140e87440(&local_228,DAT_1419fe158,0x80000000,&local_a8,uVar15 & 0xffffffffffffff00,
                      uVar12 & 0xffffffffffffff00);
        if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_228);
        }
        local_228 = (longlong *)local_a8;
        uStack_220 = uStack_a0;
        uStack_21c = uStack_9c;
        if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_148);
        }
        FUN_140041b80(&local_148,&local_228);
        uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f0d0);
        FUN_140e86c30(uVar4,DAT_1419fe158,0x80000000,&local_148);
        local_1f8 = 0x1f;
        puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f5ef8);
        if (puVar5 != &local_188) {
          local_228 = (longlong *)*puVar5;
          uStack_220 = *(undefined4 *)(puVar5 + 1);
          uStack_21c = *(undefined4 *)((longlong)puVar5 + 0xc);
          if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_188);
          }
          FUN_140041b80(&local_188,&local_228);
        }
        uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f0d0);
        FUN_140e87930(uVar4,DAT_1419f5ef8,0x80000000,&local_188);
        local_1f8 = 0x21;
        if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_198);
        }
        local_18c = 0;
        local_198 = 0;
        uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f0d0);
        FUN_140e87930(uVar4,DAT_141a1f230,0x80000000,&local_198);
        local_1f8 = 0x22;
        if ((1 << ((byte)local_1e4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1f0);
        }
        local_1e4 = 0;
        local_1f0 = 0;
        uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f0d0);
        FUN_140e87930(uVar4,DAT_141a1f500,0x80000000,&local_1f0);
        local_1f8 = 0x23;
        if ((1 << ((byte)local_1e4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1f0);
        }
        local_1e4 = 0;
        local_1f0 = 0;
        uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f0d0);
        FUN_140e87930(uVar4,DAT_141a1f500,0x80000000,&local_1f0);
        goto LAB_140bb5f67;
      }
    }
    local_1f8 = 0x15;
  }
LAB_140bb5f67:
  if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  if ((1 << ((byte)local_1e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f0);
  }
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)local_1d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e0);
  }
  _eh_vector_destructor_iterator_(&local_128,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_208;
  return;
}

