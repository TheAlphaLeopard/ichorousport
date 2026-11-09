// gml_Script_anon_10701_gml_Object_oBossEmbraceHalf_Create_0 @ 0x140768f60

undefined8 *
gml_Script_anon_10701_gml_Object_oBossEmbraceHalf_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *local_res18;
  undefined4 uVar8;
  ulonglong uVar7;
  undefined8 **ppuVar9;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  byte local_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  char *local_40;
  undefined4 local_38;
  
  local_40 = "gml_Script_anon@9783@gml_Object_oBossEmbraceHalf_Create_0";
  local_48 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_48;
  local_38 = 0x13b;
  uVar8 = 1;
  _eh_vector_constructor_iterator_(&local_88,0x10,1,FUN_1400424d0,FUN_140041b30);
  local_9c = 0xffffff;
  local_a8 = 0;
  bVar2 = true;
  bVar1 = false;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_38 = 0x13c;
  local_78 = 0;
  local_70 = 0;
  local_6c = 5;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f0d0);
  if (puVar4 != &local_88) {
    local_68 = *puVar4;
    uStack_60 = *(undefined4 *)(puVar4 + 1);
    uStack_5c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    FUN_140041b80(&local_88,&local_68);
  }
  local_res18 = &local_88;
  ppuVar9 = &local_res18;
  uVar7 = CONCAT44(uVar8,DAT_141a02ef8);
  uVar5 = FUN_140e634e0(param_1,param_2,&local_78,1,uVar7,ppuVar9);
  cVar3 = FUN_140e491e0(uVar5);
  if (cVar3 == '\0') {
    uStack_5c = 0;
    local_68 = 0x4040000000000000;
    puVar4 = &local_68;
    bVar2 = false;
    bVar1 = true;
  }
  else {
    uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f0d0);
    uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a080b8);
    FUN_140e87440(uVar5,DAT_141a070f8,0x80000000,&local_a8,uVar7 & 0xffffffffffffff00,
                  (ulonglong)ppuVar9 & 0xffffffffffffff00);
    uStack_8c = local_9c;
    uStack_90 = local_a0;
    if ((1 << ((byte)local_9c & 0x1f) & 0x46U) == 0) {
      local_98 = local_a8;
    }
    else {
      FUN_1400419b0(&local_98,&local_a8);
    }
    FUN_140042560(&local_98,uVar6);
    puVar4 = &local_98;
  }
  uVar8 = uStack_5c;
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
  if (bVar1) {
    if ((1 << ((byte)uVar8 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_68);
    }
  }
  if ((bVar2) && ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  _eh_vector_destructor_iterator_(&local_88,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_48;
  return param_3;
}

