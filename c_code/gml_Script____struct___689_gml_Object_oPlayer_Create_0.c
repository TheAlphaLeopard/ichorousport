// gml_Script____struct___689_gml_Object_oPlayer_Create_0 @ 0x140c48430

undefined8 *
gml_Script____struct___689_gml_Object_oPlayer_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined1 *local_res8;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 **ppuVar9;
  longlong *local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined1 local_d8 [12];
  byte local_cc;
  undefined8 local_c8;
  char *local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined4 local_94;
  undefined8 local_90;
  undefined4 local_84;
  undefined8 local_80;
  undefined4 local_74;
  undefined8 local_70;
  undefined4 local_64;
  undefined8 local_60;
  undefined4 local_54;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  local_c0 = "gml_Script_anon@56036@___struct___689@gml_Object_oPlayer_Create_0";
  local_c8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_c8;
  local_b8 = 0xb9f;
  uVar3 = 1;
  _eh_vector_constructor_iterator_(local_d8,0x10,1,FUN_1400424d0,FUN_140041b30);
  uVar4 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0ae88);
  local_ec = 0xffffff;
  local_f8 = 0;
  local_54 = 0xffffff;
  local_60 = 0;
  local_84 = 0xffffff;
  local_90 = 0;
  local_94 = 0xffffff;
  local_a0 = 0;
  local_a4 = 0xffffff;
  local_b0 = 0;
  local_74 = 0xffffff;
  local_80 = 0;
  local_fc = 0xffffff;
  local_108 = 0;
  local_64 = 0xffffff;
  local_70 = 0;
  local_10c = 0;
  local_118 = 0;
  local_dc = 0;
  local_e8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_b8 = 0xba0;
  uStack_11c = 0xf;
  local_128 = (longlong *)0x100000000000147;
  local_48 = 0x147;
  uStack_44 = 0x1000000;
  uStack_40 = uStack_120;
  uStack_3c = 0xf;
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_48);
  local_res8 = local_d8;
  ppuVar9 = &local_res8;
  puVar6 = (undefined8 *)CONCAT44(uVar3,DAT_141a02ef8);
  uVar5 = FUN_140e634e0(param_1,param_2,&local_118,1,puVar6,ppuVar9);
  cVar1 = FUN_140e491e0(uVar5);
  if (cVar1 != '\0') {
    uStack_11c = DAT_141dda844;
    uStack_120 = DAT_141dda840;
    if ((1 << ((byte)DAT_141dda844 & 0x1f) & 0x46U) == 0) {
      local_128 = DAT_141dda838;
    }
    else {
      FUN_1400419b0(&local_128,&DAT_141dda838);
    }
    iVar2 = FUN_140e851f0(uVar4,&local_128,DAT_141955260,0);
    if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    if (iVar2 != 0) {
      local_b8 = 0xba1;
      if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e8);
      }
      local_e8 = 0;
      local_e0 = 0;
      local_dc = 5;
      uStack_11c = 0xf;
      local_128 = (longlong *)0x100000000000147;
      uVar8 = (ulonglong)ppuVar9 & 0xffffffffffffff00;
      uVar7 = (ulonglong)puVar6 & 0xffffffffffffff00;
      FUN_140e87440(&local_128,DAT_1419f8238,0x80000000,&local_f8,uVar7,uVar8);
      if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      FUN_140e87440(&local_f8,DAT_1419ff478,0x80000000,&local_60,uVar7 & 0xffffffffffffff00,
                    uVar8 & 0xffffffffffffff00);
      switch(local_ec) {
      default:
switchD_140c4871d_caseD_1:
        uVar4 = 0;
        break;
      case 6:
        uVar4 = local_f8;
        break;
      case 0xf:
        iVar2 = (int)((ulonglong)local_f8 >> 0x20);
        if ((iVar2 != 0x1000000) && (iVar2 != 0x4000001)) goto switchD_140c4871d_caseD_1;
      case 0:
      case 7:
      case 10:
      case 0xd:
        uVar3 = FUN_140e4a8b0(&local_f8);
        uVar4 = FUN_140e87250(uVar3);
      }
      ppuVar9 = (undefined1 **)0x0;
      puVar6 = &local_60;
      FUN_140e63610(uVar4,param_2,&local_e8,0,puVar6,0);
    }
  }
  local_b8 = 0xba3;
  uStack_11c = 0xf;
  local_128 = (longlong *)0x100000100000411;
  local_48 = 0x411;
  uStack_44 = 0x1000001;
  uStack_40 = uStack_120;
  uStack_3c = 0xf;
  if ((1 << ((byte)local_84 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_90);
  }
  FUN_140041b80(&local_90,&local_48);
  FUN_140e86fa0(param_1,DAT_141a0a728,0x80000000,&local_90);
  local_b8 = 0xba4;
  if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a0);
  }
  local_94 = 0;
  local_a0 = 0;
  FUN_140e86fa0(param_1,DAT_141a0cfc8,0x80000000,&local_a0);
  local_b8 = 0xba5;
  if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b0);
  }
  local_a4 = 0;
  local_b0 = 0x3ff0000000000000;
  FUN_140e86fa0(param_1,DAT_141a0a818,0x80000000,&local_b0);
  local_b8 = 0xba7;
  uStack_11c = 6;
  uVar8 = (ulonglong)ppuVar9 & 0xffffffffffffff00;
  uVar7 = (ulonglong)puVar6 & 0xffffffffffffff00;
  local_128 = param_1;
  FUN_140e87440(&local_128,DAT_1419fe158,0x80000000,&local_80,uVar7,uVar8);
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  uStack_11c = 0;
  local_128 = (longlong *)0x4038000000000000;
  FUN_1400462a0(&local_80,&local_128);
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  FUN_140e86fa0(param_1,DAT_1419fe158,0x80000000,&local_80);
  local_b8 = 0xba9;
  puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f230);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar6);
  }
  *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
  *puVar6 = 0;
  local_b8 = 0xbaa;
  puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f500);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar6);
  }
  *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
  *puVar6 = 0xbff8000000000000;
  local_b8 = 0xbab;
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_118 = 0;
  local_110 = 0;
  local_10c = 5;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5e38);
  uVar8 = uVar8 & 0xffffffffffffff00;
  uVar7 = uVar7 & 0xffffffffffffff00;
  FUN_140e87440(uVar4,DAT_1419f5868,0x80000000,&local_108,uVar7,uVar8);
  FUN_140e87440(&local_108,DAT_141a55540,0x80000000,&local_70,uVar7 & 0xffffffffffffff00,
                uVar8 & 0xffffffffffffff00);
  local_48 = (undefined4)DAT_141dda7e8;
  uStack_44 = DAT_141dda7e8._4_4_;
  uStack_40 = DAT_141dda7f0;
  uStack_3c = DAT_141dda7f4;
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_48);
  local_res8 = local_d8;
  uVar4 = 0;
  switch(local_fc) {
  case 6:
    uVar4 = local_108;
    break;
  case 0xf:
    iVar2 = (int)((ulonglong)local_108 >> 0x20);
    if ((iVar2 != 0x1000000) && (iVar2 != 0x4000001)) break;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar3 = FUN_140e4a8b0(&local_108);
    uVar4 = FUN_140e87250(uVar3);
  }
  FUN_140e63610(uVar4,param_2,&local_118,1,&local_70,&local_res8);
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_64 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_70);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_74 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_80);
  }
  if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b0);
  }
  if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a0);
  }
  if ((1 << ((byte)local_84 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_90);
  }
  if ((1 << ((byte)local_54 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_60);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  _eh_vector_destructor_iterator_(local_d8,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_c8;
  return param_3;
}

