// gml_Script____struct___348_gml_Object_oBossEmbrace_Create_0 @ 0x14074d520

undefined8 *
gml_Script____struct___348_gml_Object_oBossEmbrace_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  bool bVar6;
  longlong *local_res8;
  undefined8 local_res10;
  code *pcVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  undefined8 **ppuVar10;
  ulonglong uVar11;
  undefined1 **ppuVar12;
  undefined8 local_178;
  undefined4 local_170;
  undefined4 local_16c;
  undefined8 local_168;
  undefined4 local_160;
  undefined4 local_15c;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 local_14c;
  undefined8 local_148;
  undefined8 uStack_140;
  longlong local_138;
  undefined8 local_128;
  char *local_120;
  undefined4 local_118;
  undefined8 local_110;
  undefined4 local_104;
  undefined8 local_100;
  undefined4 local_f4;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  byte local_cc;
  undefined1 local_c8 [16];
  undefined8 local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 *local_98;
  undefined1 *local_90;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 local_3c;
  
  local_120 = "gml_Script_anon@35269@___struct___348@gml_Object_oBossEmbrace_Create_0";
  local_128 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_128;
  local_118 = 0x3db;
  pcVar7 = FUN_140041b30;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(&local_d8,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_9c = 0xffffff;
  local_a8 = 0;
  local_6c = 0xffffff;
  local_78 = 0;
  local_ac = 0xffffff;
  local_b8 = 0;
  local_3c = 0xffffff;
  local_48 = 0;
  local_f4 = 0xffffff;
  local_100 = 0;
  local_4c = 0xffffff;
  local_58 = 0;
  local_7c = 0xffffff;
  local_88 = 0;
  local_104 = 0xffffff;
  local_110 = 0;
  local_5c = 0xffffff;
  local_68 = 0;
  local_14c = 0;
  local_158 = 0;
  local_15c = 0;
  local_168 = 0;
  local_16c = 0;
  local_178 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_118 = 0x3dc;
  uVar4 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a57250);
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_9c = 0;
  local_a8 = 0;
  FUN_140e87930(uVar4,DAT_141a0a848,0x80000000,&local_a8);
  local_118 = 0x3dd;
  uStack_140 = CONCAT44(0xd,(undefined4)uStack_140);
  local_148 = 0;
  local_e8 = 0;
  uStack_e0 = uStack_140;
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  FUN_140041b80(&local_78,&local_e8);
  uVar4 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a57250);
  FUN_140e87930(uVar4,DAT_141a07588,0x80000000,&local_78);
  local_118 = 0x3de;
  puVar5 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f230);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar5);
  }
  *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
  *puVar5 = 0;
  local_118 = 0x3df;
  puVar5 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f500);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar5);
  }
  *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
  *puVar5 = 0;
  local_118 = 0x3e0;
  uVar4 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a572d0);
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_ac = 0;
  local_b8 = 0;
  FUN_140e87930(uVar4,DAT_141a1dce0,0x80000000,&local_b8);
  local_118 = 0x3e2;
  uVar4 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f090);
  uStack_140 = uStack_140 & 0xffffffff;
  local_148 = 0;
  iVar2 = FUN_140e851f0(uVar4,&local_148,DAT_141955260,1);
  bVar6 = iVar2 != -2 && iVar2 < 1;
  if ((1 << ((byte)(uStack_140 >> 0x20) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if (iVar2 != -2 && iVar2 < 1) {
LAB_14074df9e:
    local_118 = 0x3e2;
    goto LAB_14074dfa5;
  }
  uVar4 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a57250);
  uVar8 = CONCAT71((int7)((ulonglong)pcVar7 >> 8),bVar6);
  FUN_140e87440(uVar4,DAT_141a06ec8,0x80000000,&local_48,uVar8,bVar6);
  uVar3 = (undefined4)((ulonglong)uVar8 >> 0x20);
  cVar1 = FUN_140e491e0(&local_48);
  if (cVar1 != '\0') goto LAB_14074df9e;
  local_118 = 0x3e4;
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_158 = 0;
  local_150 = 0;
  local_14c = 5;
  puVar5 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a07088);
  if (puVar5 != &local_d8) {
    local_e8 = *puVar5;
    uStack_e0 = puVar5[1];
    if ((1 << ((byte)_local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    FUN_140041b80(&local_d8,&local_e8);
  }
  local_98 = &local_d8;
  ppuVar10 = &local_98;
  puVar5 = (undefined8 *)CONCAT44(uVar3,DAT_141a02ef8);
  uVar4 = FUN_140e634e0(local_res8,local_res10,&local_158,1,puVar5,ppuVar10);
  cVar1 = FUN_140e491e0(uVar4);
  if (cVar1 != '\0') {
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    local_168 = 0;
    local_160 = 0;
    local_15c = 5;
    uVar4 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a07088);
    uVar11 = (ulonglong)ppuVar10 & 0xffffffffffffff00;
    uVar9 = (ulonglong)puVar5 & 0xffffffffffffff00;
    FUN_140e87440(uVar4,DAT_1419f5868,0x80000000,&local_100,uVar9,uVar11);
    FUN_140e87440(&local_100,DAT_1419f5df8,0x80000000,&local_58,uVar9 & 0xffffffffffffff00,
                  uVar11 & 0xffffffffffffff00);
    uStack_140 = CONCAT44(DAT_141dd64c4,DAT_141dd64c0);
    if ((1 << ((byte)DAT_141dd64c4 & 0x1f) & 0x46U) == 0) {
      local_148 = CONCAT44(DAT_141dd64b8._4_4_,(undefined4)DAT_141dd64b8);
    }
    else {
      FUN_1400419b0(&local_148,&DAT_141dd64b8);
    }
    switch(local_f4) {
    default:
switchD_14074da19_caseD_1:
      uVar4 = 0;
      break;
    case 6:
      uVar4 = local_100;
      break;
    case 0xf:
      iVar2 = (int)((ulonglong)local_100 >> 0x20);
      if ((iVar2 != 0x1000000) && (iVar2 != 0x4000001)) goto switchD_14074da19_caseD_1;
    case 0:
    case 7:
    case 10:
    case 0xd:
      uVar3 = FUN_140e4a8b0(&local_100);
      uVar4 = FUN_140e87250(uVar3);
    }
    ppuVar12 = (undefined1 **)0x0;
    puVar5 = &local_58;
    uVar4 = FUN_140e63610(uVar4,local_res10,&local_168,0,puVar5,0);
    iVar2 = FUN_140e851f0(uVar4,&local_148,DAT_141955260,0);
    if ((1 << ((byte)(uStack_140 >> 0x20) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    if (iVar2 != 0) {
      local_118 = 0x3e4;
      uVar4 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a07088);
      iVar2 = FUN_140e63cb0(&local_148,&local_res8,&local_res10,uVar4);
      if (0 < iVar2) {
        do {
          local_118 = 0x3e4;
          if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_178);
          }
          local_178 = 0;
          local_170 = 0;
          local_16c = 5;
          uVar4 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419f5868);
          FUN_140e87440(uVar4,DAT_141a55540,0x80000000,&local_88,
                        (ulonglong)puVar5 & 0xffffffffffffff00,
                        (ulonglong)ppuVar12 & 0xffffffffffffff00);
          local_e8 = CONCAT44(DAT_141dd64b8._4_4_,(undefined4)DAT_141dd64b8);
          uStack_e0 = CONCAT44(DAT_141dd64c4,DAT_141dd64c0);
          if ((1 << (local_c8[0xc] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_c8);
          }
          FUN_140041b80(local_c8,&local_e8);
          local_90 = local_c8;
          uVar4 = FUN_140069500(uVar4);
          ppuVar12 = &local_90;
          puVar5 = &local_88;
          FUN_140e63610(uVar4,local_res10,&local_178,1,puVar5,ppuVar12);
          cVar1 = FUN_140e643f0(&local_148,&local_res8,&local_res10);
        } while (cVar1 != '\0');
      }
      FUN_140e63970(&local_148,&local_res8,&local_res10);
      if (local_138 != 0) {
        FUN_140e4cd60();
      }
    }
  }
  uVar3 = (undefined4)((ulonglong)puVar5 >> 0x20);
  local_118 = 0x3e5;
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_158 = 0;
  local_150 = 0;
  local_14c = 5;
  puVar5 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a06c38);
  if (puVar5 != &local_d8) {
    local_e8 = *puVar5;
    uStack_e0 = puVar5[1];
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    FUN_140041b80(&local_d8,&local_e8);
  }
  local_98 = &local_d8;
  ppuVar10 = &local_98;
  uVar9 = CONCAT44(uVar3,DAT_141a02ef8);
  uVar4 = FUN_140e634e0(local_res8,local_res10,&local_158,1,uVar9,ppuVar10);
  cVar1 = FUN_140e491e0(uVar4);
  if (cVar1 == '\0') goto LAB_14074dfa5;
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  local_168 = 0;
  local_160 = 0;
  local_15c = 5;
  uVar4 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a06c38);
  uVar11 = (ulonglong)ppuVar10 & 0xffffffffffffff00;
  uVar9 = uVar9 & 0xffffffffffffff00;
  FUN_140e87440(uVar4,DAT_1419f5868,0x80000000,&local_110,uVar9,uVar11);
  FUN_140e87440(&local_110,DAT_1419f5df8,0x80000000,&local_68,uVar9 & 0xffffffffffffff00,
                uVar11 & 0xffffffffffffff00);
  uStack_140 = CONCAT44(DAT_141dd64c4,DAT_141dd64c0);
  if ((1 << ((byte)DAT_141dd64c4 & 0x1f) & 0x46U) == 0) {
    local_148 = CONCAT44(DAT_141dd64b8._4_4_,(undefined4)DAT_141dd64b8);
  }
  else {
    FUN_1400419b0(&local_148,&DAT_141dd64b8);
  }
  switch(local_104) {
  default:
switchD_14074dd9f_caseD_1:
    uVar4 = 0;
    break;
  case 6:
    uVar4 = local_110;
    break;
  case 0xf:
    iVar2 = (int)((ulonglong)local_110 >> 0x20);
    if ((iVar2 != 0x1000000) && (iVar2 != 0x4000001)) goto switchD_14074dd9f_caseD_1;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar3 = FUN_140e4a8b0(&local_110);
    uVar4 = FUN_140e87250(uVar3);
  }
  ppuVar12 = (undefined1 **)0x0;
  puVar5 = &local_68;
  uVar4 = FUN_140e63610(uVar4,local_res10,&local_168,0,puVar5,0);
  iVar2 = FUN_140e851f0(uVar4,&local_148,DAT_141955260,0);
  if ((1 << ((byte)(uStack_140 >> 0x20) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if (iVar2 != 0) {
    local_118 = 0x3e5;
    uVar4 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a06c38);
    iVar2 = FUN_140e63cb0(&local_148,&local_res8,&local_res10,uVar4);
    if (0 < iVar2) {
      do {
        local_118 = 0x3e5;
        if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_178);
        }
        local_178 = 0;
        local_170 = 0;
        local_16c = 5;
        uVar4 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419f5868);
        FUN_140e87440(uVar4,DAT_141a55540,0x80000000,&local_88,
                      (ulonglong)puVar5 & 0xffffffffffffff00,
                      (ulonglong)ppuVar12 & 0xffffffffffffff00);
        local_e8 = CONCAT44(DAT_141dd64b8._4_4_,(undefined4)DAT_141dd64b8);
        uStack_e0 = CONCAT44(DAT_141dd64c4,DAT_141dd64c0);
        if ((1 << (local_c8[0xc] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_c8);
        }
        FUN_140041b80(local_c8,&local_e8);
        local_90 = local_c8;
        uVar4 = FUN_140069500(uVar4);
        ppuVar12 = &local_90;
        puVar5 = &local_88;
        FUN_140e63610(uVar4,local_res10,&local_178,1,puVar5,ppuVar12);
        cVar1 = FUN_140e643f0(&local_148,&local_res8,&local_res10);
      } while (cVar1 != '\0');
    }
    FUN_140e63970(&local_148,&local_res8,&local_res10);
    if (local_138 != 0) {
      FUN_140e4cd60();
    }
  }
LAB_14074dfa5:
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)local_104 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_110);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_100);
  }
  if ((1 << ((byte)local_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  _eh_vector_destructor_iterator_(&local_d8,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_128;
  return param_3;
}

