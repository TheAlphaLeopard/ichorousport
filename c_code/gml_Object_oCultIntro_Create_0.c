// gml_Object_oCultIntro_Create_0 @ 0x1408d66f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * gml_Object_oCultIntro_Create_0(longlong *param_1,ulonglong param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  longlong *local_res8;
  ulonglong local_res10;
  undefined8 *local_res18;
  undefined8 **ppuVar10;
  ulonglong uVar11;
  undefined4 uVar13;
  longlong *plVar12;
  ulonglong in_stack_fffffffffffffe10;
  ulonglong uVar14;
  undefined8 local_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined8 local_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined4 local_1ac;
  uint local_1a8;
  undefined8 local_198;
  byte local_18c;
  undefined1 local_188 [12];
  byte local_17c;
  undefined8 local_178;
  undefined4 local_16c;
  undefined1 local_168 [12];
  byte local_15c;
  undefined4 local_158 [3];
  byte local_14c;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 local_13c;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  char *local_120;
  undefined4 local_118;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 *local_e8;
  undefined8 *local_e0;
  undefined8 *local_d8;
  undefined1 *local_d0;
  undefined4 *local_c8;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 local_78 [16];
  longlong local_68;
  
  local_1a8 = 0;
  local_120 = "gml_Script_anon@299@gml_Object_oCrimsonFriend_Create_0";
  local_128 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_128;
  local_118 = 0x15;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  _eh_vector_constructor_iterator_(&local_198,0x10,5,FUN_1400424d0,FUN_140041b30);
  uStack_12c = 0xffffff;
  local_138 = 0;
  uStack_7c = 0xffffff;
  local_88 = 0;
  uStack_8c = 0xffffff;
  local_98 = 0;
  uStack_9c = 0xffffff;
  local_a8 = 0;
  uStack_ec = 0xffffff;
  local_f8 = 0;
  uStack_fc = 0xffffff;
  local_108 = 0;
  uVar4 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a1ef20);
  uStack_ac = 0xffffff;
  local_b8 = 0;
  puVar5 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a582f0);
  local_1ac = 0;
  local_1b8 = 0;
  local_13c = 0;
  local_148 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_118 = 0x17;
  uVar6 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a582e0);
  uStack_1bc = 0;
  local_1c8 = &DAT_bff0000000000000;
  iVar3 = FUN_140e851f0(uVar6,&local_1c8,DAT_141955260,0);
  if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  if (iVar3 != 0) {
    local_118 = 0x19;
    if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    local_1b8 = 0;
    local_1b0 = 0;
    local_1ac = 5;
    local_1e8 = (longlong *)CONCAT44(uRam00000001419e9bb4,_DAT_1419e9bb0);
    uStack_1e0 = uRam00000001419e9bb8;
    uStack_1dc = uRam00000001419e9bbc;
    if ((1 << ((byte)_local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    FUN_140041b80(&local_198,&local_1e8);
    local_e8 = &local_198;
    local_1e8 = (longlong *)CONCAT44(uRam00000001419e9ba4,_DAT_1419e9ba0);
    uStack_1e0 = uRam00000001419e9ba8;
    uStack_1dc = uRam00000001419e9bac;
    if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_188);
    }
    FUN_140041b80(local_188,&local_1e8);
    local_e0 = (undefined8 *)local_188;
    local_178 = FUN_140e79480(0);
    if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    local_16c = 0;
    local_d8 = &local_178;
    local_1e8 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_1e0 = DAT_1419df7b8;
    uStack_1dc = DAT_1419df7bc;
    if ((1 << ((byte)_local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_168);
    }
    FUN_140041b80(local_168,&local_1e8);
    local_d0 = local_168;
    ppuVar10 = &local_e8;
    FUN_14044e5b0(local_res8,local_res10,&local_1b8,4,ppuVar10);
    local_118 = 0x1a;
    uVar6 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419f5ef8);
    uStack_1bc = 0;
    local_1c8 = (undefined1 *)0x3ff0000000000000;
    iVar3 = FUN_140e851f0(uVar6,&local_1c8,DAT_141955260,0);
    if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    if (iVar3 == 0) {
      uStack_1dc = 0;
      local_1e8 = (longlong *)0x0;
      puVar7 = &local_1e8;
      uVar9 = 1;
      local_1a8 = 1;
    }
    else {
      uStack_1bc = 0;
      local_1c8 = (undefined1 *)0x4066800000000000;
      puVar7 = &local_1c8;
      uVar9 = 2;
      local_1a8 = 2;
    }
    uVar1 = uStack_1bc;
    uVar13 = uStack_1dc;
    local_1d8 = *(undefined4 *)puVar7;
    uStack_1d4 = *(undefined4 *)((longlong)puVar7 + 4);
    uStack_1d0 = *(undefined4 *)(puVar7 + 1);
    uStack_1cc = *(undefined4 *)((longlong)puVar7 + 0xc);
    if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    FUN_140041b80(&local_138,&local_1d8);
    if (((uVar9 & 2) != 0) &&
       (uVar9 = uVar9 & 0xfffffffd, local_1a8 = uVar9, (1 << ((byte)uVar1 & 0x1f) & 0x46U) != 0)) {
      FUN_140041a50(&local_1c8);
    }
    if (((uVar9 & 1) != 0) && ((1 << ((byte)uVar13 & 0x1f) & 0x46U) != 0)) {
      FUN_140041a50(&local_1e8);
    }
    local_118 = 0x1b;
    if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    local_1b8 = 0;
    local_1b0 = 0;
    local_1ac = 5;
    uVar6 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a582e0);
    uStack_1dc = 6;
    local_1e8 = local_res8;
    in_stack_fffffffffffffe10 = in_stack_fffffffffffffe10 & 0xffffffffffffff00;
    uVar11 = (ulonglong)ppuVar10 & 0xffffffffffffff00;
    FUN_140e87440(&local_1e8,DAT_1419fe0e8,0x80000000,&local_88,uVar11,in_stack_fffffffffffffe10);
    if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    uStack_1dc = 6;
    local_1e8 = local_res8;
    in_stack_fffffffffffffe10 = in_stack_fffffffffffffe10 & 0xffffffffffffff00;
    uVar11 = uVar11 & 0xffffffffffffff00;
    FUN_140e87440(&local_1e8,DAT_1419fe158,0x80000000,&local_98,uVar11,in_stack_fffffffffffffe10);
    if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    uVar11 = uVar11 & 0xffffffffffffff00;
    FUN_140e87440(uVar6,DAT_141a0aaa8,0x80000000,&local_a8,uVar11,
                  in_stack_fffffffffffffe10 & 0xffffffffffffff00);
    uVar13 = (undefined4)(uVar11 >> 0x20);
    local_1d8 = (undefined4)local_88;
    uStack_1d4 = local_88._4_4_;
    uStack_1d0 = uStack_80;
    uStack_1cc = uStack_7c;
    if ((1 << ((byte)_local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    FUN_140041b80(&local_198,&local_1d8);
    local_e8 = &local_198;
    local_1d8 = (undefined4)local_98;
    uStack_1d4 = local_98._4_4_;
    uStack_1d0 = uStack_90;
    uStack_1cc = uStack_8c;
    if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_188);
    }
    FUN_140041b80(local_188,&local_1d8);
    local_e0 = (undefined8 *)local_188;
    local_1d8 = _DAT_141dd79d8;
    uStack_1d4 = uRam0000000141dd79dc;
    uStack_1d0 = uRam0000000141dd79e0;
    uStack_1cc = DAT_141dd79e4;
    if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    FUN_140041b80(&local_178,&local_1d8);
    local_d8 = &local_178;
    local_1d8 = (undefined4)local_a8;
    uStack_1d4 = local_a8._4_4_;
    uStack_1d0 = uStack_a0;
    uStack_1cc = uStack_9c;
    if ((1 << ((byte)_local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_168);
    }
    FUN_140041b80(local_168,&local_1d8);
    local_d0 = local_168;
    ppuVar10 = &local_e8;
    uVar11 = CONCAT44(uVar13,DAT_141a0a7c8);
    uVar6 = FUN_140e634e0(local_res8,local_res10,&local_1b8,4,uVar11,ppuVar10);
    iVar3 = FUN_140e63cb0(local_78,&local_res8,&local_res10,uVar6);
    if (0 < iVar3) {
      do {
        local_118 = 0x1d;
        puVar7 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1eed0);
        FUN_140e609c0(local_res8);
        if (&local_138 != puVar7) {
          local_1d8 = (undefined4)local_138;
          uStack_1d4 = local_138._4_4_;
          uStack_1d0 = uStack_130;
          uStack_1cc = uStack_12c;
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar7);
          }
          FUN_140041b80(puVar7,&local_1d8);
        }
        FUN_140e60910(1);
        local_118 = 0x1e;
        puVar7 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f0d0);
        uStack_1dc = 0xf;
        local_1e8 = (longlong *)0x1000000000000ee;
        plVar12 = local_res8;
        uVar11 = local_res10;
        FUN_140e87170(&local_1e8,DAT_141a0a828,0x80000000,&local_f8,local_res8,local_res10);
        if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1e8);
        }
        FUN_140e609c0(local_res8);
        if (&local_f8 != puVar7) {
          local_1d8 = (undefined4)local_f8;
          uStack_1d4 = local_f8._4_4_;
          uStack_1d0 = uStack_f0;
          uStack_1cc = uStack_ec;
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar7);
          }
          FUN_140041b80(puVar7,&local_1d8);
        }
        FUN_140e60910(1);
        local_118 = 0x1f;
        puVar7 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a0a7d8);
        uStack_1bc = 0xf;
        local_1c8 = (undefined1 *)0x1000000000000ee;
        ppuVar10 = (undefined8 **)(uVar11 & 0xffffffffffffff00);
        uVar11 = (ulonglong)plVar12 & 0xffffffffffffff00;
        FUN_140e87440(&local_1c8,DAT_141a0a7d8,0x80000000,&local_108,uVar11,ppuVar10);
        if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1c8);
        }
        FUN_140e609c0(local_res8);
        if (&local_108 != puVar7) {
          local_1d8 = (undefined4)local_108;
          uStack_1d4 = local_108._4_4_;
          uStack_1d0 = uStack_100;
          uStack_1cc = uStack_fc;
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar7);
          }
          FUN_140041b80(puVar7,&local_1d8);
        }
        FUN_140e60910(1);
        local_118 = 0x20;
        puVar7 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419f6018);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar7);
        }
        *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
        *puVar7 = 0x3ff0000000000000;
        cVar2 = FUN_140e643f0(local_78,&local_res8,&local_res10);
      } while (cVar2 != '\0');
      param_3 = local_res18;
    }
    FUN_140e63970(local_78,&local_res8,&local_res10);
    local_118 = 0x23;
    if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    local_1b8 = 0;
    local_1b0 = 0;
    local_1ac = 5;
    if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    local_148 = 0;
    local_140 = 0;
    local_13c = 5;
    uVar14 = (ulonglong)ppuVar10 & 0xffffffffffffff00;
    uVar11 = uVar11 & 0xffffffffffffff00;
    FUN_140e87440(uVar4,DAT_1419eeea8,0x80000000,&local_b8,uVar11,uVar14);
    uStack_1dc = 0xf;
    local_1e8 = (longlong *)0x1000000000000ee;
    uVar11 = uVar11 & 0xffffffffffffff00;
    FUN_140e87440(&local_1e8,DAT_141a0a7d8,0x80000000,&local_108,uVar11,uVar14 & 0xffffffffffffff00)
    ;
    uVar13 = (undefined4)(uVar11 >> 0x20);
    if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    FUN_140e609c0(DAT_141a729d8);
    FUN_140e645a0(&local_1c8,gml_Object_oCrimsonFriend_Step_0,0);
    if (&local_1c8 != puVar5) {
      local_1d8 = (undefined4)local_1c8;
      uStack_1d4 = local_1c8._4_4_;
      uStack_1d0 = uStack_1c0;
      uStack_1cc = uStack_1bc;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar5);
      }
      FUN_140041b80(puVar5,&local_1d8);
    }
    FUN_140e60910(1);
    if (puVar5 != &local_198) {
      local_1d8 = *(undefined4 *)puVar5;
      uStack_1d4 = *(undefined4 *)((longlong)puVar5 + 4);
      uStack_1d0 = *(undefined4 *)(puVar5 + 1);
      uStack_1cc = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_198);
      }
      FUN_140041b80(&local_198,&local_1d8);
    }
    if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    local_e8 = &local_198;
    local_e0 = &local_138;
    local_1d8 = (undefined4)local_108;
    uStack_1d4 = local_108._4_4_;
    uStack_1d0 = uStack_100;
    uStack_1cc = uStack_fc;
    if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    FUN_140041b80(&local_178,&local_1d8);
    local_d8 = &local_178;
    local_1d8 = (undefined4)local_b8;
    uStack_1d4 = local_b8._4_4_;
    uStack_1d0 = uStack_b0;
    uStack_1cc = uStack_ac;
    if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_168);
    }
    FUN_140041b80(local_168,&local_1d8);
    local_d0 = local_168;
    puVar8 = (undefined4 *)
             FUN_140e634e0(local_res8,local_res10,&local_148,3,CONCAT44(uVar13,DAT_1419fd6d8),
                           &local_e8);
    if (puVar8 != local_158) {
      local_1d8 = *puVar8;
      uStack_1d4 = puVar8[1];
      uStack_1d0 = puVar8[2];
      uStack_1cc = puVar8[3];
      if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_158);
      }
      FUN_140041b80(local_158,&local_1d8);
    }
    local_c8 = local_158;
    gml_Script___remove_listener_from_signal_anon_1472_SignalController_SIGNALS
              (local_res8,local_res10,&local_1b8,2,&local_d0);
    if (local_68 != 0) {
      FUN_140e4cd60();
    }
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
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
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  _eh_vector_destructor_iterator_(&local_198,0x10,5,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_128;
  return param_3;
}

