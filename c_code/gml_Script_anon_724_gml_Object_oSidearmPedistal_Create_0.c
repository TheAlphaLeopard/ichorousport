// gml_Script_anon_724_gml_Object_oSidearmPedistal_Create_0 @ 0x140d80e50

undefined8 *
gml_Script_anon_724_gml_Object_oSidearmPedistal_Create_0
          (longlong *param_1,ulonglong param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong **pplVar4;
  undefined8 *puVar5;
  longlong *local_res8;
  ulonglong local_res10;
  undefined4 local_res18;
  code *pcVar6;
  longlong *plVar7;
  ulonglong uVar8;
  undefined4 uVar10;
  ulonglong uVar9;
  ulonglong in_stack_fffffffffffffe50;
  undefined1 **ppuVar11;
  longlong *local_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  longlong *local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 local_188;
  undefined4 local_180;
  undefined4 local_17c;
  undefined8 local_178;
  undefined4 local_16c;
  longlong *local_168;
  undefined4 local_160;
  undefined4 local_15c;
  longlong *local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined4 local_13c;
  undefined8 local_138;
  char *local_130;
  undefined4 local_128;
  longlong *local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  longlong *local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  longlong *local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined1 local_e8 [12];
  byte local_dc;
  undefined1 local_d8 [12];
  byte local_cc;
  undefined1 local_c8 [12];
  byte local_bc;
  undefined1 local_b8 [12];
  byte local_ac;
  undefined1 *local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  undefined1 *local_90;
  undefined1 local_88 [16];
  longlong local_78;
  
  local_res18 = 0;
  local_130 = "gml_Script_anon@106@gml_Object_oSideArm_Create_0";
  local_138 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_138;
  local_128 = 7;
  pcVar6 = FUN_140041b30;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(local_e8,0x10,4,FUN_1400424d0,FUN_140041b30);
  uStack_14c = 0xffffff;
  local_158 = (longlong *)0x0;
  uStack_ec = 0xffffff;
  local_f8 = (longlong *)0x0;
  local_15c = 0xffffff;
  local_168 = (longlong *)0x0;
  uStack_fc = 0xffffff;
  local_108 = (longlong *)0x0;
  uStack_10c = 0xffffff;
  local_118 = (longlong *)0x0;
  local_13c = 0xffffff;
  local_148 = 0;
  local_16c = 0xffffff;
  local_178 = 0;
  local_17c = 0;
  local_188 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_128 = 9;
  uStack_19c = 0xf;
  local_1a8 = (longlong *)0x100000000000106;
  FUN_140e87440(&local_1a8,DAT_141a0a958,0x80000000,&local_158,
                (ulonglong)pcVar6 & 0xffffffffffffff00,
                in_stack_fffffffffffffe50 & 0xffffffffffffff00);
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  uStack_19c = 0;
  local_1a8 = (longlong *)&DAT_bff0000000000000;
  iVar2 = FUN_140e851f0(&local_158,&local_1a8,DAT_141955260,0);
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if (iVar2 != 0) {
    local_128 = 0xb;
    if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    local_188 = 0;
    local_180 = 0;
    local_17c = 5;
    uStack_19c = 0xf;
    local_1a8 = (longlong *)0x1000000000000ee;
    FUN_140e87170(&local_1a8,DAT_1419fe0e8,0x80000000,&local_f8,local_res8,local_res10);
    if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    uStack_19c = 0xf;
    local_1a8 = (longlong *)0x1000000000000ee;
    plVar7 = local_res8;
    uVar9 = local_res10;
    FUN_140e87170(&local_1a8,DAT_1419fe158,0x80000000,&local_168,local_res8,local_res10);
    if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    uStack_19c = 6;
    local_1a8 = local_res8;
    uVar8 = (ulonglong)plVar7 & 0xffffffffffffff00;
    FUN_140e87440(&local_1a8,DAT_141a1b910,0x80000000,&local_108,uVar8,uVar9 & 0xffffffffffffff00);
    uVar10 = (undefined4)(uVar8 >> 0x20);
    if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    local_198 = local_f8;
    uStack_190 = uStack_f0;
    uStack_18c = uStack_ec;
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_e8);
    }
    FUN_140041b80(local_e8,&local_198);
    local_a8 = local_e8;
    uStack_19c = local_15c;
    uStack_1a0 = local_160;
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) == 0) {
      local_1a8 = local_168;
    }
    else {
      FUN_1400419b0(&local_1a8,&local_168);
    }
    local_res18 = 1;
    uStack_18c = 7;
    local_198 = (longlong *)CONCAT44(local_198._4_4_,8);
    FUN_1400462a0(&local_1a8,&local_198);
    if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    local_198 = local_1a8;
    uStack_190 = uStack_1a0;
    uStack_18c = uStack_19c;
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_d8);
    }
    FUN_140041b80(local_d8,&local_198);
    if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    local_198 = local_108;
    uStack_190 = uStack_100;
    uStack_18c = uStack_fc;
    local_a0 = local_d8;
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_c8);
    }
    FUN_140041b80(local_c8,&local_198);
    local_98 = local_c8;
    uStack_18c = 0xf;
    local_198 = (longlong *)0x100000000000117;
    local_1a8 = (longlong *)0x100000000000117;
    uStack_1a0 = uStack_190;
    uStack_19c = 0xf;
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_b8);
    }
    FUN_140041b80(local_b8,&local_1a8);
    local_90 = local_b8;
    ppuVar11 = &local_a8;
    uVar9 = CONCAT44(uVar10,DAT_141a0a7c8);
    uVar3 = FUN_140e634e0(local_res8,local_res10,&local_188,4,uVar9,ppuVar11);
    iVar2 = FUN_140e63cb0(local_88,&local_res8,&local_res10,uVar3);
    if (0 < iVar2) {
      do {
        local_128 = 0xd;
        pplVar4 = (longlong **)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a57b30);
        uStack_18c = 0xf;
        local_198 = (longlong *)0x100000000000106;
        uVar8 = (ulonglong)ppuVar11 & 0xffffffffffffff00;
        uVar9 = uVar9 & 0xffffffffffffff00;
        FUN_140e87440(&local_198,DAT_141a0a958,0x80000000,&local_158,uVar9,uVar8);
        if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_198);
        }
        FUN_140e609c0(local_res8);
        if (&local_158 != pplVar4) {
          local_1a8 = local_158;
          uStack_1a0 = uStack_150;
          uStack_19c = uStack_14c;
          if ((1 << ((byte)*(undefined4 *)((longlong)pplVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(pplVar4);
          }
          FUN_140041b80(pplVar4,&local_1a8);
        }
        FUN_140e60910(1);
        local_128 = 0xe;
        uVar3 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a57b30);
        ppuVar11 = (undefined1 **)(uVar8 & 0xffffffffffffff00);
        uVar9 = uVar9 & 0xffffffffffffff00;
        FUN_140e87440(uVar3,DAT_141a0a9f8,0x80000000,&local_118,uVar9,ppuVar11);
        local_1a8 = local_118;
        uStack_1a0 = uStack_110;
        uStack_19c = uStack_10c;
        if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_148);
        }
        FUN_140041b80(&local_148,&local_1a8);
        FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_148);
        local_128 = 0xf;
        puVar5 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f230);
        uVar3 = FUN_140e794b0(0,0);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar5);
        }
        *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
        *puVar5 = uVar3;
        local_128 = 0x10;
        puVar5 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f500);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar5);
        }
        *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
        *puVar5 = 0xbff8000000000000;
        cVar1 = FUN_140e643f0(local_88,&local_res8,&local_res10);
      } while (cVar1 != '\0');
    }
    FUN_140e63970(local_88,&local_res8,&local_res10);
    if (local_78 != 0) {
      FUN_140e4cd60();
    }
  }
  local_128 = 0x16;
  puVar5 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a57b30);
  if (puVar5 != &local_178) {
    local_198 = (longlong *)*puVar5;
    uStack_190 = *(undefined4 *)(puVar5 + 1);
    uStack_18c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    FUN_140041b80(&local_178,&local_198);
  }
  uStack_18c = 0xf;
  local_198 = (longlong *)0x100000000000106;
  FUN_140e87930(&local_198,DAT_141a0a958,0x80000000,&local_178);
  if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  _eh_vector_destructor_iterator_(local_e8,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_138;
  return param_3;
}

