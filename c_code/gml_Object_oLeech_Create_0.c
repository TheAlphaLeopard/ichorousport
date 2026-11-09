// gml_Object_oLeech_Create_0 @ 0x140b39420

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oLeech_Create_0(longlong *param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong **pplVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  longlong *local_res8;
  longlong *local_res10;
  uint local_res18;
  longlong *plVar11;
  ulonglong uVar12;
  undefined8 **ppuVar13;
  longlong *plVar14;
  ulonglong uVar15;
  undefined8 local_228;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  longlong *local_218;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined8 local_208;
  undefined4 local_200;
  undefined4 local_1fc;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined8 local_1e8;
  char *local_1e0;
  undefined4 local_1d8;
  undefined8 local_1d0;
  undefined4 local_1c4;
  undefined8 local_1b8;
  byte local_1ac;
  longlong *local_1a8;
  byte local_19c;
  undefined1 local_198 [12];
  byte local_18c;
  undefined1 local_188 [12];
  byte local_17c;
  undefined8 local_178;
  byte local_16c;
  undefined8 local_168;
  undefined4 local_160;
  undefined4 local_15c;
  longlong *local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  longlong *local_148;
  undefined4 local_140;
  undefined4 local_13c;
  longlong *local_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined8 local_128;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 local_10c;
  undefined8 *local_108;
  longlong **local_100;
  undefined1 *local_f8;
  undefined1 *local_f0;
  undefined8 *local_e8;
  undefined8 local_e0;
  undefined4 local_d4;
  longlong *local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  longlong *local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong *local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong *local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 local_78 [16];
  longlong local_68;
  
  local_res18 = 0;
  local_1e0 = "gml_Object_oLanceSpawn_Step_0";
  local_1d8 = 0;
  local_1e8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_1e8;
  uVar4 = 1;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(&local_1b8,0x10,5,FUN_1400424d0,FUN_140041b30);
  uVar5 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a1ef20);
  uStack_7c = 0xffffff;
  local_88 = (longlong *)0x0;
  pplVar6 = (longlong **)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419f3d08);
  uStack_8c = 0xffffff;
  local_98 = (longlong *)0x0;
  uStack_9c = 0xffffff;
  local_a8 = (longlong *)0x0;
  local_10c = 0xffffff;
  local_118 = 0;
  uStack_ac = 0xffffff;
  local_b8 = (longlong *)0x0;
  local_11c = 0xffffff;
  local_128 = 0;
  local_12c = 0xffffff;
  local_138 = (longlong *)0x0;
  local_13c = 0xffffff;
  local_148 = (longlong *)0x0;
  uStack_bc = 0xffffff;
  local_c8 = (longlong *)0x0;
  local_1c4 = 0xffffff;
  local_1d0 = 0;
  local_d4 = 0xffffff;
  local_e0 = 0;
  uVar7 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_1fc = 0xffffff;
  local_208 = 0;
  local_1ec = 0xffffff;
  local_1f8 = 0;
  local_15c = 0xffffff;
  local_168 = 0;
  local_1d8 = 2;
  puVar8 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f0d0);
  if (puVar8 != &local_1b8) {
    local_228 = (longlong *)*puVar8;
    uStack_220 = *(undefined4 *)(puVar8 + 1);
    uStack_21c = *(undefined4 *)((longlong)puVar8 + 0xc);
    if ((1 << ((byte)_local_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    FUN_140041b80(&local_1b8,&local_228);
  }
  local_108 = &local_1b8;
  ppuVar13 = &local_108;
  uVar12 = CONCAT44(uVar4,DAT_141a02ef8);
  uVar9 = FUN_140e634e0(local_res8,local_res10,&local_208,1,uVar12,ppuVar13);
  cVar1 = FUN_140e491e0(uVar9);
  if (cVar1 != '\0') {
    uVar9 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419f3c78);
    uStack_20c = 0;
    local_218 = (longlong *)0x0;
    iVar2 = FUN_140e851f0(uVar9,&local_218,DAT_141955260,1);
    if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_218);
    }
    if (iVar2 == -2 || 0 < iVar2) {
      local_1d8 = 9;
      uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f0d0);
      FUN_140e87170(uVar5,DAT_1419fe0e8,0x80000000,&local_a8,local_res8,local_res10);
      local_228 = local_a8;
      uStack_220 = uStack_a0;
      uStack_21c = uStack_9c;
      if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      FUN_140041b80(&local_118,&local_228);
      FUN_140e86fa0(local_res8,DAT_1419fe0e8,0x80000000,&local_118);
      local_1d8 = 10;
      uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f0d0);
      plVar11 = local_res8;
      plVar14 = local_res10;
      FUN_140e87170(uVar5,DAT_1419fe158,0x80000000,&local_b8,local_res8,local_res10);
      local_228 = local_b8;
      uStack_220 = uStack_b0;
      uStack_21c = uStack_ac;
      if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      FUN_140041b80(&local_128,&local_228);
      FUN_140e86fa0(local_res8,DAT_1419fe158,0x80000000,&local_128);
      local_1d8 = 0xc;
      uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a0a848);
      uStack_20c = 0;
      local_218 = (longlong *)0x4020000000000000;
      uVar3 = FUN_140e851f0(uVar5,&local_218,DAT_141955260,1);
      if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_218);
      }
      if (uVar3 < 0x80000000) {
        local_1d8 = 0xe;
        if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_208);
        }
        local_208 = 0;
        local_200 = 0;
        local_1fc = 5;
        uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f0d0);
        uStack_20c = 6;
        local_218 = local_res8;
        uVar15 = (ulonglong)plVar14 & 0xffffffffffffff00;
        uVar12 = (ulonglong)plVar11 & 0xffffffffffffff00;
        FUN_140e87440(&local_218,DAT_1419fe0e8,0x80000000,&local_138,uVar12,uVar15);
        if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_218);
        }
        uVar15 = uVar15 & 0xffffffffffffff00;
        uVar12 = uVar12 & 0xffffffffffffff00;
        FUN_140e87440(uVar5,DAT_1419f5ef8,0x80000000,&local_148,uVar12,uVar15);
        uStack_20c = 6;
        local_218 = local_res8;
        uVar12 = uVar12 & 0xffffffffffffff00;
        FUN_140e87440(&local_218,DAT_1419fe158,0x80000000,&local_c8,uVar12,
                      uVar15 & 0xffffffffffffff00);
        uVar4 = (undefined4)(uVar12 >> 0x20);
        if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_218);
        }
        uStack_20c = local_13c;
        uStack_210 = local_140;
        if ((1 << ((byte)local_13c & 0x1f) & 0x46U) == 0) {
          local_218 = local_148;
        }
        else {
          FUN_1400419b0(&local_218,&local_148);
        }
        local_res18 = 4;
        uStack_21c = 7;
        local_228 = (longlong *)CONCAT44(local_228._4_4_,0xc);
        FUN_140042560(&local_218,&local_228);
        if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_228);
        }
        uStack_14c = local_12c;
        uStack_150 = local_130;
        if ((1 << ((byte)local_12c & 0x1f) & 0x46U) == 0) {
          local_158 = local_138;
        }
        else {
          FUN_1400419b0(&local_158,&local_138);
        }
        local_res18 = 0xc;
        FUN_1400460e0(&local_158,&local_218);
        local_228 = local_158;
        uStack_220 = uStack_150;
        uStack_21c = uStack_14c;
        if ((1 << ((byte)_local_1ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1b8);
        }
        FUN_140041b80(&local_1b8,&local_228);
        local_res18 = 4;
        if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_158);
        }
        local_res18 = 0;
        if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_218);
        }
        local_108 = &local_1b8;
        local_228 = local_c8;
        uStack_220 = uStack_c0;
        uStack_21c = uStack_bc;
        if ((1 << ((byte)_local_19c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1a8);
        }
        FUN_140041b80(&local_1a8,&local_228);
        local_100 = &local_1a8;
        local_228 = (longlong *)CONCAT44(uRam0000000141dd9a0c,_DAT_141dd9a08);
        uStack_220 = uRam0000000141dd9a10;
        uStack_21c = DAT_141dd9a14;
        if ((1 << ((byte)_local_18c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_198);
        }
        FUN_140041b80(local_198,&local_228);
        local_f8 = local_198;
        uStack_21c = 0xf;
        local_228 = (longlong *)0x10000000000012f;
        local_218 = (longlong *)0x10000000000012f;
        uStack_210 = uStack_220;
        uStack_20c = 0xf;
        if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_188);
        }
        FUN_140041b80(local_188,&local_218);
        local_f0 = local_188;
        uVar9 = CONCAT44(uVar4,DAT_141a0a7c8);
        uVar5 = FUN_140e634e0(local_res8,local_res10,&local_208,4,uVar9,&local_108);
        iVar2 = FUN_140e63cb0(local_78,&local_res8,&local_res10,uVar5);
        uVar4 = (undefined4)((ulonglong)uVar9 >> 0x20);
        uVar3 = 0x12;
        if (0 < iVar2) {
          do {
            local_1d8 = 0x10;
            puVar8 = (undefined8 *)(**(code **)(*local_res10 + 8))(local_res10,DAT_141a1eed0);
            puVar10 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1eed0);
            FUN_140e609c0(local_res8);
            if (puVar8 != puVar10) {
              local_228 = (longlong *)*puVar8;
              uStack_220 = *(undefined4 *)(puVar8 + 1);
              uStack_21c = *(undefined4 *)((longlong)puVar8 + 0xc);
              if ((1 << ((byte)*(undefined4 *)((longlong)puVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(puVar10);
              }
              FUN_140041b80(puVar10,&local_228);
            }
            FUN_140e60910(1);
            local_1d8 = 0x11;
            puVar8 = (undefined8 *)(**(code **)(*local_res10 + 8))(local_res10,DAT_141a1f0d0);
            puVar10 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f0d0);
            FUN_140e609c0(local_res8);
            if (puVar8 != puVar10) {
              local_228 = (longlong *)*puVar8;
              uStack_220 = *(undefined4 *)(puVar8 + 1);
              uStack_21c = *(undefined4 *)((longlong)puVar8 + 0xc);
              if ((1 << ((byte)*(undefined4 *)((longlong)puVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(puVar10);
              }
              FUN_140041b80(puVar10,&local_228);
            }
            FUN_140e60910(1);
            local_1d8 = 0x12;
            puVar8 = (undefined8 *)(**(code **)(*local_res10 + 8))(local_res10,DAT_141a0a7d8);
            puVar10 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a0a7d8);
            FUN_140e609c0(local_res8);
            if (puVar8 != puVar10) {
              local_228 = (longlong *)*puVar8;
              uStack_220 = *(undefined4 *)(puVar8 + 1);
              uStack_21c = *(undefined4 *)((longlong)puVar8 + 0xc);
              if ((1 << ((byte)*(undefined4 *)((longlong)puVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(puVar10);
              }
              FUN_140041b80(puVar10,&local_228);
            }
            FUN_140e60910(1);
            local_1d8 = 0x13;
            puVar8 = (undefined8 *)(**(code **)(*local_res10 + 8))(local_res10,DAT_1419f3ca8);
            puVar10 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419f3ca8);
            FUN_140e609c0(local_res8);
            if (puVar8 != puVar10) {
              local_228 = (longlong *)*puVar8;
              uStack_220 = *(undefined4 *)(puVar8 + 1);
              uStack_21c = *(undefined4 *)((longlong)puVar8 + 0xc);
              if ((1 << ((byte)*(undefined4 *)((longlong)puVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(puVar10);
              }
              FUN_140041b80(puVar10,&local_228);
            }
            FUN_140e60910(1);
            cVar1 = FUN_140e643f0(local_78,&local_res8,&local_res10);
            uVar4 = (undefined4)((ulonglong)uVar9 >> 0x20);
          } while (cVar1 != '\0');
        }
        FUN_140e63970(local_78,&local_res8,&local_res10);
        local_1d8 = 0x17;
        uVar5 = (**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419f3c78);
        FUN_1400bdd80(uVar5);
        local_1d8 = 0x18;
        puVar8 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a0a848);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar8);
        }
        *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
        *puVar8 = 0;
        local_1d8 = 0x1b;
        if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_208);
        }
        local_208 = 0;
        local_200 = 0;
        local_1fc = 5;
        puVar8 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f0d0);
        if (puVar8 != &local_1b8) {
          local_228 = (longlong *)*puVar8;
          uStack_220 = *(undefined4 *)(puVar8 + 1);
          uStack_21c = *(undefined4 *)((longlong)puVar8 + 0xc);
          if ((1 << (local_1ac & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1b8);
          }
          FUN_140041b80(&local_1b8,&local_228);
        }
        local_108 = &local_1b8;
        local_228 = (longlong *)CONCAT44(uRam0000000141dd9a1c,_DAT_141dd9a18);
        uStack_220 = uRam0000000141dd9a20;
        uStack_21c = DAT_141dd9a24;
        if ((1 << (local_19c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1a8);
        }
        FUN_140041b80(&local_1a8,&local_228);
        local_100 = &local_1a8;
        ppuVar13 = &local_108;
        uVar12 = CONCAT44(uVar4,DAT_141a56cf0);
        uVar5 = FUN_140e634e0(local_res8,local_res10,&local_208,2,uVar12,ppuVar13);
        cVar1 = FUN_140e491e0(uVar5);
        if (cVar1 != '\0') {
          local_1d8 = 0x1c;
          if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1f8);
          }
          local_1f8 = 0;
          local_1f0 = 0;
          local_1ec = 5;
          uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f0d0);
          uVar9 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419f3c78);
          uVar15 = (ulonglong)ppuVar13 & 0xffffffffffffff00;
          uVar12 = uVar12 & 0xffffffffffffff00;
          FUN_140e87440(uVar5,DAT_1419f5e38,0x80000000,&local_1d0,uVar12,uVar15);
          FUN_140e87440(&local_1d0,DAT_1419f3cc8,0x80000000,&local_e0,uVar12 & 0xffffffffffffff00,
                        uVar15 & 0xffffffffffffff00);
          uStack_21c = 0;
          local_228 = (longlong *)0x0;
          iVar2 = FUN_140e851f0(uVar9,&local_228,DAT_141955260,1);
          if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_228);
          }
          if (iVar2 < 1) {
            uStack_20c = DAT_1419df7bc;
            uStack_210 = DAT_1419df7b8;
            if ((1 << ((byte)DAT_1419df7bc & 0x1f) & 0x46U) == 0) {
              local_218 = DAT_1419df7b0;
            }
            else {
              FUN_1400419b0(&local_218,&DAT_1419df7b0);
            }
            pplVar6 = &local_218;
            local_res18 = 0x12;
          }
          else {
            uStack_21c = 0;
            local_228 = (longlong *)0x4020000000000000;
            pplVar6 = (longlong **)&local_228;
            uVar3 = 1;
            local_res18 = 1;
          }
          uVar4 = uStack_21c;
          local_158 = *pplVar6;
          uStack_150 = *(undefined4 *)(pplVar6 + 1);
          uStack_14c = *(undefined4 *)((longlong)pplVar6 + 0xc);
          if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_198);
          }
          FUN_140041b80(local_198,&local_158);
          if (((uVar3 & 2) != 0) &&
             (uVar3 = uVar3 & 0xfffffffd, local_res18 = uVar3,
             (1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0)) {
            FUN_140041a50(&local_218);
          }
          if (((uVar3 & 1) != 0) && ((1 << ((byte)uVar4 & 0x1f) & 0x46U) != 0)) {
            FUN_140041a50(&local_228);
          }
          local_f8 = local_198;
          uVar5 = 0;
          switch(local_1c4) {
          case 0:
          case 7:
          case 10:
          case 0xd:
switchD_140b3a129_caseD_0:
            uVar4 = FUN_140e4a8b0(&local_1d0);
            uVar5 = FUN_140e87250(uVar4);
            break;
          case 6:
            uVar5 = local_1d0;
            break;
          case 0xf:
            iVar2 = (int)((ulonglong)local_1d0 >> 0x20);
            if ((iVar2 == 0x1000000) || (iVar2 == 0x4000001)) goto switchD_140b3a129_caseD_0;
          }
          FUN_140e63610(uVar5,local_res10,&local_1f8,1,&local_e0,&local_f8);
        }
        if (local_68 != 0) {
          FUN_140e4cd60();
        }
      }
      local_1d8 = 0x1f;
      uVar5 = (**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a0a848);
      FUN_140e609c0(local_res8);
      FUN_1400460e0(uVar5,uVar7);
      FUN_140e60910(1);
      goto LAB_140b3a492;
    }
  }
  local_1d8 = 4;
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  local_1f8 = 0;
  local_1f0 = 0;
  local_1ec = 5;
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  local_168 = 0;
  local_160 = 0;
  local_15c = 5;
  uVar15 = (ulonglong)ppuVar13 & 0xffffffffffffff00;
  uVar12 = uVar12 & 0xffffffffffffff00;
  FUN_140e87440(uVar5,DAT_1419ef438,0x80000000,&local_88,uVar12,uVar15);
  uStack_21c = 6;
  local_228 = local_res8;
  uVar12 = uVar12 & 0xffffffffffffff00;
  FUN_140e87440(&local_228,DAT_141a0a828,0x80000000,&local_98,uVar12,uVar15 & 0xffffffffffffff00);
  uVar4 = (undefined4)(uVar12 >> 0x20);
  if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  FUN_140e609c0(DAT_141a729d8);
  FUN_140e645a0(&local_218,gml_Script_anon_266_gml_Object_oLeech_Create_0,0);
  if (&local_218 != pplVar6) {
    local_228 = local_218;
    uStack_220 = uStack_210;
    uStack_21c = uStack_20c;
    if ((1 << ((byte)*(undefined4 *)((longlong)pplVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(pplVar6);
    }
    FUN_140041b80(pplVar6,&local_228);
  }
  FUN_140e60910(1);
  if (pplVar6 != &local_1a8) {
    local_228 = *pplVar6;
    uStack_220 = *(undefined4 *)(pplVar6 + 1);
    uStack_21c = *(undefined4 *)((longlong)pplVar6 + 0xc);
    if ((1 << (local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    FUN_140041b80(&local_1a8,&local_228);
  }
  if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  local_100 = &local_1a8;
  local_228 = local_98;
  uStack_220 = uStack_90;
  uStack_21c = uStack_8c;
  if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_198);
  }
  FUN_140041b80(local_198,&local_228);
  local_f8 = local_198;
  local_228 = local_88;
  uStack_220 = uStack_80;
  uStack_21c = uStack_7c;
  if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_188);
  }
  FUN_140041b80(local_188,&local_228);
  local_f0 = local_188;
  puVar8 = (undefined8 *)
           FUN_140e634e0(local_res8,local_res10,&local_168,2,CONCAT44(uVar4,DAT_1419fd6d8),
                         &local_100);
  if (puVar8 != &local_178) {
    local_228 = (longlong *)*puVar8;
    uStack_220 = *(undefined4 *)(puVar8 + 1);
    uStack_21c = *(undefined4 *)((longlong)puVar8 + 0xc);
    if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    FUN_140041b80(&local_178,&local_228);
  }
  local_e8 = &local_178;
  gml_Script___remove_listener_from_signal_anon_1472_SignalController_SIGNALS
            (local_res8,local_res10,&local_1f8,2,&local_f0);
  local_1d8 = 5;
  FUN_140edd0e0(local_res8,local_res10,0,0);
  local_1d8 = 6;
LAB_140b3a492:
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e0);
  }
  if ((1 << ((byte)local_1c4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d0);
  }
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  _eh_vector_destructor_iterator_(&local_1b8,0x10,5,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_1e8;
  return;
}

