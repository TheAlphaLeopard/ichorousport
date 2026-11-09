// gml_Script_anon_2740_gml_Object_oCam_Create_0 @ 0x140882a40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Script_anon_2740_gml_Object_oCam_Create_0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  longlong *local_res8;
  undefined8 local_res10;
  undefined4 local_res18;
  undefined8 **ppuVar9;
  ulonglong uVar10;
  undefined4 uVar11;
  ulonglong in_stack_fffffffffffffde0;
  ulonglong uVar12;
  undefined8 local_218;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined8 local_208;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined4 local_1ec;
  longlong *local_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined4 local_1cc;
  longlong *local_1c8;
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  longlong *local_1a8;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined8 local_198;
  undefined4 local_18c;
  longlong *local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  char *local_170;
  undefined4 local_168;
  undefined8 local_158;
  byte local_14c;
  undefined1 local_148 [12];
  byte local_13c;
  undefined1 local_138 [12];
  byte local_12c;
  undefined8 local_128 [2];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 *local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  undefined8 *local_c0;
  undefined1 *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 local_88 [16];
  longlong local_78;
  
  local_res18 = 0;
  local_170 = "gml_Object_oCageRemains_Step_0";
  local_168 = 0;
  local_178 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_178;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(&local_158,0x10,7,FUN_1400424d0,FUN_140041b30);
  uVar4 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  uStack_1dc = 0xffffff;
  local_1e8 = (longlong *)0x0;
  local_19c = 0xffffff;
  local_1a8 = (longlong *)0x0;
  uStack_dc = 0xffffff;
  local_e8 = 0;
  local_18c = 0xffffff;
  local_198 = 0;
  local_1ec = 0xffffff;
  local_1f8 = 0;
  local_1cc = 0xffffff;
  local_1d8 = 0;
  local_168 = 3;
  FUN_140e98b30(local_res8,local_res10);
  local_168 = 5;
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  local_1f8 = 0;
  local_1f0 = 0;
  local_1ec = 5;
  puVar5 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a0a7f8);
  puVar6 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a0a7f8);
  if (puVar5 != &local_158) {
    local_208 = (longlong *)*puVar5;
    uStack_200 = *(undefined4 *)(puVar5 + 1);
    uStack_1fc = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    FUN_140041b80(&local_158,&local_208);
  }
  local_d8 = &local_158;
  local_208 = (longlong *)CONCAT44(uRam0000000141dc6b84,_DAT_141dc6b80);
  uStack_200 = uRam0000000141dc6b88;
  uStack_1fc = uRam0000000141dc6b8c;
  if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_148);
  }
  FUN_140041b80(local_148,&local_208);
  uStack_20c = 0;
  local_218 = (longlong *)0x3ff0000000000000;
  local_res18 = 1;
  local_d0 = local_148;
  FUN_140042560(&local_218,uVar4);
  local_208 = local_218;
  uStack_200 = uStack_210;
  uStack_1fc = uStack_20c;
  if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_138);
  }
  FUN_140041b80(local_138,&local_208);
  local_res18 = 0;
  if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  local_c8 = local_138;
  FUN_140e609c0(local_res8);
  ppuVar9 = &local_d8;
  puVar5 = (undefined8 *)
           gml_Script_AngleRotateTowardsLerp(local_res8,local_res10,&local_1f8,3,ppuVar9);
  if (puVar5 != puVar6) {
    local_208 = (longlong *)*puVar5;
    uStack_200 = *(undefined4 *)(puVar5 + 1);
    uStack_1fc = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar6);
    }
    FUN_140041b80(puVar6,&local_208);
  }
  FUN_140e60910(1);
  local_168 = 7;
  uVar4 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fdab8);
  uVar7 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fdaf8);
  iVar2 = FUN_140e851f0(uVar4,uVar7,DAT_141955260,1);
  if (iVar2 != -2 && iVar2 < 0) {
    if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f8);
    }
    local_1f8 = 0;
    local_1f0 = 0;
    local_1ec = 5;
    uStack_20c = 6;
    local_218 = local_res8;
    in_stack_fffffffffffffde0 = in_stack_fffffffffffffde0 & 0xffffffffffffff00;
    uVar10 = (ulonglong)ppuVar9 & 0xffffffffffffff00;
    FUN_140e87440(&local_218,DAT_1419fe0e8,0x80000000,&local_1e8,uVar10,in_stack_fffffffffffffde0);
    if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_218);
    }
    uStack_20c = 6;
    local_218 = local_res8;
    uVar10 = uVar10 & 0xffffffffffffff00;
    FUN_140e87440(&local_218,DAT_1419fe158,0x80000000,&local_1a8,uVar10,
                  in_stack_fffffffffffffde0 & 0xffffffffffffff00);
    uVar11 = (undefined4)(uVar10 >> 0x20);
    if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_218);
    }
    local_208 = local_1e8;
    uStack_200 = uStack_1e0;
    uStack_1fc = uStack_1dc;
    if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    FUN_140041b80(&local_158,&local_208);
    local_d8 = &local_158;
    uStack_20c = local_19c;
    uStack_210 = local_1a0;
    if ((1 << ((byte)local_19c & 0x1f) & 0x46U) == 0) {
      local_218 = local_1a8;
    }
    else {
      FUN_1400419b0(&local_218,&local_1a8);
    }
    local_res18 = 2;
    local_1bc = 7;
    local_1c8 = (longlong *)CONCAT44(local_1c8._4_4_,1);
    FUN_1400460e0(&local_218,&local_1c8);
    if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    local_208 = local_218;
    uStack_200 = uStack_210;
    uStack_1fc = uStack_20c;
    if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_148);
    }
    FUN_140041b80(local_148,&local_208);
    local_res18 = 0;
    if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_218);
    }
    uStack_17c = 0xf;
    local_188 = (longlong *)0x100000000000149;
    local_208 = (longlong *)0x100000000000149;
    uStack_200 = uStack_180;
    uStack_1fc = 0xf;
    local_d0 = local_148;
    if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_138);
    }
    FUN_140041b80(local_138,&local_208);
    local_c8 = local_138;
    ppuVar9 = &local_d8;
    uVar10 = CONCAT44(uVar11,DAT_141a12628);
    uVar4 = FUN_140e634e0(local_res8,local_res10,&local_1f8,3,uVar10,ppuVar9);
    cVar1 = FUN_140e491e0(uVar4);
    if (cVar1 != '\0') {
      iVar2 = 4;
      do {
        iVar2 = iVar2 + -1;
        local_168 = 0xb;
        if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1d8);
        }
        local_1d8 = 0;
        local_1d0 = 0;
        local_1cc = 5;
        local_1bc = 6;
        local_1c8 = local_res8;
        uVar12 = (ulonglong)ppuVar9 & 0xffffffffffffff00;
        uVar10 = uVar10 & 0xffffffffffffff00;
        FUN_140e87440(&local_1c8,DAT_1419fe0e8,0x80000000,&local_1e8,uVar10,uVar12);
        if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1c8);
        }
        uStack_17c = 6;
        local_188 = local_res8;
        uVar10 = uVar10 & 0xffffffffffffff00;
        FUN_140e87440(&local_188,DAT_141a101f8,0x80000000,&local_e8,uVar10,
                      uVar12 & 0xffffffffffffff00);
        uVar11 = (undefined4)(uVar10 >> 0x20);
        if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_188);
        }
        uVar8 = FUN_140e794b0(0,0);
        uStack_20c = uStack_1dc;
        uStack_210 = uStack_1e0;
        if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) == 0) {
          local_218 = local_1e8;
        }
        else {
          FUN_1400419b0(&local_218,&local_1e8);
        }
        local_res18 = 4;
        FUN_140162c50(&local_218,uVar8);
        local_1b8 = (undefined4)local_218;
        uStack_1b4 = local_218._4_4_;
        uStack_1b0 = uStack_210;
        uStack_1ac = uStack_20c;
        if ((1 << ((byte)local_128[1]._4_4_ & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_128);
        }
        FUN_140041b80(local_128,&local_1b8);
        local_res18 = 0;
        if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_218);
        }
        local_c0 = local_128;
        local_1b8 = (undefined4)local_e8;
        uStack_1b4 = local_e8._4_4_;
        uStack_1b0 = uStack_e0;
        uStack_1ac = uStack_dc;
        if ((1 << (local_118[0xc] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_118);
        }
        FUN_140041b80(local_118,&local_1b8);
        local_b8 = local_118;
        local_1b8 = _DAT_141dd7378;
        uStack_1b4 = uRam0000000141dd737c;
        uStack_1b0 = uRam0000000141dd7380;
        uStack_1ac = DAT_141dd7384;
        if ((1 << (local_108[0xc] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_108);
        }
        FUN_140041b80(local_108,&local_1b8);
        local_b0 = local_108;
        uStack_8c = 0xf;
        local_98 = 0x10000000000012d;
        local_1b8 = 0x12d;
        uStack_1b4 = 0x1000000;
        uStack_1b0 = uStack_90;
        uStack_1ac = 0xf;
        if ((1 << (local_f8[0xc] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_f8);
        }
        FUN_140041b80(local_f8,&local_1b8);
        local_a8 = local_f8;
        ppuVar9 = &local_c0;
        uVar10 = CONCAT44(uVar11,DAT_141a0a7c8);
        uVar4 = FUN_140e634e0(local_res8,local_res10,&local_1d8,4,uVar10,ppuVar9);
        iVar3 = FUN_140e63cb0(local_88,&local_res8,&local_res10,uVar4);
        if (0 < iVar3) {
          do {
            local_168 = 0xd;
            uStack_1fc = 0xf;
            local_208 = (longlong *)0x100000100000135;
            local_1b8 = 0x135;
            uStack_1b4 = 0x1000001;
            uStack_1b0 = uStack_200;
            uStack_1ac = 0xf;
            if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_198);
            }
            FUN_140041b80(&local_198,&local_1b8);
            FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_198);
            cVar1 = FUN_140e643f0(local_88,&local_res8,&local_res10);
          } while (cVar1 != '\0');
        }
        FUN_140e63970(local_88,&local_res8,&local_res10);
        if (local_78 != 0) {
          FUN_140e4cd60();
        }
      } while (0 < iVar2);
    }
  }
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  _eh_vector_destructor_iterator_(&local_158,0x10,7,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_178;
  return;
}

