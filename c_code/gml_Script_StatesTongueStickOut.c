// gml_Script_StatesTongueStickOut @ 0x1405a4140

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_StatesTongueStickOut
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  uint uVar6;
  longlong *local_res8;
  undefined8 local_res10;
  code *pcVar7;
  ulonglong uVar8;
  undefined4 uVar10;
  undefined8 **ppuVar9;
  ulonglong in_stack_fffffffffffffde0;
  undefined1 **ppuVar11;
  ulonglong uVar12;
  undefined8 local_218;
  undefined4 local_210;
  undefined4 local_20c;
  undefined8 local_208;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined8 local_1f8;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined8 local_1e8;
  char *local_1e0;
  undefined4 local_1d8;
  longlong *local_1d0;
  undefined4 local_1c4;
  longlong *local_1c0;
  undefined4 local_1b4;
  undefined1 *local_1b0;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined1 local_198 [12];
  byte local_18c;
  undefined1 local_188 [12];
  byte local_17c;
  undefined8 local_178 [2];
  undefined1 local_168 [12];
  byte local_15c;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined4 local_12c;
  undefined8 local_128;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 local_10c;
  undefined1 *local_108;
  undefined1 *local_100;
  undefined8 *local_f8;
  undefined1 *local_f0;
  undefined8 local_e8;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 local_8c;
  longlong *local_88;
  undefined4 local_7c;
  undefined4 local_78 [3];
  undefined4 local_6c;
  undefined1 local_68 [16];
  longlong local_58;
  
  local_1e0 = "gml_Script_StatesTongueHidden";
  local_1e8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_1e8;
  local_1d8 = 0x3d;
  pcVar7 = FUN_140041b30;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(local_198,0x10,4,FUN_1400424d0,FUN_140041b30);
  local_10c = 0xffffff;
  local_118 = 0;
  local_1a4 = 0xffffff;
  local_1b0 = (undefined1 *)0x0;
  local_11c = 0xffffff;
  local_128 = 0;
  local_12c = 0xffffff;
  local_138 = 0;
  local_cc = 0xffffff;
  local_d8 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  uStack_9c = 0xffffff;
  local_a8 = 0;
  uStack_ac = 0xffffff;
  local_b8 = 0;
  local_dc = 0xffffff;
  local_e8 = 0;
  local_20c = 0;
  local_218 = 0;
  local_14c = 0;
  local_158 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_1d8 = 0x3f;
  if (param_4 < 1) {
    param_5 = &DAT_1419df7b0;
  }
  else {
    param_5 = (undefined8 *)*param_5;
  }
  local_bc = *(undefined4 *)((longlong)param_5 + 0xc);
  local_c0 = *(undefined4 *)(param_5 + 1);
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) == 0) {
    local_c8 = *param_5;
  }
  else {
    FUN_1400419b0(&local_c8);
  }
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141de0a10) &&
     (_Init_thread_header(&DAT_141de0a10), DAT_141de0a10 == -1)) {
    _DAT_141de092c = 0;
    _DAT_141de0920 = 0x4000000000000000;
    _DAT_141de0940 = 0;
    _DAT_141de0934 = 0;
    _DAT_141de0944 = 1;
    _DAT_141de0954 = 0;
    _DAT_141de0948 = 0x3ff0000000000000;
    _DAT_141de0958 = 2;
    _DAT_141de0968 = 0;
    _DAT_141de095c = 0x4008000000000000;
    _DAT_141de096c = 3;
    atexit((_func_5014 *)&LAB_1414830a0);
    _Init_thread_footer(&DAT_141de0a10);
  }
  uVar6 = 0;
  do {
    iVar2 = FUN_140e851f0(&DAT_141de0920 + (longlong)(int)uVar6 * 0x14,&local_c8,DAT_141955260,0);
    if (iVar2 == 0) {
      iVar2 = *(int *)(&DAT_141de0930 + (longlong)(int)uVar6 * 0x14);
      if (iVar2 == 0) {
        local_1d8 = 0x43;
        if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_118);
        }
        local_10c = 0;
        local_118 = 0;
        FUN_140e86fa0(local_res8,DAT_1419fe0e8,0x80000000,&local_118);
        local_1d8 = 0x44;
        uVar3 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419feea8);
        local_1c4 = 0;
        local_1d0 = (longlong *)&DAT_bff0000000000000;
        iVar2 = FUN_140e851f0(uVar3,&local_1d0,DAT_141955260,0);
        if ((1 << ((byte)local_1c4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1d0);
        }
        if (iVar2 == 0) {
          local_1d8 = 0x45;
          puVar5 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419feea8);
          local_1c4 = 6;
          local_1d0 = local_res8;
          FUN_140e87440(&local_1d0,DAT_1419fe158,0x80000000,&local_1b0,
                        (ulonglong)pcVar7 & 0xffffffffffffff00,
                        in_stack_fffffffffffffde0 & 0xffffffffffffff00);
          if ((1 << ((byte)local_1c4 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1d0);
          }
          FUN_140e609c0(local_res8);
          uStack_1fc = local_1a4;
          uStack_200 = local_1a8;
          if ((1 << ((byte)local_1a4 & 0x1f) & 0x46U) == 0) {
            local_208 = (longlong *)local_1b0;
          }
          else {
            FUN_1400419b0(&local_208,&local_1b0);
          }
          local_1c4 = 7;
          local_1d0 = (longlong *)CONCAT44(local_1d0._4_4_,5);
          FUN_1400460e0(&local_208,&local_1d0);
          if ((1 << ((byte)local_1c4 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1d0);
          }
          if (&local_208 != puVar5) {
            local_148 = (undefined4)local_208;
            uStack_144 = local_208._4_4_;
            uStack_140 = uStack_200;
            uStack_13c = uStack_1fc;
            if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(puVar5);
            }
            FUN_140041b80(puVar5,&local_148);
          }
          if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_208);
          }
          FUN_140e60910(1);
        }
        local_1d8 = 0x47;
        if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_128);
        }
        local_11c = 0;
        local_128 = 0;
        FUN_140e86fa0(local_res8,DAT_141a0a778,0x80000000,&local_128);
        local_1d8 = 0x48;
        puVar5 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a0a7f8);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar5);
        }
        *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
        *puVar5 = 0;
        local_1d8 = 0x49;
        if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_138);
        }
        local_12c = 0;
        local_138 = 0;
        FUN_140e86fa0(local_res8,DAT_141a0f7f8,0x80000000,&local_138);
        local_1d8 = 0x4a;
        puVar5 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a0a748);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar5);
        }
        *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
        *puVar5 = 0;
        local_1d8 = 0x4c;
      }
      else {
        if (iVar2 != 1) {
          if (iVar2 == 2) {
            local_1d8 = 0x77;
            if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_218);
            }
            local_218 = 0;
            local_210 = 0;
            local_20c = 5;
            uVar3 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419f5b18);
            FUN_140e63610(local_res8,local_res10,&local_218,0,uVar3,0);
            local_1d8 = 0x78;
          }
          else if (iVar2 == 3) {
            local_1d8 = 0x7c;
          }
          break;
        }
        local_1d8 = 0x50;
        uVar3 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fde08);
        cVar1 = FUN_140e491e0(uVar3);
        if (cVar1 != '\0') {
          local_1d8 = 0x52;
          if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_218);
          }
          local_218 = 0;
          local_210 = 0;
          local_20c = 5;
          local_1f8 = CONCAT44(uRam00000001419e6804,_DAT_1419e6800);
          uStack_1f0 = uRam00000001419e6808;
          uStack_1ec = uRam00000001419e680c;
          if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_198);
          }
          FUN_140041b80(local_198,&local_1f8);
          local_108 = local_198;
          local_1f8 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
          uStack_1f0 = DAT_1419df7b8;
          uStack_1ec = DAT_1419df7bc;
          if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_188);
          }
          FUN_140041b80(local_188,&local_1f8);
          local_100 = local_188;
          gml_Script_truestate_begin_step(local_res8,local_res10,&local_218,2,&local_108);
          local_1d8 = 0x53;
          break;
        }
        local_1d8 = 0x57;
        uVar3 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f0d0);
        in_stack_fffffffffffffde0 = in_stack_fffffffffffffde0 & 0xffffffffffffff00;
        uVar8 = (ulonglong)pcVar7 & 0xffffffffffffff00;
        FUN_140e87440(uVar3,DAT_141a1f2b0,0x80000000,&local_d8,uVar8,in_stack_fffffffffffffde0);
        uStack_1fc = 10;
        local_208 = (longlong *)0x10;
        iVar2 = FUN_140e851f0(&local_d8,&local_208,DAT_141955260,0);
        if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_208);
        }
        if (iVar2 == 0) {
          uStack_1fc = 6;
          local_208 = local_res8;
          uVar8 = uVar8 & 0xffffffffffffff00;
          FUN_140e87440(&local_208,DAT_141a0a7e8,1,&local_98,uVar8,
                        in_stack_fffffffffffffde0 & 0xffffffffffffff00);
          if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_208);
          }
          uStack_1fc = 0;
          local_208 = (longlong *)&DAT_bff0000000000000;
          iVar2 = FUN_140e851f0(&local_98,&local_208,DAT_141955260,0);
          if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_208);
          }
          if (iVar2 == 0) {
            local_1d8 = 0x59;
            if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_218);
            }
            local_218 = 0;
            local_210 = 0;
            local_20c = 5;
            local_1f8 = CONCAT44(uRam00000001419e6754,_DAT_1419e6750);
            uStack_1f0 = uRam00000001419e6758;
            uStack_1ec = uRam00000001419e675c;
            if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_198);
            }
            FUN_140041b80(local_198,&local_1f8);
            local_108 = local_198;
            local_1f8 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
            uStack_1f0 = DAT_1419df7b8;
            uStack_1ec = DAT_1419df7bc;
            if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_188);
            }
            FUN_140041b80(local_188,&local_1f8);
            local_100 = local_188;
            gml_Script_truestate_begin_step(local_res8,local_res10,&local_218,2,&local_108);
            local_1d8 = 0x5a;
            break;
          }
        }
        uVar10 = (undefined4)(uVar8 >> 0x20);
        local_1d8 = 0x5e;
        if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_218);
        }
        local_218 = 0;
        local_210 = 0;
        local_20c = 5;
        uVar4 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd3b8);
        local_1f8 = CONCAT44(uRam0000000141dc6724,_DAT_141dc6720);
        uStack_1f0 = uRam0000000141dc6728;
        uStack_1ec = uRam0000000141dc672c;
        if ((1 << ((byte)_local_18c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_198);
        }
        FUN_140041b80(local_198,&local_1f8);
        local_108 = local_198;
        ppuVar11 = &local_108;
        ppuVar9 = (undefined8 **)CONCAT44(uVar10,DAT_141a0a0d8);
        puVar5 = (undefined8 *)FUN_140e634e0(local_res8,local_res10,&local_218,1,ppuVar9,ppuVar11);
        uStack_1fc = *(undefined4 *)((longlong)puVar5 + 0xc);
        uStack_200 = *(undefined4 *)(puVar5 + 1);
        if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) == 0) {
          local_208 = (longlong *)*puVar5;
        }
        else {
          FUN_1400419b0(&local_208,puVar5);
        }
        local_1b4 = 7;
        local_1c0 = (longlong *)CONCAT44(local_1c0._4_4_,1);
        FUN_140042560(&local_208,&local_1c0);
        if ((1 << ((byte)local_1b4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1c0);
        }
        uVar6 = FUN_140e851f0(uVar4,&local_208,DAT_141955260,1);
        if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_208);
        }
        if (uVar6 < 0x80000000) {
          local_1d8 = 0x60;
          uVar3 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f0d0);
          ppuVar11 = (undefined1 **)((ulonglong)ppuVar11 & 0xffffffffffffff00);
          FUN_140e87440(uVar3,DAT_141a1f2b0,0x80000000,&local_d8,
                        (ulonglong)ppuVar9 & 0xffffffffffffff00,ppuVar11);
          local_1b4 = 10;
          local_1c0 = (longlong *)0x2;
          iVar2 = FUN_140e851f0(&local_d8,&local_1c0,DAT_141955260,0);
          if ((1 << ((byte)local_1b4 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1c0);
          }
          if (iVar2 == 0) {
            local_1d8 = 0x62;
            break;
          }
          local_1d8 = 0x66;
          if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_218);
          }
          local_218 = 0;
          local_210 = 0;
          local_20c = 5;
          if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_158);
          }
          local_158 = 0;
          local_150 = 0;
          local_14c = 5;
          local_1f8 = CONCAT44(uRam00000001419e6744,_DAT_1419e6740);
          uStack_1f0 = uRam00000001419e6748;
          uStack_1ec = uRam00000001419e674c;
          if ((1 << ((byte)_local_18c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_198);
          }
          FUN_140041b80(local_198,&local_1f8);
          local_108 = local_198;
          local_1f8 = CONCAT44(uRam00000001419e66e4,_DAT_1419e66e0);
          uStack_1f0 = uRam00000001419e66e8;
          uStack_1ec = uRam00000001419e66ec;
          if ((1 << ((byte)_local_17c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_188);
          }
          FUN_140041b80(local_188,&local_1f8);
          local_100 = local_188;
          puVar5 = (undefined8 *)FUN_140e78db0(&local_158,2,&local_108);
          if (puVar5 != local_178) {
            local_1f8 = *puVar5;
            uStack_1f0 = *(undefined4 *)(puVar5 + 1);
            uStack_1ec = *(undefined4 *)((longlong)puVar5 + 0xc);
            if ((1 << ((byte)local_178[1]._4_4_ & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_178);
            }
            FUN_140041b80(local_178,&local_1f8);
          }
          local_f8 = local_178;
          local_1f8 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
          uStack_1f0 = DAT_1419df7b8;
          uStack_1ec = DAT_1419df7bc;
          if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_168);
          }
          FUN_140041b80(local_168,&local_1f8);
          local_f0 = local_168;
          ppuVar9 = &local_f8;
          gml_Script_truestate_begin_step(local_res8,local_res10,&local_218,2,ppuVar9);
        }
        local_1d8 = 0x6a;
        iVar2 = FUN_140e63cb0(local_68,&local_res8,&local_res10,uVar3);
        if (0 < iVar2) {
          do {
            (**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f0d0);
            local_1d8 = 0x6c;
            if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_218);
            }
            local_218 = 0;
            local_210 = 0;
            local_20c = 5;
            (**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f0d0);
            local_1b4 = 6;
            local_1c0 = local_res8;
            uVar12 = (ulonglong)ppuVar11 & 0xffffffffffffff00;
            uVar8 = (ulonglong)ppuVar9 & 0xffffffffffffff00;
            FUN_140e87440(&local_1c0,DAT_1419fe0e8,0x80000000,&local_a8,uVar8,uVar12);
            if ((1 << ((byte)local_1b4 & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1c0);
            }
            local_7c = 6;
            local_88 = local_res8;
            uVar8 = uVar8 & 0xffffffffffffff00;
            FUN_140e87440(&local_88,DAT_1419fe158,0x80000000,&local_1b0,uVar8,
                          uVar12 & 0xffffffffffffff00);
            uVar10 = (undefined4)(uVar8 >> 0x20);
            if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_88);
            }
            local_148 = (undefined4)local_a8;
            uStack_144 = local_a8._4_4_;
            uStack_140 = uStack_a0;
            uStack_13c = uStack_9c;
            if ((1 << ((byte)_local_18c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_198);
            }
            FUN_140041b80(local_198,&local_148);
            local_108 = local_198;
            uStack_1fc = local_1a4;
            uStack_200 = local_1a8;
            if ((1 << ((byte)local_1a4 & 0x1f) & 0x46U) == 0) {
              local_208 = (longlong *)local_1b0;
            }
            else {
              FUN_1400419b0(&local_208,&local_1b0);
            }
            local_6c = 7;
            local_78[0] = 1;
            FUN_1400460e0(&local_208,local_78);
            if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_78);
            }
            local_148 = (undefined4)local_208;
            uStack_144 = local_208._4_4_;
            uStack_140 = uStack_200;
            uStack_13c = uStack_1fc;
            if ((1 << ((byte)_local_17c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_188);
            }
            FUN_140041b80(local_188,&local_148);
            if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_208);
            }
            local_100 = local_188;
            uStack_1ec = 0xf;
            local_1f8 = 0x100000000000149;
            local_148 = 0x149;
            uStack_144 = 0x1000000;
            uStack_140 = uStack_1f0;
            uStack_13c = 0xf;
            if ((1 << ((byte)local_178[1]._4_4_ & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_178);
            }
            FUN_140041b80(local_178,&local_148);
            local_f8 = local_178;
            ppuVar11 = &local_108;
            ppuVar9 = (undefined8 **)CONCAT44(uVar10,DAT_141a12628);
            uVar3 = FUN_140e634e0(local_res8,local_res10,&local_218,3,ppuVar9,ppuVar11);
            cVar1 = FUN_140e491e0(uVar3);
            if (cVar1 != '\0') {
              local_1d8 = 0x6e;
              local_1c4 = 6;
              local_1d0 = local_res8;
              ppuVar11 = (undefined1 **)((ulonglong)ppuVar11 & 0xffffffffffffff00);
              ppuVar9 = (undefined8 **)((ulonglong)ppuVar9 & 0xffffffffffffff00);
              FUN_140e87440(&local_1d0,DAT_141a101f8,0x80000000,&local_b8,ppuVar9,ppuVar11);
              if ((1 << ((byte)local_1c4 & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_1d0);
              }
              local_148 = (undefined4)local_b8;
              uStack_144 = local_b8._4_4_;
              uStack_140 = uStack_b0;
              uStack_13c = uStack_ac;
              if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_e8);
              }
              FUN_140041b80(&local_e8,&local_148);
              FUN_140e86fa0(local_res10,DAT_1419fe158,0x80000000,&local_e8);
            }
            cVar1 = FUN_140e643f0(local_68,&local_res8,&local_res10);
          } while (cVar1 != '\0');
        }
        FUN_140e63970(local_68,&local_res8,&local_res10);
        local_1d8 = 0x73;
        if (local_58 != 0) {
          FUN_140e4cd60();
        }
      }
      break;
    }
    uVar6 = uVar6 + 1;
  } while (uVar6 < 4);
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_1a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b0);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  _eh_vector_destructor_iterator_(local_198,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_1e8;
  return param_3;
}

