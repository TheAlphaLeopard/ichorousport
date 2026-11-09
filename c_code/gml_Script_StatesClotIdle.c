// gml_Script_StatesClotIdle @ 0x140518a10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_StatesClotIdle
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  double dVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  uint uVar13;
  undefined4 uVar14;
  longlong *local_res8;
  undefined8 local_res10;
  code *pcVar15;
  ulonglong uVar16;
  undefined4 uVar19;
  undefined8 uVar17;
  undefined8 **ppuVar18;
  ulonglong in_stack_fffffffffffffd50;
  ulonglong uVar20;
  undefined8 **ppuVar21;
  undefined8 local_2a8;
  undefined4 uStack_2a0;
  uint uStack_29c;
  undefined8 local_298;
  undefined4 local_290;
  undefined4 local_28c;
  undefined8 local_288;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined8 local_278;
  undefined4 local_270;
  undefined4 local_26c;
  undefined4 local_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  uint uStack_25c;
  undefined8 local_258;
  char *local_250;
  undefined4 local_248;
  undefined8 local_238 [2];
  undefined8 local_228 [2];
  undefined8 local_218 [2];
  undefined8 local_208;
  undefined4 local_1fc;
  undefined8 local_1f8;
  byte local_1ec;
  undefined1 local_1e8 [12];
  byte local_1dc;
  undefined1 local_1d8 [12];
  byte local_1cc;
  undefined8 *local_1c8;
  undefined8 *local_1c0;
  undefined8 *local_1b8;
  undefined8 *local_1b0;
  undefined8 *local_1a8;
  undefined1 *local_1a0;
  undefined1 *local_198;
  undefined8 local_190;
  undefined4 local_184;
  undefined8 local_180;
  undefined4 local_178;
  undefined4 local_174;
  undefined8 local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined4 uStack_140;
  uint uStack_13c;
  undefined8 local_138;
  undefined4 uStack_130;
  uint uStack_12c;
  undefined8 local_128;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined1 local_c8 [16];
  longlong local_b8;
  undefined1 local_a8 [16];
  longlong local_98;
  undefined1 local_88 [16];
  longlong local_78;
  
  local_250 = "gml_Script_StatesClotIntro";
  local_258 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_258;
  local_248 = 1;
  pcVar15 = FUN_140041b30;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(local_238,0x10,7,FUN_1400424d0,FUN_140041b30);
  local_cc = 0xffffff;
  local_d8 = 0;
  local_184 = 0xffffff;
  local_190 = 0;
  uStack_dc = 0xffffff;
  local_e8 = 0;
  local_10c = 0xffffff;
  local_118 = 0;
  uVar4 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419ef678);
  uStack_12c = 0xffffff;
  local_138 = 0;
  uStack_13c = 0xffffff;
  local_148 = 0;
  uStack_14c = 0xffffff;
  local_158 = 0;
  uStack_15c = 0xffffff;
  local_168 = 0;
  local_11c = 0xffffff;
  local_128 = 0;
  local_ec = 0xffffff;
  local_f8 = 0;
  local_28c = 0;
  local_298 = 0;
  local_26c = 0;
  local_278 = 0;
  local_174 = 0;
  local_180 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_248 = 3;
  if (param_4 < 1) {
    param_5 = &DAT_1419df7b0;
  }
  else {
    param_5 = (undefined8 *)*param_5;
  }
  local_fc = *(undefined4 *)((longlong)param_5 + 0xc);
  local_100 = *(undefined4 *)(param_5 + 1);
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) == 0) {
    local_108 = *param_5;
  }
  else {
    FUN_1400419b0(&local_108);
  }
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddf534) &&
     (_Init_thread_header(&DAT_141ddf534), DAT_141ddf534 == -1)) {
    _DAT_141ddf5ac = 0;
    _DAT_141ddf5a0 = 0x4000000000000000;
    _DAT_141ddf5c0 = 0;
    _DAT_141ddf5b4 = 0;
    _DAT_141ddf5c4 = 1;
    _DAT_141ddf5d4 = 0;
    _DAT_141ddf5c8 = 0x3ff0000000000000;
    _DAT_141ddf5d8 = 2;
    _DAT_141ddf5e8 = 0;
    _DAT_141ddf5dc = 0x4008000000000000;
    _DAT_141ddf5ec = 3;
    atexit((_func_5014 *)&LAB_1414816e0);
    _Init_thread_footer(&DAT_141ddf534);
  }
  uVar13 = 0;
  do {
    iVar3 = FUN_140e851f0(&DAT_141ddf5a0 + (longlong)(int)uVar13 * 0x14,&local_108,DAT_141955260,0);
    if (iVar3 == 0) {
      iVar3 = *(int *)(&DAT_141ddf5b0 + (longlong)(int)uVar13 * 0x14);
      if (iVar3 == 0) {
        local_248 = 7;
      }
      else if (iVar3 == 1) {
        local_248 = 0xb;
        uStack_27c = 0xf;
        local_288 = 0x1000000000000ee;
        uVar16 = (ulonglong)pcVar15 & 0xffffffffffffff00;
        FUN_140e87440(&local_288,DAT_141a1f2b0,0x80000000,&local_d8,uVar16,
                      in_stack_fffffffffffffd50 & 0xffffffffffffff00);
        uVar19 = (undefined4)(uVar16 >> 0x20);
        if ((1 << ((byte)uStack_27c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_288);
        }
        uStack_27c = 10;
        local_288 = 0;
        iVar3 = FUN_140e851f0(&local_d8,&local_288,DAT_141955260,0);
        if ((1 << ((byte)uStack_27c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_288);
        }
        if (iVar3 == 0) {
          local_248 = 0xd;
          puVar5 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419fd3b8);
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar5);
          }
          *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
          *puVar5 = 0;
          local_248 = 0xe;
          if ((1 << ((byte)local_184 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_190);
          }
          local_184 = 0;
          local_190 = 0;
          FUN_140e86fa0(local_res8,DAT_141a0cfc8,0x80000000,&local_190);
          local_248 = 0xf;
        }
        else {
          local_248 = 0x13;
          if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_298);
          }
          local_298 = 0;
          local_290 = 0;
          local_28c = 5;
          uVar6 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd3b8);
          local_2a8 = (longlong *)CONCAT44(uRam0000000141dc66c4,_DAT_141dc66c0);
          uStack_2a0 = uRam0000000141dc66c8;
          uStack_29c = uRam0000000141dc66cc;
          if ((1 << ((byte)local_238[1]._4_4_ & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_238);
          }
          FUN_140041b80(local_238,&local_2a8);
          local_1c8 = local_238;
          uVar17 = CONCAT44(uVar19,DAT_141a0a0d8);
          puVar5 = (undefined8 *)
                   FUN_140e634e0(local_res8,local_res10,&local_298,1,uVar17,&local_1c8);
          uVar19 = (undefined4)((ulonglong)uVar17 >> 0x20);
          uStack_27c = *(undefined4 *)((longlong)puVar5 + 0xc);
          uStack_280 = *(undefined4 *)(puVar5 + 1);
          if ((1 << ((byte)uStack_27c & 0x1f) & 0x46U) == 0) {
            local_288 = *puVar5;
          }
          else {
            FUN_1400419b0(&local_288,puVar5);
          }
          uStack_29c = 7;
          local_2a8 = (longlong *)CONCAT44(local_2a8._4_4_,2);
          FUN_140042560(&local_288,&local_2a8);
          if ((1 << ((byte)uStack_29c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2a8);
          }
          uVar13 = FUN_140e851f0(uVar6,&local_288,DAT_141955260,1);
          if ((1 << ((byte)uStack_27c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_288);
          }
          if (uVar13 < 0x80000000) {
            local_248 = 0x16;
            if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_278);
            }
            local_278 = 0;
            local_270 = 0;
            local_26c = 5;
            puVar5 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a0a748);
            puVar7 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd448);
            puVar8 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a0a748);
            if (puVar5 != local_228) {
              local_2a8 = (longlong *)*puVar5;
              uStack_2a0 = *(undefined4 *)(puVar5 + 1);
              uStack_29c = *(undefined4 *)((longlong)puVar5 + 0xc);
              if ((1 << ((byte)local_228[1]._4_4_ & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(local_228);
              }
              FUN_140041b80(local_228,&local_2a8);
            }
            local_1c0 = local_228;
            if (puVar7 != local_218) {
              local_2a8 = (longlong *)*puVar7;
              uStack_2a0 = *(undefined4 *)(puVar7 + 1);
              uStack_29c = *(undefined4 *)((longlong)puVar7 + 0xc);
              if ((1 << ((byte)local_218[1]._4_4_ & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(local_218);
              }
              FUN_140041b80(local_218,&local_2a8);
            }
            local_1b8 = local_218;
            local_2a8 = (longlong *)CONCAT44(uRam00000001419e60d4,_DAT_1419e60d0);
            uStack_2a0 = uRam00000001419e60d8;
            uStack_29c = uRam00000001419e60dc;
            if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_208);
            }
            FUN_140041b80(&local_208,&local_2a8);
            local_1b0 = &local_208;
            FUN_140e609c0(local_res8);
            uVar4 = CONCAT44(uVar19,DAT_141a00c58);
            puVar9 = (undefined8 *)
                     FUN_140e634e0(local_res8,local_res10,&local_278,3,uVar4,&local_1c0);
            uVar19 = (undefined4)((ulonglong)uVar4 >> 0x20);
            if (puVar9 != puVar8) {
              local_2a8 = (longlong *)*puVar9;
              uStack_2a0 = *(undefined4 *)(puVar9 + 1);
              uStack_29c = *(undefined4 *)((longlong)puVar9 + 0xc);
              if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(puVar8);
              }
              FUN_140041b80(puVar8,&local_2a8);
            }
            FUN_140e60910(1);
            local_248 = 0x17;
            if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_298);
            }
            local_298 = 0;
            local_290 = 0;
            local_28c = 5;
            puVar8 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a0a858);
            puVar9 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd518);
            puVar10 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a0a858);
            if (puVar8 != local_238) {
              local_2a8 = (longlong *)*puVar8;
              uStack_2a0 = *(undefined4 *)(puVar8 + 1);
              uStack_29c = *(undefined4 *)((longlong)puVar8 + 0xc);
              if ((1 << ((byte)local_238[1]._4_4_ & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(local_238);
              }
              FUN_140041b80(local_238,&local_2a8);
            }
            local_1c8 = local_238;
            if (puVar9 != local_228) {
              local_2a8 = (longlong *)*puVar9;
              uStack_2a0 = *(undefined4 *)(puVar9 + 1);
              uStack_29c = *(undefined4 *)((longlong)puVar9 + 0xc);
              if ((1 << ((byte)local_228[1]._4_4_ & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(local_228);
              }
              FUN_140041b80(local_228,&local_2a8);
            }
            local_1c0 = local_228;
            local_2a8 = (longlong *)CONCAT44(uRam00000001419e60d4,_DAT_1419e60d0);
            uStack_2a0 = uRam00000001419e60d8;
            uStack_29c = uRam00000001419e60dc;
            if ((1 << ((byte)local_218[1]._4_4_ & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_218);
            }
            FUN_140041b80(local_218,&local_2a8);
            local_1b8 = local_218;
            FUN_140e609c0(local_res8);
            ppuVar21 = &local_1c8;
            uVar16 = CONCAT44(uVar19,DAT_141a00c58);
            puVar8 = (undefined8 *)
                     FUN_140e634e0(local_res8,local_res10,&local_298,3,uVar16,ppuVar21);
            if (puVar8 != puVar10) {
              local_2a8 = (longlong *)*puVar8;
              uStack_2a0 = *(undefined4 *)(puVar8 + 1);
              uStack_29c = *(undefined4 *)((longlong)puVar8 + 0xc);
              if ((1 << ((byte)*(undefined4 *)((longlong)puVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(puVar10);
              }
              FUN_140041b80(puVar10,&local_2a8);
            }
            FUN_140e60910(1);
            local_248 = 0x19;
            uStack_27c = *(undefined4 *)((longlong)puVar7 + 0xc);
            uStack_280 = *(undefined4 *)(puVar7 + 1);
            if ((1 << ((byte)uStack_27c & 0x1f) & 0x46U) == 0) {
              local_288 = *puVar7;
            }
            else {
              FUN_1400419b0(&local_288,puVar7);
            }
            uStack_29c = 0;
            local_2a8 = (longlong *)0x3feccccccccccccd;
            FUN_140042560(&local_288,&local_2a8);
            if ((1 << ((byte)uStack_29c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_2a8);
            }
            uVar13 = FUN_140e851f0(puVar5,&local_288,DAT_141955260,1);
            if ((1 << ((byte)uStack_27c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_288);
            }
            if (uVar13 < 0x80000000) {
              local_248 = 0x1b;
              (**(code **)(*local_res8 + 8))(local_res8,DAT_141a0a748);
              puVar5 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd448);
              puVar7 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a0a748);
              FUN_140e609c0(local_res8);
              if (puVar5 != puVar7) {
                local_2a8 = (longlong *)*puVar5;
                uStack_2a0 = *(undefined4 *)(puVar5 + 1);
                uStack_29c = *(undefined4 *)((longlong)puVar5 + 0xc);
                if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(puVar7);
                }
                FUN_140041b80(puVar7,&local_2a8);
              }
              FUN_140e60910(1);
              local_248 = 0x1c;
              puVar5 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd518);
              puVar7 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a0a858);
              FUN_140e609c0(local_res8);
              if (puVar5 != puVar7) {
                local_2a8 = (longlong *)*puVar5;
                uStack_2a0 = *(undefined4 *)(puVar5 + 1);
                uStack_29c = *(undefined4 *)((longlong)puVar5 + 0xc);
                if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(puVar7);
                }
                FUN_140041b80(puVar7,&local_2a8);
              }
              FUN_140e60910(1);
              local_248 = 0x1d;
              uStack_29c = 0xf;
              local_2a8 = (longlong *)0x100000000000073;
              local_288 = 0x100000000000073;
              uStack_280 = uStack_2a0;
              uStack_27c = 0xf;
              if ((1 << ((byte)local_238[1]._4_4_ & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(local_238);
              }
              FUN_140041b80(local_238,&local_288);
              local_1c8 = local_238;
              FUN_140edd0e0(local_res8,local_res10,1,&local_1c8);
              local_248 = 0x1e;
              uVar4 = (**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f500);
              FUN_140162c50(uVar4,0x3fc999999999999a);
            }
            local_248 = 0x22;
            if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_298);
            }
            local_298 = 0;
            local_290 = 0;
            local_28c = 5;
            uStack_29c = 6;
            local_2a8 = local_res8;
            uVar20 = (ulonglong)ppuVar21 & 0xffffffffffffff00;
            uVar16 = uVar16 & 0xffffffffffffff00;
            FUN_140e87440(&local_2a8,DAT_1419fe0e8,0x80000000,&local_e8,uVar16,uVar20);
            if ((1 << ((byte)uStack_29c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_2a8);
            }
            uStack_29c = 6;
            local_2a8 = local_res8;
            uVar16 = uVar16 & 0xffffffffffffff00;
            FUN_140e87440(&local_2a8,DAT_1419fe158,0x80000000,&local_118,uVar16,
                          uVar20 & 0xffffffffffffff00);
            uVar19 = (undefined4)(uVar16 >> 0x20);
            if ((1 << ((byte)uStack_29c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_2a8);
            }
            local_2a8 = (longlong *)local_e8;
            uStack_2a0 = uStack_e0;
            uStack_29c = uStack_dc;
            if ((1 << ((byte)local_238[1]._4_4_ & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_238);
            }
            FUN_140041b80(local_238,&local_2a8);
            local_1c8 = local_238;
            uStack_27c = local_10c;
            uStack_280 = local_110;
            if ((1 << ((byte)local_10c & 0x1f) & 0x46U) == 0) {
              local_288 = local_118;
            }
            else {
              FUN_1400419b0(&local_288,&local_118);
            }
            uStack_29c = 7;
            local_2a8 = (longlong *)CONCAT44(local_2a8._4_4_,1);
            FUN_1400460e0(&local_288,&local_2a8);
            if ((1 << ((byte)uStack_29c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_2a8);
            }
            local_2a8 = (longlong *)local_288;
            uStack_2a0 = uStack_280;
            uStack_29c = uStack_27c;
            if ((1 << ((byte)local_228[1]._4_4_ & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_228);
            }
            FUN_140041b80(local_228,&local_2a8);
            if ((1 << ((byte)uStack_27c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_288);
            }
            local_1c0 = local_228;
            uStack_29c = 0xf;
            local_2a8 = (longlong *)0x100000000000149;
            local_288 = 0x100000000000149;
            uStack_280 = uStack_2a0;
            uStack_27c = 0xf;
            if ((1 << ((byte)local_218[1]._4_4_ & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_218);
            }
            FUN_140041b80(local_218,&local_288);
            local_1b8 = local_218;
            uVar6 = CONCAT44(uVar19,DAT_141a12628);
            uVar4 = FUN_140e634e0(local_res8,local_res10,&local_298,3,uVar6,&local_1c8);
            uVar19 = (undefined4)((ulonglong)uVar6 >> 0x20);
            cVar2 = FUN_140e491e0(uVar4);
            if (cVar2 == '\0') {
              local_248 = 0x2c;
              if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_298);
              }
              local_298 = 0;
              local_290 = 0;
              local_28c = 5;
              uVar4 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd4b8);
              ppuVar21 = (undefined8 **)0x0;
              FUN_140e63610(local_res8,local_res10,&local_298,0,uVar4,0);
              goto LAB_14051a7b1;
            }
            local_248 = 0x24;
            if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_278);
            }
            local_278 = 0;
            local_270 = 0;
            local_26c = 5;
            uStack_29c = 0xf;
            local_2a8 = (longlong *)0x10000020000000b;
            local_288 = 0x10000020000000b;
            uStack_280 = uStack_2a0;
            uStack_27c = 0xf;
            if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_208);
            }
            FUN_140041b80(&local_208,&local_288);
            local_1b0 = &local_208;
            local_2a8 = (longlong *)CONCAT44(uRam00000001419e6064,_DAT_1419e6060);
            uStack_2a0 = uRam00000001419e6068;
            uStack_29c = uRam00000001419e606c;
            if ((1 << (local_1ec & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1f8);
            }
            FUN_140041b80(&local_1f8,&local_2a8);
            local_1a8 = &local_1f8;
            local_2a8 = (longlong *)CONCAT44(uRam00000001419df7c4,_DAT_1419df7c0);
            uStack_2a0 = uRam00000001419df7c8;
            uStack_29c = uRam00000001419df7cc;
            if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_1e8);
            }
            FUN_140041b80(local_1e8,&local_2a8);
            local_1a0 = local_1e8;
            FUN_140e634e0(local_res8,local_res10,&local_278,3,CONCAT44(uVar19,DAT_141a0a2e8),
                          &local_1b0);
            local_248 = 0x25;
            if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_298);
            }
            local_298 = 0;
            local_290 = 0;
            local_28c = 5;
            local_2a8 = (longlong *)CONCAT44(uRam00000001419e60a4,_DAT_1419e60a0);
            uStack_2a0 = uRam00000001419e60a8;
            uStack_29c = uRam00000001419e60ac;
            if ((1 << ((byte)local_238[1]._4_4_ & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_238);
            }
            FUN_140041b80(local_238,&local_2a8);
            local_1c8 = local_238;
            local_2a8 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
            uStack_2a0 = DAT_1419df7b8;
            uStack_29c = DAT_1419df7bc;
            if ((1 << ((byte)local_228[1]._4_4_ & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_228);
            }
            FUN_140041b80(local_228,&local_2a8);
            local_1c0 = local_228;
            gml_Script_truestate_begin_step(local_res8,local_res10,&local_298,2,&local_1c8);
            local_248 = 0x26;
            uStack_29c = 0xf;
            local_2a8 = (longlong *)0x1000000000000ee;
            iVar3 = FUN_140e63cb0(local_c8,&local_res8,&local_res10,&local_2a8);
            if ((1 << ((byte)uStack_29c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_2a8);
            }
            if (0 < iVar3) {
              do {
                local_248 = 0x27;
                if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_298);
                }
                local_298 = 0;
                local_290 = 0;
                local_28c = 5;
                local_2a8 = (longlong *)CONCAT44(uRam00000001419e60a4,_DAT_1419e60a0);
                uStack_2a0 = uRam00000001419e60a8;
                uStack_29c = uRam00000001419e60ac;
                if ((1 << ((byte)local_238[1]._4_4_ & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(local_238);
                }
                FUN_140041b80(local_238,&local_2a8);
                local_1c8 = local_238;
                local_2a8 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
                uStack_2a0 = DAT_1419df7b8;
                uStack_29c = DAT_1419df7bc;
                if ((1 << ((byte)local_228[1]._4_4_ & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(local_228);
                }
                FUN_140041b80(local_228,&local_2a8);
                local_1c0 = local_228;
                gml_Script_truestate_begin_step(local_res8,local_res10,&local_298,2,&local_1c8);
                cVar2 = FUN_140e643f0(local_c8,&local_res8,&local_res10);
              } while (cVar2 != '\0');
            }
            FUN_140e63970(local_c8,&local_res8,&local_res10);
            local_248 = 0x29;
            local_78 = local_b8;
          }
          else {
            local_248 = 0x31;
            if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_298);
            }
            local_298 = 0;
            local_290 = 0;
            local_28c = 5;
            puVar5 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd3b8);
            if (puVar5 != local_238) {
              local_2a8 = (longlong *)*puVar5;
              uStack_2a0 = *(undefined4 *)(puVar5 + 1);
              uStack_29c = *(undefined4 *)((longlong)puVar5 + 0xc);
              if ((1 << ((byte)local_238[1]._4_4_ & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(local_238);
              }
              FUN_140041b80(local_238,&local_2a8);
            }
            local_1c8 = local_238;
            uVar6 = CONCAT44(uVar19,DAT_1419fd658);
            puVar5 = (undefined8 *)
                     FUN_140e634e0(local_res8,local_res10,&local_298,1,uVar6,&local_1c8);
            uVar19 = (undefined4)((ulonglong)uVar6 >> 0x20);
            if ((*(uint *)((longlong)puVar5 + 0xc) & 0xffffff) == 0) {
              uVar14 = (undefined4)*puVar5;
            }
            else {
              uVar14 = FUN_140e4b060(puVar5);
            }
            dVar1 = (double)FUN_1412a79b0(uVar14,0x4020000000000000);
            if ((dVar1 == 0.0) && (cVar2 = FUN_140e491e0(uVar4), cVar2 == '\0')) {
              local_248 = 0x33;
              if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_278);
              }
              local_278 = 0;
              local_270 = 0;
              local_26c = 5;
              if ((1 << ((byte)local_174 & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_180);
              }
              local_180 = 0;
              local_178 = 0;
              local_174 = 5;
              FUN_140e85f80(local_res8,DAT_141a00d18,0x80000000,&local_138);
              FUN_140e85f80(local_res8,DAT_141a00c48,0x80000000,&local_148);
              local_2a8 = (longlong *)CONCAT44(uRam0000000141dc66c4,_DAT_141dc66c0);
              uStack_2a0 = uRam0000000141dc66c8;
              uStack_29c = uRam0000000141dc66cc;
              if ((1 << ((byte)local_228[1]._4_4_ & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(local_228);
              }
              FUN_140041b80(local_228,&local_2a8);
              local_1c0 = local_228;
              local_2a8 = (longlong *)local_148;
              uStack_2a0 = uStack_140;
              uStack_29c = uStack_13c;
              if ((1 << ((byte)local_218[1]._4_4_ & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(local_218);
              }
              FUN_140041b80(local_218,&local_2a8);
              local_1b8 = local_218;
              uVar4 = local_138;
              if ((uStack_12c & 0xffffff) != 0) {
                uVar4 = FUN_140e4b060(&local_138);
              }
              local_208 = FUN_140e794b0(0,uVar4);
              if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_208);
              }
              local_1fc = 0;
              local_1b0 = &local_208;
              puVar5 = (undefined8 *)FUN_140e78db0(&local_180,2,&local_1c0);
              if (puVar5 != &local_1f8) {
                local_2a8 = (longlong *)*puVar5;
                uStack_2a0 = *(undefined4 *)(puVar5 + 1);
                uStack_29c = *(undefined4 *)((longlong)puVar5 + 0xc);
                if ((1 << ((byte)_local_1ec & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_1f8);
                }
                FUN_140041b80(&local_1f8,&local_2a8);
              }
              local_1a8 = &local_1f8;
              local_2a8 = (longlong *)CONCAT44(uRam0000000141dd3d8c,_DAT_141dd3d88);
              uStack_2a0 = uRam0000000141dd3d90;
              uStack_29c = DAT_141dd3d94;
              if ((1 << ((byte)_local_1dc & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(local_1e8);
              }
              FUN_140041b80(local_1e8,&local_2a8);
              local_1a0 = local_1e8;
              uStack_29c = 0xf;
              local_2a8 = (longlong *)0x100000000000073;
              local_288 = 0x100000000000073;
              uStack_280 = uStack_2a0;
              uStack_27c = 0xf;
              if ((1 << (local_1cc & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(local_1d8);
              }
              FUN_140041b80(local_1d8,&local_288);
              ppuVar21 = &local_1b0;
              uVar16 = CONCAT44(uVar19,DAT_141a0a7c8);
              local_198 = local_1d8;
              uVar4 = FUN_140e634e0(local_res8,local_res10,&local_278,4,uVar16,ppuVar21);
              iVar3 = FUN_140e63cb0(local_a8,&local_res8,&local_res10,uVar4);
              if (0 < iVar3) {
                do {
                  local_248 = 0x36;
                  puVar5 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419fd5a8)
                  ;
                  uStack_29c = 6;
                  local_2a8 = (longlong *)local_res10;
                  uVar20 = (ulonglong)ppuVar21 & 0xffffffffffffff00;
                  uVar16 = uVar16 & 0xffffffffffffff00;
                  FUN_140e87440(&local_2a8,DAT_1419fe0e8,0x80000000,&local_158,uVar16,uVar20);
                  if ((1 << ((byte)uStack_29c & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(&local_2a8);
                  }
                  FUN_140e609c0(local_res8);
                  if (&local_158 != puVar5) {
                    local_268 = (undefined4)local_158;
                    uStack_264 = local_158._4_4_;
                    uStack_260 = uStack_150;
                    uStack_25c = uStack_14c;
                    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0)
                    {
                      FUN_140041a50(puVar5);
                    }
                    FUN_140041b80(puVar5,&local_268);
                  }
                  FUN_140e60910(1);
                  local_248 = 0x37;
                  puVar5 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419fd408)
                  ;
                  uStack_27c = 6;
                  local_288 = local_res10;
                  ppuVar21 = (undefined8 **)(uVar20 & 0xffffffffffffff00);
                  uVar16 = uVar16 & 0xffffffffffffff00;
                  FUN_140e87440(&local_288,DAT_1419fe158,0x80000000,&local_168,uVar16,ppuVar21);
                  if ((1 << ((byte)uStack_27c & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(&local_288);
                  }
                  FUN_140e609c0(local_res8);
                  if (&local_168 != puVar5) {
                    local_268 = (undefined4)local_168;
                    uStack_264 = local_168._4_4_;
                    uStack_260 = uStack_160;
                    uStack_25c = uStack_15c;
                    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0)
                    {
                      FUN_140041a50(puVar5);
                    }
                    FUN_140041b80(puVar5,&local_268);
                  }
                  FUN_140e60910(1);
                  cVar2 = FUN_140e643f0(local_a8,&local_res8,&local_res10);
                } while (cVar2 != '\0');
              }
              uVar19 = (undefined4)(uVar16 >> 0x20);
              FUN_140e63970(local_a8,&local_res8,&local_res10);
              local_248 = 0x3b;
              if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_298);
              }
              local_298 = 0;
              local_290 = 0;
              local_28c = 5;
              if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_278);
              }
              local_278 = 0;
              local_270 = 0;
              local_26c = 5;
              FUN_140e85f80(local_res8,DAT_141a00d18,0x80000000,&local_138);
              local_268 = _DAT_141dc66c0;
              uStack_264 = uRam0000000141dc66c4;
              uStack_260 = uRam0000000141dc66c8;
              uStack_25c = uRam0000000141dc66cc;
              if ((1 << ((byte)local_238[1]._4_4_ & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(local_238);
              }
              FUN_140041b80(local_238,&local_268);
              local_1c8 = local_238;
              local_268 = (undefined4)local_138;
              uStack_264 = local_138._4_4_;
              uStack_260 = uStack_130;
              uStack_25c = uStack_12c;
              if ((1 << ((byte)local_228[1]._4_4_ & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(local_228);
              }
              FUN_140041b80(local_228,&local_268);
              local_1c0 = local_228;
              FUN_140e85f80(local_res8,DAT_141a00c48,0x80000000,&local_148);
              puVar5 = (undefined8 *)FUN_140e78db0(&local_278,2,&local_1c8);
              if (puVar5 != local_218) {
                local_268 = *(undefined4 *)puVar5;
                uStack_264 = *(undefined4 *)((longlong)puVar5 + 4);
                uStack_260 = *(undefined4 *)(puVar5 + 1);
                uStack_25c = *(uint *)((longlong)puVar5 + 0xc);
                if ((1 << ((byte)local_218[1]._4_4_ & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(local_218);
                }
                FUN_140041b80(local_218,&local_268);
              }
              local_1b8 = local_218;
              uVar4 = local_148;
              if ((uStack_13c & 0xffffff) != 0) {
                uVar4 = FUN_140e4b060(&local_148);
              }
              uVar4 = FUN_140e794b0(0,uVar4);
              if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_208);
              }
              local_1fc = 0;
              local_1b0 = &local_208;
              local_268 = _DAT_141dd3d88;
              uStack_264 = uRam0000000141dd3d8c;
              uStack_260 = uRam0000000141dd3d90;
              uStack_25c = DAT_141dd3d94;
              local_208 = uVar4;
              if ((1 << (local_1ec & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_1f8);
              }
              FUN_140041b80(&local_1f8,&local_268);
              local_1a8 = &local_1f8;
              uStack_29c = 0xf;
              local_2a8 = (longlong *)0x100000000000073;
              local_268 = 0x73;
              uStack_264 = 0x1000000;
              uStack_260 = uStack_2a0;
              uStack_25c = 0xf;
              if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(local_1e8);
              }
              FUN_140041b80(local_1e8,&local_268);
              local_1a0 = local_1e8;
              ppuVar21 = &local_1b8;
              uVar16 = CONCAT44(uVar19,DAT_141a0a7c8);
              uVar4 = FUN_140e634e0(local_res8,local_res10,&local_298,4,uVar16,ppuVar21);
              iVar3 = FUN_140e63cb0(local_c8,&local_res8,&local_res10,uVar4);
              if (0 < iVar3) {
                do {
                  local_248 = 0x3e;
                  puVar5 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419fd5a8)
                  ;
                  uStack_29c = 6;
                  local_2a8 = (longlong *)local_res10;
                  uVar20 = (ulonglong)ppuVar21 & 0xffffffffffffff00;
                  uVar16 = uVar16 & 0xffffffffffffff00;
                  FUN_140e87440(&local_2a8,DAT_1419fe0e8,0x80000000,&local_158,uVar16,uVar20);
                  if ((1 << ((byte)uStack_29c & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(&local_2a8);
                  }
                  FUN_140e609c0(local_res8);
                  if (&local_158 != puVar5) {
                    local_268 = (undefined4)local_158;
                    uStack_264 = local_158._4_4_;
                    uStack_260 = uStack_150;
                    uStack_25c = uStack_14c;
                    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0)
                    {
                      FUN_140041a50(puVar5);
                    }
                    FUN_140041b80(puVar5,&local_268);
                  }
                  FUN_140e60910(1);
                  local_248 = 0x3f;
                  puVar5 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419fd408)
                  ;
                  uStack_27c = 6;
                  local_288 = local_res10;
                  ppuVar21 = (undefined8 **)(uVar20 & 0xffffffffffffff00);
                  uVar16 = uVar16 & 0xffffffffffffff00;
                  FUN_140e87440(&local_288,DAT_1419fe158,0x80000000,&local_168,uVar16,ppuVar21);
                  if ((1 << ((byte)uStack_27c & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(&local_288);
                  }
                  FUN_140e609c0(local_res8);
                  if (&local_168 != puVar5) {
                    local_268 = (undefined4)local_168;
                    uStack_264 = local_168._4_4_;
                    uStack_260 = uStack_160;
                    uStack_25c = uStack_15c;
                    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0)
                    {
                      FUN_140041a50(puVar5);
                    }
                    FUN_140041b80(puVar5,&local_268);
                  }
                  FUN_140e60910(1);
                  cVar2 = FUN_140e643f0(local_c8,&local_res8,&local_res10);
                } while (cVar2 != '\0');
              }
              uVar19 = (undefined4)(uVar16 >> 0x20);
              FUN_140e63970(local_c8,&local_res8,&local_res10);
              if (local_b8 != 0) {
                FUN_140e4cd60();
                local_b8 = 0;
              }
              if (local_98 != 0) {
                FUN_140e4cd60();
              }
            }
            local_248 = 0x44;
            if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_298);
            }
            local_298 = 0;
            local_290 = 0;
            local_28c = 5;
            uVar4 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd3b8);
            local_268 = _DAT_141dc66c0;
            uStack_264 = uRam0000000141dc66c4;
            uStack_260 = uRam0000000141dc66c8;
            uStack_25c = uRam0000000141dc66cc;
            if ((1 << ((byte)local_238[1]._4_4_ & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_238);
            }
            FUN_140041b80(local_238,&local_268);
            local_1c8 = local_238;
            ppuVar21 = &local_1c8;
            puVar5 = (undefined8 *)
                     FUN_140e634e0(local_res8,local_res10,&local_298,1,
                                   CONCAT44(uVar19,DAT_141a0a0d8),ppuVar21);
            uStack_27c = *(undefined4 *)((longlong)puVar5 + 0xc);
            uStack_280 = *(undefined4 *)(puVar5 + 1);
            if ((1 << ((byte)uStack_27c & 0x1f) & 0x46U) == 0) {
              local_288 = *puVar5;
            }
            else {
              FUN_1400419b0(&local_288,puVar5);
            }
            uStack_29c = 0;
            local_2a8 = (longlong *)0x3ff4000000000000;
            FUN_140042560(&local_288,&local_2a8);
            if ((1 << ((byte)uStack_29c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_2a8);
            }
            uVar13 = FUN_140e851f0(uVar4,&local_288,DAT_141955260,1);
            if ((1 << ((byte)uStack_27c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_288);
            }
            if (uVar13 < 0x80000000) {
              local_248 = 0x46;
              if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_278);
              }
              local_278 = 0;
              local_270 = 0;
              local_26c = 5;
              FUN_140265ac0(local_res8,local_res10,&local_278,0,0);
            }
LAB_14051a7b1:
            local_248 = 0x4b;
            uStack_29c = 0xf;
            local_2a8 = (longlong *)0x1000000000000ee;
            iVar3 = FUN_140e63cb0(local_88,&local_res8,&local_res10,&local_2a8);
            if ((1 << ((byte)uStack_29c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_2a8);
            }
            if (0 < iVar3) {
              do {
                local_248 = 0x4d;
                if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_128);
                }
                local_11c = 0;
                local_128 = 0;
                FUN_140e86fa0(local_res8,DAT_141a0a818,0x80000000,&local_128);
                local_248 = 0x4e;
                if ((1 << ((byte)local_184 & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_190);
                }
                local_184 = 0;
                local_190 = 0x3ff0000000000000;
                FUN_140e86fa0(local_res8,DAT_141a0cfc8,0x80000000,&local_190);
                local_248 = 0x4f;
                if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_298);
                }
                local_298 = 0;
                local_290 = 0;
                local_28c = 5;
                local_268 = _DAT_1419e6050;
                uStack_264 = uRam00000001419e6054;
                uStack_260 = uRam00000001419e6058;
                uStack_25c = uRam00000001419e605c;
                if ((1 << ((byte)local_238[1]._4_4_ & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(local_238);
                }
                FUN_140041b80(local_238,&local_268);
                local_1c8 = local_238;
                local_268 = (undefined4)DAT_1419df7b0;
                uStack_264 = DAT_1419df7b0._4_4_;
                uStack_260 = DAT_1419df7b8;
                uStack_25c = DAT_1419df7bc;
                if ((1 << ((byte)local_228[1]._4_4_ & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(local_228);
                }
                FUN_140041b80(local_228,&local_268);
                local_1c0 = local_228;
                gml_Script_truestate_begin_step(local_res8,local_res10,&local_298,2,&local_1c8);
                local_248 = 0x52;
                if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_298);
                }
                local_298 = 0;
                local_290 = 0;
                local_28c = 5;
                puVar5 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f230);
                puVar11 = (undefined4 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f230);
                if (puVar5 != local_238) {
                  local_268 = *(undefined4 *)puVar5;
                  uStack_264 = *(undefined4 *)((longlong)puVar5 + 4);
                  uStack_260 = *(undefined4 *)(puVar5 + 1);
                  uStack_25c = *(undefined4 *)((longlong)puVar5 + 0xc);
                  if ((1 << ((byte)local_238[1]._4_4_ & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(local_238);
                  }
                  FUN_140041b80(local_238,&local_268);
                }
                local_1c8 = local_238;
                local_268 = _DAT_141dc66c0;
                uStack_264 = uRam0000000141dc66c4;
                uStack_260 = uRam0000000141dc66c8;
                uStack_25c = uRam0000000141dc66cc;
                if ((1 << ((byte)local_228[1]._4_4_ & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(local_228);
                }
                FUN_140041b80(local_228,&local_268);
                local_1c0 = local_228;
                local_268 = _DAT_1419e60b0;
                uStack_264 = uRam00000001419e60b4;
                uStack_260 = uRam00000001419e60b8;
                uStack_25c = uRam00000001419e60bc;
                if ((1 << ((byte)local_218[1]._4_4_ & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(local_218);
                }
                FUN_140041b80(local_218,&local_268);
                local_1b8 = local_218;
                FUN_140e609c0(local_res8);
                ppuVar18 = &local_1c8;
                puVar12 = (undefined4 *)gml_Script_arc(local_res8,local_res10,&local_298,3,ppuVar18)
                ;
                if (puVar12 != puVar11) {
                  local_268 = *puVar12;
                  uStack_264 = puVar12[1];
                  uStack_260 = puVar12[2];
                  uStack_25c = puVar12[3];
                  if ((1 << ((byte)puVar11[3] & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(puVar11);
                  }
                  FUN_140041b80(puVar11,&local_268);
                }
                FUN_140e60910(1);
                local_248 = 0x53;
                uStack_29c = 6;
                local_2a8 = local_res8;
                ppuVar21 = (undefined8 **)((ulonglong)ppuVar21 & 0xffffffffffffff00);
                FUN_140e87440(&local_2a8,DAT_1419fe0e8,0x80000000,&local_f8,
                              (ulonglong)ppuVar18 & 0xffffffffffffff00,ppuVar21);
                if ((1 << ((byte)uStack_29c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_2a8);
                }
                FUN_1400460e0(&local_f8,puVar5);
                FUN_140e86fa0(local_res8,DAT_1419fe0e8,0x80000000,&local_f8);
                cVar2 = FUN_140e643f0(local_88,&local_res8,&local_res10);
              } while (cVar2 != '\0');
            }
            FUN_140e63970(local_88,&local_res8,&local_res10);
            local_248 = 0x57;
          }
          if (local_78 != 0) {
            FUN_140e4cd60();
          }
        }
      }
      else if (iVar3 == 2) {
        local_248 = 0x5b;
        if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_298);
        }
        local_298 = 0;
        local_290 = 0;
        local_28c = 5;
        uVar4 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419f5b18);
        FUN_140e63610(local_res8,local_res10,&local_298,0,uVar4,0);
        local_248 = 0x5c;
      }
      else if (iVar3 == 3) {
        local_248 = 0x60;
      }
      break;
    }
    uVar13 = uVar13 + 1;
  } while (uVar13 < 4);
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_174 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_180);
  }
  if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_298);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_184 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_190);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  _eh_vector_destructor_iterator_(local_238,0x10,7,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_258;
  return param_3;
}

