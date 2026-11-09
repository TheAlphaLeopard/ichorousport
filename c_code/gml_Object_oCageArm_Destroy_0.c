// gml_Object_oCageArm_Destroy_0 @ 0x14087c740

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * gml_Object_oCageArm_Destroy_0(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 **ppuVar9;
  ulonglong uVar10;
  ulonglong in_stack_fffffffffffffec0;
  longlong *local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined4 local_fc;
  undefined4 local_f8 [3];
  byte local_ec;
  undefined1 local_e8 [12];
  byte local_dc;
  undefined1 local_d8 [12];
  byte local_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  char *local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined4 local_84;
  undefined4 *local_80;
  undefined1 *local_78;
  undefined1 *local_70;
  undefined8 local_68;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 local_3c;
  
  local_a0 = "gml_Script_anon@2628@___struct___415@gml_Object_oCageArm_Create_0";
  local_a8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_a8;
  local_98 = 0xb2;
  _eh_vector_constructor_iterator_(local_f8,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_fc = 0xffffff;
  local_108 = 0;
  local_3c = 0xffffff;
  local_48 = 0;
  local_4c = 0xffffff;
  local_58 = 0;
  local_bc = 0xffffff;
  local_c8 = 0;
  local_5c = 0xffffff;
  local_68 = 0;
  local_84 = 0xffffff;
  local_90 = 0;
  local_11c = 0;
  local_128 = 0;
  local_ac = 0;
  local_b8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_98 = 0xb4;
  uStack_12c = 0xf;
  local_138 = (longlong *)0x10000010000008c;
  local_118 = 0x8c;
  uStack_114 = 0x1000001;
  uStack_110 = uStack_130;
  uStack_10c = 0xf;
  if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_f8);
  }
  FUN_140041b80(local_f8,&local_118);
  local_80 = local_f8;
  local_118 = (undefined4)DAT_1419df7b0;
  uStack_114 = DAT_1419df7b0._4_4_;
  uStack_110 = DAT_1419df7b8;
  uStack_10c = DAT_1419df7bc;
  if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_e8);
  }
  FUN_140041b80(local_e8,&local_118);
  local_78 = local_e8;
  uVar5 = gml_Script_animcurve_lerp(param_1,param_2,&local_128,2,&local_80);
  cVar1 = FUN_140e491e0(uVar5);
  if (cVar1 != '\0') {
    local_98 = 0xb6;
    if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    local_fc = 0;
    local_108 = 0;
    FUN_140e86fa0(param_1,DAT_141a0a818,0x80000000,&local_108);
  }
  local_98 = 0xba;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_128 = 0;
  local_120 = 0;
  local_11c = 5;
  uStack_12c = 0xf;
  local_138 = (longlong *)0x10000010000008b;
  local_118 = 0x8b;
  uStack_114 = 0x1000001;
  uStack_110 = uStack_130;
  uStack_10c = 0xf;
  if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_f8);
  }
  FUN_140041b80(local_f8,&local_118);
  local_80 = local_f8;
  local_118 = (undefined4)DAT_1419df7b0;
  uStack_114 = DAT_1419df7b0._4_4_;
  uStack_110 = DAT_1419df7b8;
  uStack_10c = DAT_1419df7bc;
  if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_e8);
  }
  FUN_140041b80(local_e8,&local_118);
  local_78 = local_e8;
  ppuVar9 = &local_80;
  uVar5 = gml_Script_animcurve_lerp(param_1,param_2,&local_128,2,ppuVar9);
  cVar1 = FUN_140e491e0(uVar5);
  if (cVar1 != '\0') {
    local_98 = 0xbc;
    if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    local_b8 = 0;
    local_b0 = 0;
    local_ac = 5;
    uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5868);
    FUN_140e87440(uVar5,DAT_141a55540,0x80000000,&local_48,(ulonglong)ppuVar9 & 0xffffffffffffff00,
                  in_stack_fffffffffffffec0 & 0xffffffffffffff00);
    local_118 = (undefined4)DAT_141dd72d8;
    uStack_114 = DAT_141dd72d8._4_4_;
    uStack_110 = DAT_141dd72e0;
    uStack_10c = DAT_141dd72e4;
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_d8);
    }
    FUN_140041b80(local_d8,&local_118);
    local_70 = local_d8;
    uVar5 = FUN_140069500(uVar5);
    FUN_140e63610(uVar5,param_2,&local_b8,1,&local_48,&local_70);
    local_98 = 0xbd;
    goto LAB_14087cf6b;
  }
  local_98 = 0xc1;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57420);
  uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a11ee8);
  uVar2 = FUN_140e851f0(uVar5,uVar6,DAT_141955260,1);
  if (uVar2 < 0x80000000) {
    uStack_12c = 6;
    in_stack_fffffffffffffec0 = in_stack_fffffffffffffec0 & 0xffffffffffffff00;
    uVar10 = (ulonglong)ppuVar9 & 0xffffffffffffff00;
    local_138 = param_1;
    FUN_140e87440(&local_138,DAT_141a0a728,0x80000000,&local_58,uVar10,in_stack_fffffffffffffec0);
    if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    uStack_12c = 0xf;
    local_138 = (longlong *)0x10000010000008c;
    iVar3 = FUN_140e851f0(&local_58,&local_138,DAT_141955260,0);
    if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    if (iVar3 == 0) {
      if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      local_128 = 0;
      local_120 = 0;
      local_11c = 5;
      uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f0d0);
      in_stack_fffffffffffffec0 = in_stack_fffffffffffffec0 & 0xffffffffffffff00;
      uVar10 = uVar10 & 0xffffffffffffff00;
      FUN_140e87440(uVar5,DAT_1419f5868,0x80000000,&local_c8,uVar10,in_stack_fffffffffffffec0);
      FUN_140e87440(&local_c8,DAT_1419f5df8,0x80000000,&local_68,uVar10 & 0xffffffffffffff00,
                    in_stack_fffffffffffffec0 & 0xffffffffffffff00);
      uStack_12c = DAT_141dd72d4;
      uStack_130 = DAT_141dd72d0;
      if ((1 << ((byte)DAT_141dd72d4 & 0x1f) & 0x46U) == 0) {
        local_138 = DAT_141dd72c8;
      }
      else {
        FUN_1400419b0(&local_138,&DAT_141dd72c8);
      }
      switch(local_bc) {
      default:
switchD_14087ccc2_caseD_1:
        uVar5 = 0;
        break;
      case 6:
        uVar5 = local_c8;
        break;
      case 0xf:
        iVar3 = (int)((ulonglong)local_c8 >> 0x20);
        if ((iVar3 != 0x1000000) && (iVar3 != 0x4000001)) goto switchD_14087ccc2_caseD_1;
      case 0:
      case 7:
      case 10:
      case 0xd:
        uVar4 = FUN_140e4a8b0(&local_c8);
        uVar5 = FUN_140e87250(uVar4);
      }
      uVar5 = FUN_140e63610(uVar5,param_2,&local_128,0,&local_68,0);
      iVar3 = FUN_140e851f0(uVar5,&local_138,DAT_141955260,0);
      if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      if (iVar3 != 0) {
        local_98 = 0xc3;
        uStack_12c = 0xf;
        local_138 = (longlong *)0x10000010000008b;
        local_118 = 0x8b;
        uStack_114 = 0x1000001;
        uStack_110 = uStack_130;
        uStack_10c = 0xf;
        if ((1 << ((byte)local_84 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_90);
        }
        FUN_140041b80(&local_90,&local_118);
        FUN_140e86fa0(param_1,DAT_141a0a728,0x80000000,&local_90);
        local_98 = 0xc4;
        if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_108);
        }
        local_fc = 0;
        local_108 = 0x3ff0000000000000;
        FUN_140e86fa0(param_1,DAT_141a0a818,0x80000000,&local_108);
      }
    }
  }
  local_98 = 0xc9;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_128 = 0;
  local_120 = 0;
  local_11c = 5;
  puVar7 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a09a78);
  puVar8 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a09a78);
  if (puVar7 != local_f8) {
    local_118 = *puVar7;
    uStack_114 = puVar7[1];
    uStack_110 = puVar7[2];
    uStack_10c = puVar7[3];
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_f8);
    }
    FUN_140041b80(local_f8,&local_118);
  }
  local_80 = local_f8;
  local_118 = _DAT_1419e92a0;
  uStack_114 = uRam00000001419e92a4;
  uStack_110 = uRam00000001419e92a8;
  uStack_10c = uRam00000001419e92ac;
  if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_e8);
  }
  FUN_140041b80(local_e8,&local_118);
  local_78 = local_e8;
  local_118 = _DAT_1419e9290;
  uStack_114 = uRam00000001419e9294;
  uStack_110 = uRam00000001419e9298;
  uStack_10c = uRam00000001419e929c;
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_118);
  local_70 = local_d8;
  FUN_140e609c0(param_1);
  puVar7 = (undefined4 *)gml_Script_arc(param_1,param_2,&local_128,3,&local_80);
  if (puVar7 != puVar8) {
    local_118 = *puVar7;
    uStack_114 = puVar7[1];
    uStack_110 = puVar7[2];
    uStack_10c = puVar7[3];
    if ((1 << ((byte)puVar8[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar8);
    }
    FUN_140041b80(puVar8,&local_118);
  }
  FUN_140e60910(1);
LAB_14087cf6b:
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_84 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_90);
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  if ((1 << ((byte)local_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  _eh_vector_destructor_iterator_(local_f8,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_a8;
  return param_3;
}

