// gml_Script_anon_5904____struct___129_JUKEBOX_system @ 0x140397ff0

undefined8 *
gml_Script_anon_5904____struct___129_JUKEBOX_system
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 **ppuVar7;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  char *local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined4 local_b4;
  undefined8 *local_b0;
  undefined8 *local_a8;
  undefined8 local_a0;
  undefined4 local_94;
  undefined8 local_90;
  undefined4 local_84;
  undefined8 local_80 [2];
  undefined8 local_70;
  byte local_64;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  local_d0 = "gml_Script_anon@5283@___struct___129@JUKEBOX_system";
  local_d8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_d8;
  local_c8 = 0xc6;
  _eh_vector_constructor_iterator_(local_80,0x10,2,FUN_1400424d0,FUN_140041b30);
  uStack_dc = 0xffffff;
  local_e8 = 0;
  local_84 = 0xffffff;
  local_90 = 0;
  local_94 = 0xffffff;
  local_a0 = 0;
  local_b4 = 0xffffff;
  local_c0 = 0;
  local_fc = 0;
  local_108 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_c8 = 199;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f4c48);
  puVar6 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar4 = &DAT_1419df7b0;
LAB_1403980f9:
    local_f8 = (undefined1 *)*puVar4;
    uStack_f0 = *(undefined4 *)(puVar4 + 1);
    uStack_ec = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_64 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_70);
    }
    FUN_140041b80(&local_70,&local_f8);
  }
  else {
    puVar4 = (undefined8 *)*param_5;
    if (puVar4 != &local_70) goto LAB_1403980f9;
  }
  local_a8 = &local_70;
  ppuVar7 = &local_a8;
  puVar4 = (undefined8 *)FUN_140e63610(param_1,param_2,&local_108,1,puVar3,ppuVar7);
  if (puVar4 != &local_e8) {
    local_f8 = (undefined1 *)*puVar4;
    uStack_f0 = *(undefined4 *)(puVar4 + 1);
    uStack_ec = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_f8);
  }
  local_c8 = 200;
  iVar1 = FUN_140e851f0(&local_e8,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 == 0) {
    local_c8 = 0xc9;
    if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    local_108 = 0;
    local_100 = 0;
    local_fc = 5;
    uVar5 = FUN_1400424f0(&local_f8,&DAT_141dd23a8);
    FUN_140041c60(local_80,uVar5);
    FUN_140041b30(&local_f8);
    local_b0 = local_80;
    if (0 < param_4) {
      puVar6 = (undefined8 *)*param_5;
    }
    FUN_140041c60(&local_70,puVar6);
    local_a8 = &local_70;
    uVar5 = FUN_140e64420(param_1,param_2,&local_108,2,&local_b0);
    FUN_140e59370(&local_f8,uVar5);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(&local_f8,(ThrowInfo *)&DAT_141951a48);
  }
  local_c8 = 0xcc;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f4ac8);
  uStack_ec = 0;
  local_f8 = &DAT_bff0000000000000;
  iVar1 = FUN_140e851f0(puVar4,&local_f8,DAT_141955260,0);
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if (iVar1 != 0) {
    if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    local_108 = 0;
    local_100 = 0;
    local_fc = 5;
    puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f4ac8);
    FUN_140e87440(puVar4,DAT_141a0aa28,0x80000000,&local_90,(ulonglong)puVar3 & 0xffffffffffffff00,
                  (ulonglong)ppuVar7 & 0xffffffffffffff00);
    if (0 < param_4) {
      puVar6 = (undefined8 *)*param_5;
    }
    uVar5 = FUN_140069500(puVar4);
    ppuVar7 = (undefined8 **)0x0;
    puVar3 = &local_90;
    uVar5 = FUN_140e63610(uVar5,param_2,&local_108,0,puVar3,0);
    iVar1 = FUN_140e851f0(uVar5,puVar6,DAT_141955260,0);
    if (iVar1 == 0) {
      local_c8 = 0xcc;
      puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f4ac8);
      if (puVar3 != param_3) {
        local_f8 = (undefined1 *)*puVar3;
        uStack_f0 = *(undefined4 *)(puVar3 + 1);
        uStack_ec = *(undefined4 *)((longlong)puVar3 + 0xc);
        if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(param_3);
        }
        FUN_140041b80(param_3,&local_f8);
      }
      if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_c0);
      }
      if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_a0);
      }
      if ((1 << ((byte)local_84 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_90);
      }
      if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e8);
      }
      goto LAB_1403987fa;
    }
  }
  local_c8 = 0xce;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f4d68);
  uStack_ec = 0;
  local_f8 = &DAT_bff0000000000000;
  iVar1 = FUN_140e851f0(uVar5,&local_f8,DAT_141955260,0);
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if (iVar1 != 0) {
    local_c8 = 0xce;
    if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    local_108 = 0;
    local_100 = 0;
    local_fc = 5;
    puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f4b98);
    ppuVar7 = (undefined8 **)0x0;
    FUN_140e63610(param_1,param_2,&local_108,0,puVar3,0);
  }
  local_c8 = 0xd0;
  uStack_ec = 0;
  local_f8 = &DAT_bff0000000000000;
  iVar1 = FUN_140e851f0(puVar4,&local_f8,DAT_141955260,0);
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if (iVar1 != 0) {
    local_c8 = 0xd0;
    if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    local_108 = 0;
    local_100 = 0;
    local_fc = 5;
    puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f4ac8);
    puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f4cf8);
    ppuVar7 = (undefined8 **)0x0;
    FUN_140e63610(param_1,param_2,&local_108,0,puVar3,0);
  }
  local_c8 = 0xd2;
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_108 = 0;
  local_100 = 0;
  local_fc = 5;
  FUN_140e87440(&local_e8,DAT_1419f4d88,0x80000000,&local_a0,(ulonglong)puVar3 & 0xffffffffffffff00,
                (ulonglong)ppuVar7 & 0xffffffffffffff00);
  switch(uStack_dc) {
  default:
switchD_140398592_caseD_1:
    uVar5 = 0;
    break;
  case 6:
    uVar5 = local_e8;
    break;
  case 0xf:
    iVar1 = (int)((ulonglong)local_e8 >> 0x20);
    if ((iVar1 != 0x1000000) && (iVar1 != 0x4000001)) goto switchD_140398592_caseD_1;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar2 = FUN_140e4a8b0(&local_e8);
    uVar5 = FUN_140e87250(uVar2);
  }
  puVar3 = &local_a0;
  puVar6 = (undefined8 *)FUN_140e63610(uVar5,param_2,&local_108,0,puVar3,0);
  uVar2 = (undefined4)((ulonglong)puVar3 >> 0x20);
  if (puVar6 != &local_c0) {
    local_f8 = (undefined1 *)*puVar6;
    uStack_f0 = *(undefined4 *)(puVar6 + 1);
    uStack_ec = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c0);
    }
    FUN_140041b80(&local_c0,&local_f8);
  }
  local_c8 = 0xd3;
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_108 = 0;
  local_100 = 0;
  local_fc = 5;
  local_b0 = &local_c0;
  FUN_140e645a0(&local_f8,gml_Script_anon_6034_anon_5904____struct___129_JUKEBOX_system,param_1);
  local_58 = (undefined4)local_f8;
  uStack_54 = local_f8._4_4_;
  uStack_50 = uStack_f0;
  uStack_4c = uStack_ec;
  if ((1 << (local_64 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_70);
  }
  FUN_140041b80(&local_70,&local_58);
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_a8 = &local_70;
  FUN_140e634e0(param_1,param_2,&local_108,2,CONCAT44(uVar2,DAT_1419f4b88),&local_b0);
  local_c8 = 0xda;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f4ac8);
  FUN_140e609c0(param_1);
  if (&local_e8 != puVar3) {
    local_58 = (undefined4)local_e8;
    uStack_54 = local_e8._4_4_;
    uStack_50 = uStack_e0;
    uStack_4c = uStack_dc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_58);
  }
  FUN_140e60910(1);
  local_c8 = 0xdb;
  if (puVar4 != param_3) {
    local_58 = *(undefined4 *)puVar4;
    uStack_54 = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_50 = *(undefined4 *)(puVar4 + 1);
    uStack_4c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_58);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c0);
  }
  if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a0);
  }
  if ((1 << ((byte)local_84 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_90);
  }
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
LAB_1403987fa:
  _eh_vector_destructor_iterator_(local_80,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_d8;
  return param_3;
}

