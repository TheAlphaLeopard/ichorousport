// gml_Script____struct___701_gml_Object_oPlayer_Other_5 @ 0x140c83200

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Script____struct___701_gml_Object_oPlayer_Other_5(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  undefined4 **ppuVar9;
  code *pcVar10;
  undefined8 *puVar11;
  undefined4 **ppuVar12;
  ulonglong uVar13;
  longlong *plVar14;
  ulonglong in_stack_fffffffffffffe80;
  ulonglong uVar15;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined4 local_160;
  undefined4 local_15c;
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
  undefined4 local_120;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined8 local_108;
  char *local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined4 local_e4;
  undefined4 local_d8 [3];
  byte local_cc;
  undefined4 local_c8 [3];
  byte local_bc;
  undefined1 local_b8 [12];
  byte local_ac;
  undefined1 local_a8 [12];
  byte local_9c;
  undefined4 local_98 [3];
  byte local_8c;
  undefined1 local_88 [12];
  byte local_7c;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 local_5c;
  undefined4 *local_58;
  undefined4 *local_50;
  undefined1 *local_48;
  undefined1 *local_40;
  undefined4 *local_38;
  undefined1 *local_30;
  
  local_100 = "gml_Object_oPlayer_Other_5";
  local_f8 = 0;
  local_108 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_108;
  pcVar10 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_d8,0x10,6,FUN_1400424d0,FUN_140041b30);
  local_e4 = 0xffffff;
  local_f0 = 0;
  puVar4 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419f8a68);
  uVar5 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a57d00);
  local_12c = 0xffffff;
  local_138 = 0;
  local_5c = 0xffffff;
  local_68 = 0;
  puVar6 = (undefined4 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419f8de8);
  uStack_6c = 0xffffff;
  local_78 = 0;
  puVar7 = (undefined4 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419f8df8);
  local_15c = 0xffffff;
  local_168 = 0;
  local_14c = 0xffffff;
  local_158 = 0;
  local_10c = 0xffffff;
  local_118 = 0;
  local_11c = 0xffffff;
  local_128 = 0;
  local_f8 = 2;
  uVar8 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5868);
  FUN_140e87440(uVar8,DAT_1419f5848,0x80000000,&local_f0,(ulonglong)pcVar10 & 0xffffffffffffff00,
                in_stack_fffffffffffffe80 & 0xffffffffffffff00);
  local_178 = _DAT_141ddac28;
  uStack_174 = uRam0000000141ddac2c;
  uStack_170 = uRam0000000141ddac30;
  uStack_16c = DAT_141ddac34;
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_178);
  local_58 = local_d8;
  uVar8 = FUN_140069500(uVar8);
  ppuVar9 = &local_58;
  puVar11 = &local_f0;
  uVar8 = FUN_140e63610(uVar8,param_2,&local_168,1,puVar11,ppuVar9);
  cVar1 = FUN_140e491e0(uVar8);
  if (cVar1 != '\0') {
    local_f8 = 3;
    if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    local_158 = 0;
    local_150 = 0;
    local_14c = 5;
    puVar11 = (undefined8 *)0x0;
    gml_Script____struct___94_GameViewRect_GameViewRect(param_1,param_2,&local_158,0,0);
  }
  local_f8 = 5;
  FUN_140e609c0(DAT_141a729d8);
  if (puVar4 != &DAT_1419df7b0) {
    local_178 = (undefined4)DAT_1419df7b0;
    uStack_174 = DAT_1419df7b0._4_4_;
    uStack_170 = DAT_1419df7b8;
    uStack_16c = DAT_1419df7bc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_178);
  }
  FUN_140e60910(1);
  local_f8 = 6;
  cVar1 = FUN_140e491e0(uVar5);
  if (cVar1 == '\0') goto LAB_140c83ac3;
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  local_168 = 0;
  local_160 = 0;
  local_15c = 5;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5868);
  FUN_140e87440(uVar5,DAT_1419f5848,0x80000000,&local_f0,(ulonglong)puVar11 & 0xffffffffffffff00,
                (ulonglong)ppuVar9 & 0xffffffffffffff00);
  local_178 = _DAT_141ddac18;
  uStack_174 = uRam0000000141ddac1c;
  uStack_170 = uRam0000000141ddac20;
  uStack_16c = DAT_141ddac24;
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_178);
  local_58 = local_d8;
  uVar5 = FUN_140069500(uVar5);
  ppuVar9 = &local_58;
  uVar5 = FUN_140e63610(uVar5,param_2,&local_168,1,&local_f0,ppuVar9);
  cVar1 = FUN_140e491e0(uVar5);
  if (cVar1 != '\0') goto LAB_140c83ac3;
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_158 = 0;
  local_150 = 0;
  local_14c = 5;
  local_178 = _DAT_1419ed170;
  uStack_174 = uRam00000001419ed174;
  uStack_170 = uRam00000001419ed178;
  uStack_16c = uRam00000001419ed17c;
  if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_c8);
  }
  FUN_140041b80(local_c8,&local_178);
  local_50 = local_c8;
  local_178 = (undefined4)DAT_1419df7b0;
  uStack_174 = DAT_1419df7b0._4_4_;
  uStack_170 = DAT_1419df7b8;
  uStack_16c = DAT_1419df7bc;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_178);
  local_48 = local_b8;
  ppuVar12 = &local_50;
  uVar5 = gml_Script_InputCheckMany(param_1,param_2,&local_158,2,ppuVar12);
  cVar1 = FUN_140e491e0(uVar5);
  if (cVar1 == '\0') goto LAB_140c83ac3;
  local_f8 = 8;
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_118 = 0;
  local_110 = 0;
  local_10c = 5;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5e38);
  uVar15 = (ulonglong)ppuVar9 & 0xffffffffffffff00;
  uVar13 = (ulonglong)ppuVar12 & 0xffffffffffffff00;
  FUN_140e87440(uVar5,DAT_1419f5868,0x80000000,&local_138,uVar13,uVar15);
  FUN_140e87440(&local_138,DAT_1419f5848,0x80000000,&local_68,uVar13 & 0xffffffffffffff00,
                uVar15 & 0xffffffffffffff00);
  local_178 = _DAT_141ddac08;
  uStack_174 = uRam0000000141ddac0c;
  uStack_170 = uRam0000000141ddac10;
  uStack_16c = DAT_141ddac14;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_178);
  local_40 = local_a8;
  switch(local_12c) {
  default:
switchD_140c8371e_caseD_1:
    uVar5 = 0;
    break;
  case 6:
    uVar5 = local_138;
    break;
  case 0xf:
    iVar2 = (int)((ulonglong)local_138 >> 0x20);
    if ((iVar2 != 0x1000000) && (iVar2 != 0x4000001)) goto switchD_140c8371e_caseD_1;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar3 = FUN_140e4a8b0(&local_138);
    uVar5 = FUN_140e87250(uVar3);
  }
  puVar11 = &local_68;
  uVar5 = FUN_140e63610(uVar5,param_2,&local_118,1,puVar11,&local_40);
  uVar3 = (undefined4)((ulonglong)puVar11 >> 0x20);
  cVar1 = FUN_140e491e0(uVar5);
  if (cVar1 == '\0') {
    local_f8 = 10;
    uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f7b98);
    cVar1 = FUN_140e491e0(uVar5);
    if (cVar1 == '\0') goto LAB_140c83ac3;
    local_f8 = 0xb;
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    local_168 = 0;
    local_160 = 0;
    local_15c = 5;
    puVar6 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f8388);
    FUN_140e609c0(DAT_141a729d8);
    FUN_140e645a0(&local_178,gml_Object_oPlayer_Draw_64,0);
    if (&local_178 != puVar7) {
      local_148 = local_178;
      uStack_144 = uStack_174;
      uStack_140 = uStack_170;
      uStack_13c = uStack_16c;
      if ((1 << ((byte)puVar7[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar7);
      }
      FUN_140041b80(puVar7,&local_148);
    }
    FUN_140e60910(1);
    if (puVar7 != local_d8) {
      local_148 = *puVar7;
      uStack_144 = puVar7[1];
      uStack_140 = puVar7[2];
      uStack_13c = puVar7[3];
      if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_d8);
      }
      FUN_140041b80(local_d8,&local_148);
    }
    if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    local_58 = local_d8;
    if (puVar6 != local_c8) {
      local_148 = *puVar6;
      uStack_144 = puVar6[1];
      uStack_140 = puVar6[2];
      uStack_13c = puVar6[3];
      if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_c8);
      }
      FUN_140041b80(local_c8,&local_148);
    }
    local_50 = local_c8;
    FUN_140e609c0(DAT_141a729d8);
    ppuVar9 = &local_58;
    puVar11 = &local_168;
  }
  else {
    local_f8 = 9;
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    local_128 = 0;
    local_120 = 0;
    local_11c = 5;
    uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5e38);
    plVar14 = param_1;
    FUN_140e87170(uVar5,DAT_141a0cfc8,0x80000000,&local_78,param_1,param_2);
    uVar3 = (undefined4)((ulonglong)plVar14 >> 0x20);
    FUN_140e609c0(DAT_141a729d8);
    FUN_140e645a0(&local_178,gml_Object_oPlayer_Draw_0,0);
    if (&local_178 != puVar6) {
      local_148 = local_178;
      uStack_144 = uStack_174;
      uStack_140 = uStack_170;
      uStack_13c = uStack_16c;
      if ((1 << ((byte)puVar6[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar6);
      }
      FUN_140041b80(puVar6,&local_148);
    }
    FUN_140e60910(1);
    if (puVar6 != local_98) {
      local_148 = *puVar6;
      uStack_144 = puVar6[1];
      uStack_140 = puVar6[2];
      uStack_13c = puVar6[3];
      if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_98);
      }
      FUN_140041b80(local_98,&local_148);
    }
    if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    local_38 = local_98;
    local_148 = (undefined4)local_78;
    uStack_144 = local_78._4_4_;
    uStack_140 = uStack_70;
    uStack_13c = uStack_6c;
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_88);
    }
    FUN_140041b80(local_88,&local_148);
    local_30 = local_88;
    FUN_140e609c0(DAT_141a729d8);
    ppuVar9 = &local_38;
    puVar11 = &local_128;
  }
  puVar11 = (undefined8 *)
            FUN_140e634e0(param_1,param_2,puVar11,2,CONCAT44(uVar3,DAT_1419fd6d8),ppuVar9);
  if (puVar11 != puVar4) {
    local_148 = *(undefined4 *)puVar11;
    uStack_144 = *(undefined4 *)((longlong)puVar11 + 4);
    uStack_140 = *(undefined4 *)(puVar11 + 1);
    uStack_13c = *(undefined4 *)((longlong)puVar11 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_148);
  }
  FUN_140e60910(1);
LAB_140c83ac3:
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f0);
  }
  _eh_vector_destructor_iterator_(local_d8,0x10,6,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_108;
  return;
}

