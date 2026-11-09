// gml_Script____struct___49___get_glyph_data_anon_5426___scribble_class_page___scribble_class_page @ 0x14015cfa0

longlong *
gml_Script____struct___49___get_glyph_data_anon_5426___scribble_class_page___scribble_class_page
          (longlong *param_1,undefined8 param_2,longlong *param_3,int param_4,undefined8 *param_5)

{
  longlong lVar1;
  double dVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 local_78;
  undefined4 local_70;
  uint local_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  char *local_50;
  undefined4 local_48;
  
  local_50 = "gml_Script___get_line_data@anon@5289@__scribble_class_page@__scribble_class_page";
  local_58 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_58;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_48 = 0x8a;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a06688);
  plVar4 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a07298);
  local_6c = *(uint *)((longlong)puVar3 + 0xc);
  local_70 = *(undefined4 *)(puVar3 + 1);
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) == 0) {
    local_78 = *puVar3;
  }
  else {
    FUN_1400419b0(&local_78,puVar3);
  }
  uStack_5c = 7;
  local_68 = 1;
  FUN_1400462a0(&local_78,&local_68);
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((local_6c & 0xffffff) == 0) {
    uVar6 = (undefined4)local_78;
  }
  else {
    uVar6 = FUN_140e4b060(&local_78);
  }
  if (param_4 < 1) {
    param_5 = &DAT_1419df7b0;
  }
  else {
    param_5 = (undefined8 *)*param_5;
  }
  if ((*(uint *)((longlong)param_5 + 0xc) & 0xffffff) == 0) {
    uVar7 = (undefined4)*param_5;
  }
  else {
    uVar7 = FUN_140e4b060();
  }
  dVar2 = (double)FUN_140e78ec0(uVar7,0,uVar6);
  iVar5 = (int)dVar2;
  if (((*(uint *)((longlong)plVar4 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar4, lVar1 != 0)) {
    if ((iVar5 < 0) || (*(int *)(lVar1 + 0x24) <= iVar5)) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar5,
                    *(undefined4 *)(lVar1 + 0x24));
      plVar4 = (longlong *)0x0;
    }
    else {
      plVar4 = (longlong *)((longlong)iVar5 * 0x10 + *(longlong *)(lVar1 + 8));
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
  }
  if (plVar4 != param_3) {
    local_68 = (undefined4)*plVar4;
    uStack_64 = *(undefined4 *)((longlong)plVar4 + 4);
    uStack_60 = (undefined4)plVar4[1];
    uStack_5c = *(undefined4 *)((longlong)plVar4 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_68);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  DAT_141dc7a50 = (undefined8 *)local_58;
  return param_3;
}

