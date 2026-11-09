// gml_Script____struct___677_anon_39227____struct___676_gml_Object_oPlayer_Create_0 @ 0x140c26e70

undefined8 *
gml_Script____struct___677_anon_39227____struct___676_gml_Object_oPlayer_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  longlong *local_res8;
  undefined8 local_res10;
  undefined1 **ppuVar8;
  ulonglong in_stack_fffffffffffffe10;
  ulonglong uVar9;
  undefined8 local_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined8 local_1c8;
  char *local_1c0;
  undefined4 local_1b8;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  undefined4 local_18c;
  undefined8 local_188;
  undefined4 local_180;
  undefined4 local_17c;
  undefined8 local_178;
  undefined4 local_170;
  undefined4 local_16c;
  undefined8 local_168;
  undefined4 local_15c;
  undefined8 local_158;
  undefined4 local_14c;
  undefined8 local_148;
  undefined4 local_13c;
  undefined8 local_138;
  undefined4 local_12c;
  undefined8 local_128;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 local_fc;
  undefined1 local_f8 [12];
  byte local_ec;
  undefined1 local_e8 [12];
  byte local_dc;
  undefined1 local_d8 [12];
  byte local_cc;
  undefined1 *local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  undefined1 local_b0 [16];
  longlong local_a0;
  undefined1 local_90 [16];
  longlong local_80;
  
  local_1c0 = "gml_Script_anon@38795@___struct___675@gml_Object_oPlayer_Create_0";
  local_1c8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_1c8;
  local_1b8 = 0x801;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(local_f8,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_fc = 0xffffff;
  local_108 = 0;
  local_18c = 0xffffff;
  local_198 = 0;
  local_10c = 0xffffff;
  local_118 = 0;
  local_13c = 0xffffff;
  local_148 = 0;
  puVar4 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_14c = 0xffffff;
  local_158 = 0;
  local_15c = 0xffffff;
  local_168 = 0;
  local_11c = 0xffffff;
  local_128 = 0;
  local_16c = 0xffffff;
  local_178 = 0;
  local_12c = 0xffffff;
  local_138 = 0;
  local_1cc = 0;
  local_1d8 = 0;
  local_17c = 0;
  local_188 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_1b8 = 0x803;
  uStack_1dc = 0xf;
  local_1e8 = 0x100000100000408;
  local_1a8 = 0x408;
  uStack_1a4 = 0x1000001;
  uStack_1a0 = uStack_1e0;
  uStack_19c = 0xf;
  if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_f8);
  }
  FUN_140041b80(local_f8,&local_1a8);
  local_c8 = local_f8;
  local_1a8 = (undefined4)DAT_1419df7b0;
  uStack_1a4 = DAT_1419df7b0._4_4_;
  uStack_1a0 = DAT_1419df7b8;
  uStack_19c = DAT_1419df7bc;
  if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_e8);
  }
  FUN_140041b80(local_e8,&local_1a8);
  local_c0 = local_e8;
  ppuVar8 = &local_c8;
  uVar5 = gml_Script_animcurve_lerp(local_res8,local_res10,&local_1d8,2,ppuVar8);
  cVar1 = FUN_140e491e0(uVar5);
  if (cVar1 == '\0') goto LAB_140c2754a;
  local_1b8 = 0x805;
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  local_188 = 0;
  local_180 = 0;
  local_17c = 5;
  uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419f5868);
  FUN_140e87440(uVar5,DAT_141a55540,0x80000000,&local_108,(ulonglong)ppuVar8 & 0xffffffffffffff00,
                in_stack_fffffffffffffe10 & 0xffffffffffffff00);
  local_1a8 = (undefined4)DAT_141dda818;
  uStack_1a4 = DAT_141dda818._4_4_;
  uStack_1a0 = DAT_141dda820;
  uStack_19c = DAT_141dda824;
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_1a8);
  local_b8 = local_d8;
  uVar5 = FUN_140069500(uVar5);
  ppuVar8 = &local_b8;
  puVar6 = &local_108;
  FUN_140e63610(uVar5,local_res10,&local_188,1,puVar6,ppuVar8);
  local_1b8 = 0x806;
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  local_1d8 = 0;
  local_1d0 = 0;
  local_1cc = 5;
  uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419f5e38);
  uVar9 = (ulonglong)ppuVar8 & 0xffffffffffffff00;
  uVar7 = (ulonglong)puVar6 & 0xffffffffffffff00;
  FUN_140e87440(uVar5,DAT_1419f5868,0x80000000,&local_198,uVar7,uVar9);
  FUN_140e87440(&local_198,DAT_141a55540,0x80000000,&local_118,uVar7 & 0xffffffffffffff00,
                uVar9 & 0xffffffffffffff00);
  local_1a8 = (undefined4)DAT_141dda818;
  uStack_1a4 = DAT_141dda818._4_4_;
  uStack_1a0 = DAT_141dda820;
  uStack_19c = DAT_141dda824;
  if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_f8);
  }
  FUN_140041b80(local_f8,&local_1a8);
  local_c8 = local_f8;
  switch(local_18c) {
  default:
switchD_140c27215_caseD_1:
    uVar5 = 0;
    break;
  case 6:
    uVar5 = local_198;
    break;
  case 0xf:
    iVar3 = (int)((ulonglong)local_198 >> 0x20);
    if ((iVar3 != 0x1000000) && (iVar3 != 0x4000001)) goto switchD_140c27215_caseD_1;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar2 = FUN_140e4a8b0(&local_198);
    uVar5 = FUN_140e87250(uVar2);
  }
  FUN_140e63610(uVar5,local_res10,&local_1d8,1,&local_118,&local_c8);
  local_1b8 = 0x807;
  uStack_1dc = 0xf;
  local_1e8 = 0x100000000000143;
  iVar3 = FUN_140e63cb0(local_90,&local_res8,&local_res10,&local_1e8);
  if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  if (0 < iVar3) {
    do {
      local_1b8 = 0x808;
      uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419f8678);
      uStack_1dc = 0;
      local_1e8 = 0x3ff0000000000000;
      iVar3 = FUN_140e851f0(uVar5,&local_1e8,DAT_141955260,0);
      if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1e8);
      }
      if (iVar3 == 0) {
        local_1b8 = 0x809;
        if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_148);
        }
        local_13c = 0;
        local_148 = 0x4014000000000000;
        FUN_140e86fa0(local_res8,DAT_141a0a7e8,0);
      }
      cVar1 = FUN_140e643f0(local_90,&local_res8);
    } while (cVar1 != '\0');
  }
  FUN_140e63970(local_90,&local_res8,&local_res10);
  local_1b8 = 0x80b;
  uStack_1dc = 0xf;
  local_1e8 = 0x100000000000144;
  iVar3 = FUN_140e63cb0(local_b0,&local_res8,&local_res10,&local_1e8);
  if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  if (0 < iVar3) {
    do {
      local_1b8 = 0x80c;
      uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419ff228);
      uStack_1dc = 0;
      local_1e8 = 0x4018000000000000;
      iVar3 = FUN_140e851f0(uVar5,&local_1e8,DAT_141955260,0);
      if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1e8);
      }
      if (iVar3 == 0) {
        local_1b8 = 0x80d;
        puVar6 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419ff228);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar6);
        }
        *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
        *puVar6 = 0x401c000000000000;
      }
      cVar1 = FUN_140e643f0(local_b0,&local_res8,&local_res10);
    } while (cVar1 != '\0');
  }
  FUN_140e63970(local_b0,&local_res8,&local_res10);
  if (local_a0 != 0) {
    FUN_140e4cd60();
    local_a0 = 0;
  }
  if (local_80 != 0) {
    FUN_140e4cd60();
  }
LAB_140c2754a:
  local_1b8 = 0x810;
  if (puVar4 != &local_158) {
    local_1a8 = *(undefined4 *)puVar4;
    uStack_1a4 = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_1a0 = *(undefined4 *)(puVar4 + 1);
    uStack_19c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    FUN_140041b80(&local_158,&local_1a8);
  }
  FUN_140e86fa0(local_res8,DAT_141a0a818,0x80000000,&local_158);
  local_1b8 = 0x811;
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  local_1d8 = 0;
  local_1d0 = 0;
  local_1cc = 5;
  uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd4b8);
  FUN_140e63610(local_res8,local_res10,&local_1d8,0,uVar5,0);
  local_1b8 = 0x813;
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  local_1d8 = 0;
  local_1d0 = 0;
  local_1cc = 5;
  uVar7 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd398);
  uVar9 = 0;
  uVar5 = FUN_140e63610(local_res8,local_res10,&local_1d8,0,uVar7,0);
  cVar1 = FUN_140e491e0(uVar5);
  if (cVar1 != '\0') {
    local_1b8 = 0x815;
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    local_15c = 0;
    local_168 = 0;
    uStack_1dc = 0xf;
    local_1e8 = 0x100000000000106;
    FUN_140e87930(&local_1e8,DAT_1419ffbe8,0x80000000,&local_168);
    if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
  }
  local_1b8 = 0x819;
  uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a57250);
  uVar9 = uVar9 & 0xffffffffffffff00;
  uVar7 = uVar7 & 0xffffffffffffff00;
  FUN_140e87440(uVar5,DAT_1419f86a8,0x80000000,&local_128,uVar7,uVar9);
  cVar1 = FUN_140e491e0(&local_128);
  if (cVar1 == '\0') {
    local_1b8 = 0x81a;
    uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a57250);
    FUN_140e87440(uVar5,DAT_1419f81f8,0x80000000,&local_178,uVar7 & 0xffffffffffffff00,
                  uVar9 & 0xffffffffffffff00);
    uStack_1dc = local_16c;
    uStack_1e0 = local_170;
    if ((1 << ((byte)local_16c & 0x1f) & 0x46U) == 0) {
      local_1e8 = local_178;
    }
    else {
      FUN_1400419b0(&local_1e8,&local_178);
    }
    uVar2 = uStack_1dc;
    local_1a8 = (undefined4)local_1e8;
    uStack_1a4 = local_1e8._4_4_;
    uStack_1a0 = uStack_1e0;
    uStack_19c = uStack_1dc;
    if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    FUN_140041b80(&local_138,&local_1a8);
    if ((1 << ((byte)uVar2 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    uStack_1dc = 0xf;
    local_1e8 = 0x100000000000058;
    FUN_140e87930(&local_1e8,DAT_1419fefe8,0x80000000,&local_138);
    if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
  }
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  _eh_vector_destructor_iterator_(local_f8,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_1c8;
  return param_3;
}

